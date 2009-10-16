/*
 * Copyright (C) 2009 Hermann Meyer and James Warden
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 * --------------------------------------------------------------------------
 *
 *  This is the JConv settings handler class used by guitarix
 *  There can only be one instance at all time. To get a pointer
 *  to the unique instance, simply call
 *
 *  GxJConvSettings* jcset = GxJConvSettings::instance();
 *
 *  throughout the entire program.
 *
 *  This class belongs to the gx_jconv namespace
 *
 * --------------------------------------------------------------------------
 */
#include <cstring>
#include <list>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <libgen.h>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

#include <jack/jack.h>
#include <gtk/gtk.h>
#include <sndfile.h>
#include "guitarix.h"

using namespace gx_system;
using namespace gx_sndfile;
using namespace gx_jack;
using namespace gx_child_process;
using namespace gx_preset;

namespace gx_jconv
{

  // --------------- static vars
  float GxJConvSettings::checkbutton7 = 0.;

  // ---------------  constructor
  GxJConvSettings::GxJConvSettings()
  {
    // default parameters
    fIRDir      = getenv("HOME");
    fIRFile     = "nofile";

    fGain       = 0.2;
    fMem        = 8000;
    fMode       = kJConvCopy;
    fBufferSize = gx_jack::jack_bs;
    fOffset     = 0;
    fLength     = 0;
    fDelay      = 0;

    // invalidate due to no IR
    invalidate();
  }

  // --------------- reset internal setting
  void GxJConvSettings::resetSetting()
  {
    // default parameters
    fIRDir      = getenv("HOME");
    fIRFile     = "nofile";

    fGain       = 0.2;
    fMem        = 8000;
    fMode       = kJConvCopy;
    fBufferSize = gx_jack::jack_bs;
    fOffset     = 0;
    fLength     = 0;
    fDelay      = 0;

    // invalidate due to no IR
    invalidate();
  }


  // --------------- attempt to validate the settings
  // Note: for now, simply check that the IR file is a wav file
  void GxJConvSettings::validate() {
    static string cmd;
    cmd = getFullIRPath() + " | grep 'WAVE audio' > /dev/null";

    fValidSettings =
      (gx_system::gx_system_call("file", cmd) != gx_system::SYSTEM_OK) ?
      false : true;
  }


  // --------------- invalidate the settings via IR file
  inline void GxJConvSettings::invalidate()
  {
    fIRFile = "nofile";
    fValidSettings = false;
  }

  // --------------- instanciation of jconv handler
  inline GxJConvSettings* GxJConvSettings::instance()
  {
    static GxJConvSettings jcset;

    // return static instance
    return &jcset;
  }

  // --------------- configure JConv handler from file
  void GxJConvSettings::configureJConvSettings(string& presname)
  {
    // filename: preset or main setting
    if (presname.empty()) presname = "set";

    // open file for reading
    string jcfile = gx_user_dir + string("jconv_") + presname + ".conf";

    ifstream f(jcfile.c_str());
    if (!f.good()) {
      (void)gx_print_error("JConv Settings",
			   string("configuration file ") + jcfile +
			   string(" does not exist, using default conf"));

      // create it from the default
      (void)gx_save_jconv_settings(NULL, NULL);
      return;
    }

    // tmp vars
    string buffer, sval, sval2;
    int    ival;

    // --- fetch IR wav file directory
    getline(f, buffer);

    istringstream sline1(buffer);
    sline1 >> sval >> fIRDir;

    // --- fetch memory setting
    getline(f, buffer);

    istringstream sline2(buffer);
    sline2 >> sval >> ival >> ival >> fBufferSize >> fMem;

    // --- gain, offset, length and IR wav file
    getline(f,  buffer);

    istringstream sline3(buffer);
    sline3 >> sval  >> ival >> ival
	   >> fGain >> fDelay >> fOffset >> fLength >> ival >> fIRFile;

    // --- mode
    getline(f,  buffer);
    istringstream sline4(buffer);
    sline4 >> sval;

    if ((int)sval.find("copy") != -1)
      fMode = kJConvCopy;
    else
      fMode = kJConvRead;

    // validate
    validate();
  }

  // --------------------- save JConv parameters to file
  bool gx_save_jconv_settings(GtkWidget* widget, gpointer data)
  {
    // preset or main setting
    string presname = "set";
    if (!gx_current_preset.empty())
      presname = gx_current_preset;

    string jcfile = gx_user_dir + string("jconv_") + presname + ".conf";

    // open file for writing
    ofstream f(jcfile.c_str());
    if (!f.good()) {
      (void)gx_print_error("JConv Settings",
			   string("configuration could not be saved to ") + jcfile +
			   string(" giving up "));
      return false;;
    }

    // jconv setting handler
    GxJConvSettings* jcset = GxJConvSettings::instance();

    string tab = "\t ";

    // --- saving IR file to file
    f << "/cd " <<  jcset->getIRDir() << endl;

    // --- save memory partition
    f << "/convolver/new" << tab << "2" << tab << "2" << tab
      << jcset->getBufferSize() << tab << jcset->getMem() << endl;

    // --- save gain, delay, offset, length, channel, IR wav
    f << "/impulse/read" << tab << "1" << tab << "1" << tab
      << jcset->getGain()   << tab
      << jcset->getDelay()  << tab
      << jcset->getOffset() << tab
      << jcset->getLength() << tab
      << "1 " << jcset->getIRFile() << endl;

    switch(jcset->getMode()) {
    case kJConvRead:
      f << "/impulse/read" << tab << "2" << tab << "2" << tab
      << jcset->getGain()   << tab
      << jcset->getDelay()  << tab
      << jcset->getOffset() << tab
      << jcset->getLength() << tab
	<< "2 " << jcset->getIRFile() << endl;
      break;

    case kJConvCopy:
    default:
      f << "/impulse/copy" << tab << "2 2" << tab << "1 1" << endl;
      break;
    }


    // for backward compatibility, insert 2 comment lines
    f << "# " << jcset->getFullIRPath() << endl;
    switch(jcset->getMode()) {
    case kJConvRead:
      f << "# /impulse/read" << endl;
      break;

    case kJConvCopy:
    default:
      f << "# /impulse/copy" << endl;
      break;
    }

    // close file
    f.close();

    return true;
  }

  // --------------------- dump parameters on demand to a string
  void GxJConvSettings::dumpParameters()
  {
    static string tab = "  ";
    static ostringstream dump;
    dump.str("");

    dump << "--- JConv is using IR " << endl
	 << getFullIRPath()          << endl
	 << " in mode " << (fMode == kJConvCopy ? "'copy'" : "'read'") << endl

	 << tab << "buffer size: " << fBufferSize << tab
	 << tab << "memory: "      << fMem  << endl

	 << tab << "gain: "   << fGain   << tab
	 << tab << "delay: "  << fDelay  << tab
	 << tab << "offset: " << fOffset << tab
	 << tab << "length: " << fLength << tab;

    gx_print_info("Saving JConv parameters to file", dump.str().c_str());
  }

  // ---------------------  The JConv setting dialog GUI
  void gx_setting_jconv_dialog_gui(GtkWidget *widget, gpointer data)
  {
    GxJConvSettings* jcset = GxJConvSettings::instance();

    // -- main window
    GtkWidget* dialog = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_decorated(GTK_WINDOW(dialog), TRUE);
    gtk_window_set_deletable(GTK_WINDOW(dialog), FALSE);
    gtk_window_set_resizable(GTK_WINDOW(dialog), FALSE);
    gtk_window_set_gravity(GTK_WINDOW(dialog), GDK_GRAVITY_SOUTH);
    gtk_window_set_transient_for (GTK_WINDOW(dialog), GTK_WINDOW(gx_gui::fWindow));
    gtk_window_set_position (GTK_WINDOW(dialog), GTK_WIN_POS_MOUSE);
    gtk_window_set_keep_below (GTK_WINDOW(dialog), FALSE);
    gtk_window_set_title (GTK_WINDOW (dialog), "JConv Settings");
    gtk_window_set_destroy_with_parent(GTK_WINDOW(dialog), TRUE);

    // -- labels
    GtkWidget* label  = gtk_label_new ("           settings for              \n"
				       "      JConv  by  Fons Adriaensen     ");
    gx_gui::label1    = gtk_label_new (" \n");

    GtkWidget* label2 = gtk_label_new (" partition size");
    GtkWidget* label3 = gtk_label_new (" gain ");
    GtkWidget* label4 = gtk_label_new (" max mem ");
    GtkWidget* label5 = gtk_label_new (" mode ");

    // -- OK button
    GtkWidget* ok_button = gtk_button_new_with_label("OK");

    ostringstream lab; // label text

    // -- wave file info
    int chans      = 0; // channels
    int sr         = 0; // sample rate
    int framecount = 0; // number of frames
    SNDFILE* sf    = NULL;

    // try to open IR file
    jcset->validate();

    if (jcset->isValid()) {
      sf = openInputSoundFile(jcset->getFullIRPath().c_str(),
			      &chans, &sr, &framecount);
      closeSoundFile(sf);

      // check file sample rate vs jackd's
      if (sr != (int)gx_jack::jack_sr) {
	// dump some new text
	lab << "   The " << chans   << " channel Soundfile" << endl
	    << "   Sample rate ("   << sr << ")" << endl
	    << "   does not match"  << endl
	    << "   the jack Sample rate (" << gx_jack::jack_sr << ")" << endl
	    << "   Do you wish to resample it ?     " << endl;

	gint response =
	  gx_gui::gx_choice_dialog_without_entry (
               " IR Resampling ",
	       lab.str().c_str(),
	       "DO IT!", "Nope",
	       GTK_RESPONSE_YES,
	       GTK_RESPONSE_CANCEL,
	       GTK_RESPONSE_YES
	  );

	  // we are cancelling
	if (response == GTK_RESPONSE_CANCEL) {
	  jcset->invalidate(); // invalidating

	  gx_print_warning("IR Resampling",
			   "Resampling has been cancelled"
			   ", JConv setting invalidated");
	}
	else { // OK, resampling it
	  gx_resample_jconv_ir(NULL, NULL);
	  sr = gx_jack::jack_sr;
	}
      }
    }

    // display IR file info
    lab.str("");
    lab << "IR file info: " << endl
	<< chans            << " channel(s) "
	<< sr               << " Sample rate "
	<< framecount       << " Samples ";

    gtk_label_set_text(GTK_LABEL(gx_gui::label1), lab.str().c_str());

    // ----- setting GUI stuff with current initial values

    // -- GAIN
    GtkObject* gadj    = gtk_adjustment_new(jcset->getGain(), 0.0, 5.0, 0.1, 1.0, 0);
    GtkWidget* gslider = gtk_spin_button_new (GTK_ADJUSTMENT(gadj), 1.0, 1);
    jcset->setGain(gtk_adjustment_get_value(GTK_ADJUSTMENT(gadj)));

    // -- MEMORY
    GtkObject* madj    = gtk_adjustment_new((float)jcset->getMem(), 8000.0, 200000.0, 1000.0, 10000.0, 0);
    GtkWidget* mslider = gtk_spin_button_new (GTK_ADJUSTMENT(madj), 1.0, 1);
    jcset->setMem((guint)gtk_adjustment_get_value(GTK_ADJUSTMENT(madj)));

    // -- READ MODE
    GtkWidget* jcmode_combo = gtk_combo_box_new_text();
    string buffer = "/impulse/copy";
    gtk_combo_box_append_text(GTK_COMBO_BOX(jcmode_combo), buffer.c_str());

    buffer = "/impulse/read";
    gtk_combo_box_append_text(GTK_COMBO_BOX(jcmode_combo), buffer.c_str());

    // turn on default
    gtk_combo_box_set_active(GTK_COMBO_BOX(jcmode_combo), (gint)jcset->getMode());

    // -- BUFFER SIZE
    GtkWidget* bs_combo = gtk_combo_box_new_text();
    const int min_pow = 6;  // 2**6  = 64
    const int max_pow = 12; // 2**12 = 4096

    for (int i = min_pow; i <= max_pow; i++) {
      ostringstream s; jack_nframes_t bs = (jack_nframes_t)pow(2.,i); s << bs;
      gtk_combo_box_append_text(GTK_COMBO_BOX(bs_combo), s.str().c_str());

      if (bs == jcset->getBufferSize())
	gtk_combo_box_set_active(GTK_COMBO_BOX(bs_combo), i - min_pow);
    }

    // -- IR File Chooser
    gx_gui::fbutton =
      gtk_file_chooser_button_new ("Select a *.wav file", GTK_FILE_CHOOSER_ACTION_OPEN);

    gtk_file_chooser_get_local_only(GTK_FILE_CHOOSER (gx_gui::fbutton));

    GtkFileFilter* filter = gtk_file_filter_new ();
    gtk_file_filter_add_pattern (GTK_FILE_FILTER(filter), "*.wav");
    gtk_file_chooser_set_filter (GTK_FILE_CHOOSER (gx_gui::fbutton), GTK_FILE_FILTER(filter));


    // label for display the filename
    gx_gui::label6 = gtk_label_new(jcset->getIRFile().c_str());

    // display wave view of IR file
    GtkWidget* waveview = gx_wave_view();
    gtk_widget_set_size_request (GTK_WIDGET(waveview), 300.0, 200.0);

    //----- arrange widgets
    GtkWidget* box     = gtk_hbox_new (TRUE,  4);
    GtkWidget* box1    = gtk_hbox_new (TRUE,  4);
    GtkWidget* box2    = gtk_hbox_new (TRUE,  4);
    GtkWidget* box3    = gtk_hbox_new (TRUE,  4);
    GtkWidget* box4    = gtk_vbox_new (FALSE, 4);
    GtkWidget* box5    = gtk_hbox_new (FALSE, 4);
    GtkWidget* box6    = gtk_vbox_new (FALSE, 8);
    GtkWidget* box7    = gtk_vbox_new (FALSE, 8);
    GtkWidget* box8    = gtk_vbox_new (FALSE, 8);
    GtkWidget* viewbox = gtk_hbox_new (FALSE,  4);

    gtk_widget_set_size_request (GTK_WIDGET(box6), 8.0, 200.0);
    gtk_widget_set_size_request (GTK_WIDGET(box7), 8.0, 200.0);
    gtk_widget_set_size_request (GTK_WIDGET(box8), 300.0, 8.0);

    gtk_container_add (GTK_CONTAINER (box4),   label);
    gtk_container_add (GTK_CONTAINER (box4),    viewbox);
    gtk_container_add (GTK_CONTAINER (box4),    box8);
    gtk_container_add (GTK_CONTAINER (viewbox), box6);
    gtk_container_add (GTK_CONTAINER (viewbox), waveview);
    gtk_container_add (GTK_CONTAINER (viewbox), box7);


    gtk_container_add (GTK_CONTAINER (dialog), box4);
    gtk_container_add (GTK_CONTAINER (box5),   gx_gui::label6);
    gtk_container_add (GTK_CONTAINER (box5),   gx_gui::fbutton);
    gtk_container_add (GTK_CONTAINER (box4),   box5);
    gtk_container_add (GTK_CONTAINER (box4),   gx_gui::label1);
    gtk_container_add (GTK_CONTAINER (box4),   box3);
    gtk_container_add (GTK_CONTAINER (box3),   jcmode_combo);
    gtk_container_add (GTK_CONTAINER (box3),   label5);
    gtk_container_add (GTK_CONTAINER (box4),   box);
    gtk_container_add (GTK_CONTAINER (box),    bs_combo);
    gtk_container_add (GTK_CONTAINER (box),    label2);
    gtk_container_add (GTK_CONTAINER (box4),   box2);
    gtk_container_add (GTK_CONTAINER (box2),   mslider);
    gtk_container_add (GTK_CONTAINER (box2),   label4);
    gtk_container_add (GTK_CONTAINER (box4),   box1);
    gtk_container_add (GTK_CONTAINER (box1),   gslider);
    gtk_container_add (GTK_CONTAINER (box1),   label3);
    gtk_container_add (GTK_CONTAINER (box4),   ok_button);

    //----- connect signals to callback funcs
    // IR resampling
    g_signal_connect_swapped (gx_gui::fbutton, "file-set",
			      G_CALLBACK(gx_select_and_draw_jconv_ir), gx_gui::fbutton);
    g_signal_connect_swapped (gx_gui::fbutton, "file-set",
			      G_CALLBACK(gx_waveview_set_value), gx_gui::fbutton);

    // confirm and save setting
    g_signal_connect_swapped(ok_button, "pressed",
			     G_CALLBACK(gx_save_jconv_settings), gx_gui::fbutton);
    g_signal_connect_swapped(ok_button, "clicked",
			     G_CALLBACK(gtk_widget_destroy), dialog);

    // gain setting
    g_signal_connect(GTK_OBJECT(gadj), "value-changed",
		     G_CALLBACK(gx_acquire_jconv_value),
		     (gpointer)kJConvGain);

    // memory
    g_signal_connect(GTK_OBJECT(madj), "value-changed",
		     G_CALLBACK(gx_acquire_jconv_value),
		     (gpointer)kJConvMem);

    // buffer size
    g_signal_connect(GTK_OBJECT (bs_combo), "changed",
		     G_CALLBACK(gx_acquire_jconv_value),
		     (gpointer)kJConvBuffersize);

    // read mode
    g_signal_connect(GTK_OBJECT (jcmode_combo), "changed",
		     G_CALLBACK(gx_acquire_jconv_value),
		     (gpointer)kJConvMode);

    // gtk_file_filter is brocken in >gtk-2.16.1 when used with ...set_filename
    gtk_file_chooser_set_filename(GTK_FILE_CHOOSER(gx_gui::fbutton),
				  jcset->getIRFile().c_str());

    // get path from used wav file
    gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER (gx_gui::fbutton),
					jcset->getIRDir().c_str());

    //----- show the JConv setting dialog
    gtk_widget_show_all(dialog);
  }


  // ---------------  retrieve a setting value
  void gx_acquire_jconv_value(GtkWidget *widget, gpointer data )
  {
    GxJConvSettings* jcset = GxJConvSettings::instance();

    GxJConvParamType ptype = (GxJConvParamType)GPOINTER_TO_INT(data);
    string s;

    switch(ptype) {
    case kJConvGain:
      jcset->setGain(gtk_adjustment_get_value(GTK_ADJUSTMENT(widget)));
      break;

    case kJConvMem:
      jcset->setMem((guint)gtk_adjustment_get_value(GTK_ADJUSTMENT(widget)));
      break;

    case kJConvBuffersize:
      s = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
      jcset->setBufferSize((jack_nframes_t)atoi(s.c_str()));
      break;

    case kJConvMode:
      s = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
      jcset->setMode(((int)s.find("copy") != -1 ? kJConvCopy : kJConvRead));
      break;

    case kJConvOffset:
    case kJConvLength:
    case kJConvDelay:
    default:  // do nothing
      break;
    }
  }


  // --------------- IR file resampler
  void gx_resample_jconv_ir(GtkWidget *widget, gpointer data)
  {
    GxJConvSettings* jcset = GxJConvSettings::instance();

    // retrieve IR filename
    string resampled = jcset->getFullIRPath();

    // add tmp chars so we dump the resampled data to a new file
    if ((int)resampled.find(".wav") != -1)
      resampled.insert(resampled.find(".wav"), "_tmp");

    // resample it
    GxResampleStatus status =
    resampleSoundFile(jcset->getFullIRPath().c_str(),
		      resampled.c_str(),
		      gx_jack::jack_sr);

    if (status == kNoError)
    {
      // make a backup of original IR file
      string backup = jcset->getFullIRPath();
      if ((int)backup.find(".wav") != -1)
	backup.insert(backup.find(".wav"), "_orig");

      // back it up
      rename(jcset->getFullIRPath().c_str(), backup.c_str());

      // rename resampled file to IR file
      rename(resampled.c_str(), jcset->getFullIRPath().c_str());
      return;
    }

    gx_print_error("Resampling JConv IR file",
		   "resampling failed with error code " + gx_i2a(status));
  }

  // --------------- IR file processing
  void gx_select_and_draw_jconv_ir(GtkWidget* widget, gpointer data )
  {
    GxJConvSettings* jcset = GxJConvSettings::instance();

    // get the chosen file from the file chooser
    string file   = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(widget));
    string folder = gtk_file_chooser_get_current_folder (GTK_FILE_CHOOSER(widget));

    if (!file.empty()) {

      // clean up name from spaces
      string tmp_file = file;
      gx_nospace_in_name(tmp_file, "_");
      rename(file.c_str(), tmp_file.c_str());
      file = tmp_file;

      // let's save it into the JConv settings
      tmp_file = basename((char*)file.c_str());
      jcset->setIRFile(tmp_file);
      jcset->setIRDir(folder);

      // let's validate it
      jcset->validate();

      if (jcset->isValid())
      {

	// gtk_file_filter is broken in >gtk-2.16.1 when used with ...set_filename
	// gtk_file_chooser_set_filename(GTK_FILE_CHOOSER(widget), jconvwav.c_str());

	//----- get path from used wav file
        gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(gx_gui::fbutton),
					    folder.c_str());

        //----- get name from used wav file
        gtk_label_set_text(GTK_LABEL(gx_gui::label6),
			   jcset->getIRFile().c_str());

	//----- get snd info from IR file
        int chans, sr, framescount;

        SNDFILE* sf = openInputSoundFile(file.c_str(),
					 &chans, &sr, &framescount);
        closeSoundFile(sf);

	ostringstream lab;

	// check file sample rate vs jackd's
        if (sr != (int)gx_jack::jack_sr)
        {
	  // dump some new text
	  lab << "   The " << chans   << " channel Soundfile" << endl
	      << "   Sample rate ("   << sr << ")" << endl
	      << "   does not match"  << endl
	      << "   the jack Sample rate (" << gx_jack::jack_sr << ")" << endl
	      << "   Do you wish to resample it ?     " << endl;

	  gint response =
	    gx_gui::gx_choice_dialog_without_entry (
	      " IR Resampling ",
	      lab.str().c_str(),
	      "DO IT!", "Nope",
	      GTK_RESPONSE_YES,
	      GTK_RESPONSE_CANCEL,
	      GTK_RESPONSE_YES
	    );

	  // we are cancelling
	  if (response == GTK_RESPONSE_CANCEL) {
	    gx_print_warning("IR Resampling",
			     "Resampling has been cancelled"
			     ", JConv setting invalidated");

	    jcset->setIRFile("nofile");
	    jcset->setIRDir(folder);
	    jcset->validate(); // invalidate
	  }
	  else { // OK, resampling it
	    gx_resample_jconv_ir(NULL, NULL);
	    sr = gx_jack::jack_sr;
	  }
        }

	// display in the wave viewer
	lab.str("");
	lab << "IR file info: " << endl
	    << chans            << " channel(s) "
	    << gx_jack::jack_sr << " Sample rate "
	    << framescount      << " Samples ";

	gx_waveview_set_value(widget, data);
        gtk_label_set_text(GTK_LABEL(gx_gui::label1), lab.str().c_str());


      } // end of if (file is wave audio)
      else
      {
	jcset->invalidate();
	gx_print_error("IR File Processing",
		       jcset->getIRFile() +
		       string(" is not a WAVE Audio file! Invalidating ... "));
      }

    } // end of if (!file.empty())
    else
    {
      gx_print_error("IR File Processing",
		     "Filename empty, you probably need to re-pick a file");
    }
  }
} /* end of gx_jconv namespace */
