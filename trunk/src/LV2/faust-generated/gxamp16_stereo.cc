// generated from file '../src/LV2/faust/gxamp16_stereo.dsp' by dsp2cc:
// Code generated with Faust 0.9.57 (http://faust.grame.fr)

#include "valve.h"

namespace gxamp16_stereo {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fRec0[3];
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fVec0[2];
	double 	fConst12;
	double 	fRec3[2];
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec4[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec6[2];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fVec1[2];
	double 	fConst22;
	double 	fRec19[2];
	double 	fRec18[2];
	double 	fRec17[3];
	double 	fRec16[3];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec20[2];
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fVec2[2];
	double 	fConst26;
	double 	fRec21[2];
	double 	fRec15[2];
	double 	fConst27;
	double 	fConst28;
	double 	fRec14[2];
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fVec3[2];
	double 	fConst32;
	double 	fRec24[2];
	double 	fRec23[2];
	double 	fRec22[2];
	double 	fRec13[2];
	double 	fRec12[2];
	double 	fVec4[2];
	double 	fRec25[2];
	double 	fRec11[2];
	double 	fRec10[2];
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fVec5[2];
	double 	fConst36;
	double 	fRec28[2];
	double 	fRec27[2];
	double 	fRec26[2];
	double 	fRec9[2];
	double 	fVec6[2];
	double 	fRec29[2];
	double 	fRec8[2];
	double 	fRec7[2];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec32[2];
	int 	IOTA;
	double 	fVec7[32768];
	int 	iConst37;
	double 	fRec31[2];
	double 	fConst38;
	double 	fRec30[2];
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fRec40[3];
	double 	fVec8[2];
	double 	fConst69;
	double 	fRec39[2];
	double 	fConst70;
	double 	fRec38[2];
	double 	fRec37[3];
	double 	fVec9[2];
	double 	fConst71;
	double 	fConst72;
	double 	fRec36[2];
	double 	fRec35[3];
	double 	fConst73;
	double 	fRec34[3];
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fRec44[2];
	double 	fRec43[3];
	double 	fVec10[2];
	double 	fConst78;
	double 	fConst79;
	double 	fRec42[2];
	double 	fRec41[3];
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fRec48[2];
	double 	fRec47[3];
	double 	fConst84;
	double 	fRec46[3];
	double 	fRec45[3];
	double 	fRec50[2];
	double 	fRec49[3];
	double 	fVec11[2];
	double 	fRec33[2];
	double 	fVec12[2];
	double 	fRec5[2];
	double 	fRec2[2];
	double 	fRec1[2];
	double 	fVec13[2];
	double 	fRec53[2];
	double 	fRec52[2];
	double 	fRec51[2];
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fRec54[3];
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fRec55[3];
	double 	fVec14[2];
	double 	fRec71[2];
	double 	fRec70[2];
	double 	fRec69[3];
	double 	fRec68[3];
	double 	fVec15[2];
	double 	fRec72[2];
	double 	fRec67[2];
	double 	fRec66[2];
	double 	fVec16[2];
	double 	fRec75[2];
	double 	fRec74[2];
	double 	fRec73[2];
	double 	fRec65[2];
	double 	fRec64[2];
	double 	fVec17[2];
	double 	fRec76[2];
	double 	fRec63[2];
	double 	fRec62[2];
	double 	fVec18[2];
	double 	fRec79[2];
	double 	fRec78[2];
	double 	fRec77[2];
	double 	fRec61[2];
	double 	fVec19[2];
	double 	fRec80[2];
	double 	fRec60[2];
	double 	fRec59[2];
	double 	fRec83[2];
	double 	fVec20[32768];
	double 	fRec82[2];
	double 	fRec81[2];
	double 	fRec91[3];
	double 	fVec21[2];
	double 	fRec90[2];
	double 	fRec89[2];
	double 	fRec88[3];
	double 	fVec22[2];
	double 	fRec87[2];
	double 	fRec86[3];
	double 	fRec85[3];
	double 	fRec95[2];
	double 	fRec94[3];
	double 	fVec23[2];
	double 	fRec93[2];
	double 	fRec92[3];
	double 	fRec99[2];
	double 	fRec98[3];
	double 	fRec97[3];
	double 	fRec96[3];
	double 	fRec101[2];
	double 	fRec100[3];
	double 	fVec24[2];
	double 	fRec84[2];
	double 	fVec25[2];
	double 	fRec58[2];
	double 	fVec26[2];
	double 	fRec102[2];
	double 	fRec57[2];
	double 	fRec56[2];
	double 	fVec27[2];
	double 	fRec105[2];
	double 	fRec104[2];
	double 	fRec103[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, float *input0, float *input1, float *output0, float *output1);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, float *input0, float *input1, float *output0, float *output1, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "pre 12AT7/ push pull 6V6";
	name = N_("pre 12AT7/ push pull 6V6");
	mono_audio = 0;
	stereo_audio = compute_static;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<3; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<3; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<32768; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<3; i++) fRec37[i] = 0;
	for (int i=0; i<2; i++) fVec9[i] = 0;
	for (int i=0; i<2; i++) fRec36[i] = 0;
	for (int i=0; i<3; i++) fRec35[i] = 0;
	for (int i=0; i<3; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fRec44[i] = 0;
	for (int i=0; i<3; i++) fRec43[i] = 0;
	for (int i=0; i<2; i++) fVec10[i] = 0;
	for (int i=0; i<2; i++) fRec42[i] = 0;
	for (int i=0; i<3; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec48[i] = 0;
	for (int i=0; i<3; i++) fRec47[i] = 0;
	for (int i=0; i<3; i++) fRec46[i] = 0;
	for (int i=0; i<3; i++) fRec45[i] = 0;
	for (int i=0; i<2; i++) fRec50[i] = 0;
	for (int i=0; i<3; i++) fRec49[i] = 0;
	for (int i=0; i<2; i++) fVec11[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fVec12[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fVec13[i] = 0;
	for (int i=0; i<2; i++) fRec53[i] = 0;
	for (int i=0; i<2; i++) fRec52[i] = 0;
	for (int i=0; i<2; i++) fRec51[i] = 0;
	for (int i=0; i<3; i++) fRec54[i] = 0;
	for (int i=0; i<3; i++) fRec55[i] = 0;
	for (int i=0; i<2; i++) fVec14[i] = 0;
	for (int i=0; i<2; i++) fRec71[i] = 0;
	for (int i=0; i<2; i++) fRec70[i] = 0;
	for (int i=0; i<3; i++) fRec69[i] = 0;
	for (int i=0; i<3; i++) fRec68[i] = 0;
	for (int i=0; i<2; i++) fVec15[i] = 0;
	for (int i=0; i<2; i++) fRec72[i] = 0;
	for (int i=0; i<2; i++) fRec67[i] = 0;
	for (int i=0; i<2; i++) fRec66[i] = 0;
	for (int i=0; i<2; i++) fVec16[i] = 0;
	for (int i=0; i<2; i++) fRec75[i] = 0;
	for (int i=0; i<2; i++) fRec74[i] = 0;
	for (int i=0; i<2; i++) fRec73[i] = 0;
	for (int i=0; i<2; i++) fRec65[i] = 0;
	for (int i=0; i<2; i++) fRec64[i] = 0;
	for (int i=0; i<2; i++) fVec17[i] = 0;
	for (int i=0; i<2; i++) fRec76[i] = 0;
	for (int i=0; i<2; i++) fRec63[i] = 0;
	for (int i=0; i<2; i++) fRec62[i] = 0;
	for (int i=0; i<2; i++) fVec18[i] = 0;
	for (int i=0; i<2; i++) fRec79[i] = 0;
	for (int i=0; i<2; i++) fRec78[i] = 0;
	for (int i=0; i<2; i++) fRec77[i] = 0;
	for (int i=0; i<2; i++) fRec61[i] = 0;
	for (int i=0; i<2; i++) fVec19[i] = 0;
	for (int i=0; i<2; i++) fRec80[i] = 0;
	for (int i=0; i<2; i++) fRec60[i] = 0;
	for (int i=0; i<2; i++) fRec59[i] = 0;
	for (int i=0; i<2; i++) fRec83[i] = 0;
	for (int i=0; i<32768; i++) fVec20[i] = 0;
	for (int i=0; i<2; i++) fRec82[i] = 0;
	for (int i=0; i<2; i++) fRec81[i] = 0;
	for (int i=0; i<3; i++) fRec91[i] = 0;
	for (int i=0; i<2; i++) fVec21[i] = 0;
	for (int i=0; i<2; i++) fRec90[i] = 0;
	for (int i=0; i<2; i++) fRec89[i] = 0;
	for (int i=0; i<3; i++) fRec88[i] = 0;
	for (int i=0; i<2; i++) fVec22[i] = 0;
	for (int i=0; i<2; i++) fRec87[i] = 0;
	for (int i=0; i<3; i++) fRec86[i] = 0;
	for (int i=0; i<3; i++) fRec85[i] = 0;
	for (int i=0; i<2; i++) fRec95[i] = 0;
	for (int i=0; i<3; i++) fRec94[i] = 0;
	for (int i=0; i<2; i++) fVec23[i] = 0;
	for (int i=0; i<2; i++) fRec93[i] = 0;
	for (int i=0; i<3; i++) fRec92[i] = 0;
	for (int i=0; i<2; i++) fRec99[i] = 0;
	for (int i=0; i<3; i++) fRec98[i] = 0;
	for (int i=0; i<3; i++) fRec97[i] = 0;
	for (int i=0; i<3; i++) fRec96[i] = 0;
	for (int i=0; i<2; i++) fRec101[i] = 0;
	for (int i=0; i<3; i++) fRec100[i] = 0;
	for (int i=0; i<2; i++) fVec24[i] = 0;
	for (int i=0; i<2; i++) fRec84[i] = 0;
	for (int i=0; i<2; i++) fVec25[i] = 0;
	for (int i=0; i<2; i++) fRec58[i] = 0;
	for (int i=0; i<2; i++) fVec26[i] = 0;
	for (int i=0; i<2; i++) fRec102[i] = 0;
	for (int i=0; i<2; i++) fRec57[i] = 0;
	for (int i=0; i<2; i++) fRec56[i] = 0;
	for (int i=0; i<2; i++) fVec27[i] = 0;
	for (int i=0; i<2; i++) fRec105[i] = 0;
	for (int i=0; i<2; i++) fRec104[i] = 0;
	for (int i=0; i<2; i++) fRec103[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (60601.32228774711 / double(iConst0));
	fConst2 = (0 - (2 * cos(fConst1)));
	fConst3 = (0.03546099290780142 * sin(fConst1));
	fConst4 = (1 - fConst3);
	fConst5 = (1.0 / (1 + fConst3));
	fConst6 = (1.0 / tan((97.38937226128358 / double(iConst0))));
	fConst7 = (1 + fConst6);
	fConst8 = (0 - ((1 - fConst6) / fConst7));
	fConst9 = (1.0 / tan((20517.741620594938 / double(iConst0))));
	fConst10 = (1 + fConst9);
	fConst11 = (0 - ((1 - fConst9) / fConst10));
	fConst12 = (1.0 / fConst10);
	fConst13 = tan((37699.11184307752 / double(iConst0)));
	fConst14 = (2 * (1 - (1.0 / faustpower<2>(fConst13))));
	fConst15 = (1.0 / fConst13);
	fConst16 = (1 + ((fConst15 - 0.7653668647301795) / fConst13));
	fConst17 = (1.0 / (1 + ((0.7653668647301795 + fConst15) / fConst13)));
	fConst18 = (1 + ((fConst15 - 1.8477590650225735) / fConst13));
	fConst19 = (1.0 / (1 + ((fConst15 + 1.8477590650225735) / fConst13)));
	fConst20 = (973.8937226128359 / double(iConst0));
	fConst21 = (1 - fConst20);
	fConst22 = (1.0 / (1 + fConst20));
	fConst23 = (1.0 / tan((270.1769682087222 / double(iConst0))));
	fConst24 = (1 + fConst23);
	fConst25 = (0 - ((1 - fConst23) / fConst24));
	fConst26 = (1.0 / fConst24);
	fConst27 = (0 - fConst6);
	fConst28 = (0.025 / fConst7);
	fConst29 = (1.0 / tan((414.6902302738527 / double(iConst0))));
	fConst30 = (1 + fConst29);
	fConst31 = (0 - ((1 - fConst29) / fConst30));
	fConst32 = (1.0 / fConst30);
	fConst33 = (1.0 / tan((609.4689747964198 / double(iConst0))));
	fConst34 = (1 + fConst33);
	fConst35 = (0 - ((1 - fConst33) / fConst34));
	fConst36 = (1.0 / fConst34);
	IOTA = 0;
	iConst37 = int((int((0.1111111111111111 * iConst0)) & 65535));
	fConst38 = (0.009000000000000008 / double(iConst0));
	fConst39 = tan((942.4777960769379 / double(iConst0)));
	fConst40 = (1.0 / faustpower<2>(fConst39));
	fConst41 = (2 * (1 - fConst40));
	fConst42 = (1.0 / fConst39);
	fConst43 = (1 + ((fConst42 - 1.0) / fConst39));
	fConst44 = (1.0 / (1 + ((1.0 + fConst42) / fConst39)));
	fConst45 = tan((3769.9111843077517 / double(iConst0)));
	fConst46 = (1.0 / faustpower<2>(fConst45));
	fConst47 = (2 * (1 - fConst46));
	fConst48 = (1.0 / fConst45);
	fConst49 = (1 + ((fConst48 - 1.0000000000000004) / fConst45));
	fConst50 = (1 + ((fConst48 + 1.0000000000000004) / fConst45));
	fConst51 = (1.0 / fConst50);
	fConst52 = (1 + fConst48);
	fConst53 = (0 - ((1 - fConst48) / fConst52));
	fConst54 = tan((10053.096491487338 / double(iConst0)));
	fConst55 = (1.0 / faustpower<2>(fConst54));
	fConst56 = (2 * (1 - fConst55));
	fConst57 = (1.0 / fConst54);
	fConst58 = (1 + ((fConst57 - 1.0000000000000004) / fConst54));
	fConst59 = (1 + ((1.0000000000000004 + fConst57) / fConst54));
	fConst60 = (1.0 / fConst59);
	fConst61 = (1 + fConst57);
	fConst62 = (0 - ((1 - fConst57) / fConst61));
	fConst63 = tan((47123.8898038469 / double(iConst0)));
	fConst64 = (2 * (1 - (1.0 / faustpower<2>(fConst63))));
	fConst65 = (1.0 / fConst63);
	fConst66 = (1 + ((fConst65 - 1.414213562373095) / fConst63));
	fConst67 = (1 + ((1.414213562373095 + fConst65) / fConst63));
	fConst68 = (1.0 / fConst67);
	fConst69 = (1.0 / (fConst7 * fConst67));
	fConst70 = (1.0 / fConst61);
	fConst71 = (0 - fConst48);
	fConst72 = (1.0 / (fConst52 * fConst59));
	fConst73 = (2 * (0 - fConst46));
	fConst74 = (1 + ((fConst42 - 1.0000000000000004) / fConst39));
	fConst75 = (1.0 / (1 + ((fConst42 + 1.0000000000000004) / fConst39)));
	fConst76 = (1 + fConst42);
	fConst77 = (0 - ((1 - fConst42) / fConst76));
	fConst78 = (0 - fConst42);
	fConst79 = (1.0 / (fConst76 * fConst50));
	fConst80 = (2 * (0 - fConst40));
	fConst81 = (1 + ((fConst48 - 1.0) / fConst45));
	fConst82 = (1.0 / (1 + ((1.0 + fConst48) / fConst45)));
	fConst83 = (0 - fConst57);
	fConst84 = (2 * (0 - fConst55));
	fConst85 = (49574.33207364693 / double(iConst0));
	fConst86 = (0 - (2 * cos(fConst85)));
	fConst87 = (0.07042253521126761 * sin(fConst85));
	fConst88 = (1 - fConst87);
	fConst89 = (1.0 / (1 + fConst87));
	fConst90 = (31704.95306002819 / double(iConst0));
	fConst91 = (0 - (2 * cos(fConst90)));
	fConst92 = (0.026178010471204185 * sin(fConst90));
	fConst93 = (1 - fConst92);
	fConst94 = (1.0 / (1 + fConst92));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, float *input0, float *input1, float *output0, float *output1)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (1.000000000000001e-05 * fslider1);
	double 	fSlow2 = (0.0010000000000000009 * pow(10,(0.05 * fslider2)));
	double 	fSlow3 = fslider3;
	double 	fSlow4 = (1.25 * fSlow3);
	double 	fSlow5 = (2 * (fSlow3 - 0.5));
	double 	fSlow6 = (0.024937655860349125 * (1 - max((double)0, fSlow5)));
	double 	fSlow7 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow8 = (fConst75 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow9 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow10 = (fConst75 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow11 = (1 - max((double)0, (0 - fSlow5)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fRec0[1] + (fConst2 * fRec0[2]));
		fRec0[0] = (fConst5 * (fConst4 - fTemp0));
		double fTemp1 = (fConst5 * fTemp0);
		double fTemp2 = (1e-15 + (0.0041 * fRec2[1]));
		fVec0[0] = fTemp2;
		fRec3[0] = ((fConst12 * (fVec0[0] + fVec0[1])) + (fConst11 * fRec3[1]));
		fRec4[0] = (fSlow0 + (0.999 * fRec4[1]));
		fRec6[0] = (fSlow1 + (0.999 * fRec6[1]));
		double fTemp3 = (1 - fRec6[0]);
		double fTemp4 = (double)input0[i];
		fVec1[0] = fTemp4;
		fRec19[0] = (fConst22 * ((fVec1[0] - fVec1[1]) + (fConst21 * fRec19[1])));
		fRec18[0] = (fConst22 * ((fRec19[0] - fRec19[1]) + (fConst21 * fRec18[1])));
		fRec17[0] = (fRec18[0] - (fConst19 * ((fConst18 * fRec17[2]) + (fConst14 * fRec17[1]))));
		fRec16[0] = ((fConst19 * (fRec17[2] + (fRec17[0] + (2 * fRec17[1])))) - (fConst17 * ((fConst16 * fRec16[2]) + (fConst14 * fRec16[1]))));
		fRec20[0] = (fSlow2 + (0.999 * fRec20[1]));
		double fTemp5 = (1e-15 + (0.027 * fRec15[1]));
		fVec2[0] = fTemp5;
		fRec21[0] = ((fConst26 * (fVec2[0] + fVec2[1])) + (fConst25 * fRec21[1]));
		fRec15[0] = (Ftube(TUBE_TABLE_12AT7_68k, ((fRec21[0] + (fConst17 * (fRec20[0] * (fRec16[2] + (fRec16[0] + (2 * fRec16[1])))))) - 2.617752999999999)) - 153.04618518518518);
		fRec14[0] = ((fConst28 * ((fConst27 * fRec15[1]) + (fConst6 * fRec15[0]))) + (fConst8 * fRec14[1]));
		double fTemp6 = (1e-15 + (0.015 * fRec23[1]));
		fVec3[0] = fTemp6;
		fRec24[0] = ((fConst32 * (fVec3[0] + fVec3[1])) + (fConst31 * fRec24[1]));
		fRec23[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec24[0] + fRec13[1]) - 1.8873329999999988)) - 124.17779999999999);
		fRec22[0] = ((fConst28 * ((fConst27 * fRec23[1]) + (fConst6 * fRec23[0]))) + (fConst8 * fRec22[1]));
		fRec13[0] = ((0.6 * fRec22[0]) + fRec14[0]);
		fRec12[0] = ((fConst12 * (fRec13[0] + fRec13[1])) + (fConst11 * fRec12[1]));
		double fTemp7 = (1e-15 + (0.015 * fRec11[1]));
		fVec4[0] = fTemp7;
		fRec25[0] = ((fConst32 * (fVec4[0] + fVec4[1])) + (fConst31 * fRec25[1]));
		fRec11[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec25[0] + fRec12[0]) - 1.8873329999999988)) - 124.17779999999999);
		fRec10[0] = ((fConst28 * ((fConst27 * fRec11[1]) + (fConst6 * fRec11[0]))) + (fConst8 * fRec10[1]));
		double fTemp8 = (1e-15 + (0.0082 * fRec27[1]));
		fVec5[0] = fTemp8;
		fRec28[0] = ((fConst36 * (fVec5[0] + fVec5[1])) + (fConst35 * fRec28[1]));
		fRec27[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec28[0] + fRec9[1]) - 1.2569619999999988)) - 96.7119512195122);
		fRec26[0] = ((fConst28 * ((fConst27 * fRec27[1]) + (fConst6 * fRec27[0]))) + (fConst8 * fRec26[1]));
		fRec9[0] = ((0.6 * fRec26[0]) + fRec10[0]);
		double fTemp9 = (1e-15 + (0.0082 * fRec8[1]));
		fVec6[0] = fTemp9;
		fRec29[0] = ((fConst36 * (fVec6[0] + fVec6[1])) + (fConst35 * fRec29[1]));
		fRec8[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec29[0] + fRec9[0]) - 1.2569619999999988)) - 96.7119512195122);
		fRec7[0] = ((fConst28 * ((fConst27 * fRec8[1]) + (fConst6 * fRec8[0]))) + (fConst8 * fRec7[1]));
		double fTemp10 = (fRec7[0] * fTemp3);
		double fTemp11 = (fRec7[0] * fRec6[0]);
		double fTemp12 = fabs(fTemp11);
		fRec32[0] = ((9.999999999998899e-05 * fTemp12) + (0.9999 * fRec32[1]));
		double fTemp13 = max(fRec32[0], fTemp12);
		fVec7[IOTA&32767] = fTemp13;
		fRec31[0] = ((fVec7[IOTA&32767] + fRec31[1]) - fVec7[(IOTA-iConst37)&32767]);
		fRec30[0] = ((fConst38 * fRec31[0]) + (0.999 * fRec30[1]));
		double fTemp14 = max(-1.0, min(-0.01, (fVec7[IOTA&32767] - (1.0 + (1.02 * fRec30[0])))));
		double fTemp15 = (0 - fTemp14);
		double fTemp16 = (40.1 * fTemp15);
		double fTemp17 = max((double)-600, fTemp16);
		double fTemp18 = (0 - fTemp17);
		double fTemp19 = (fTemp11 - fTemp14);
		double fTemp20 = (40.1 * fTemp19);
		double fTemp21 = max((double)-600, fTemp20);
		double fTemp22 = (0 - fTemp21);
		double fTemp23 = (((int((fabs(fTemp20) > 0.0001)))?((int((fTemp21 < -50)))?(exp(fTemp21) * fTemp22):(fTemp21 / (1 - exp(fTemp22)))):(1 + (fTemp19 * (20.05 + (134.00083333333336 * fTemp19))))) - ((int((fabs(fTemp16) > 0.0001)))?((int((fTemp17 < -50)))?(exp(fTemp17) * fTemp18):(fTemp17 / (1 - exp(fTemp18)))):(1 + (fTemp15 * (20.05 + (134.00083333333336 * fTemp15))))));
		double fTemp24 = (fConst41 * fRec34[1]);
		fRec40[0] = ((0.024937655860349125 * fTemp23) - (fConst68 * ((fConst66 * fRec40[2]) + (fConst64 * fRec40[1]))));
		double fTemp25 = (fRec40[2] + (fRec40[0] + (2 * fRec40[1])));
		fVec8[0] = fTemp25;
		fRec39[0] = ((fConst69 * ((fConst27 * fVec8[1]) + (fConst6 * fVec8[0]))) + (fConst8 * fRec39[1]));
		fRec38[0] = ((fConst70 * (fRec39[0] + fRec39[1])) + (fConst62 * fRec38[1]));
		fRec37[0] = (fRec38[0] - (fConst60 * ((fConst58 * fRec37[2]) + (fConst56 * fRec37[1]))));
		double fTemp26 = (fRec37[2] + (fRec37[0] + (2 * fRec37[1])));
		fVec9[0] = fTemp26;
		fRec36[0] = ((fConst72 * ((fConst71 * fVec9[1]) + (fConst48 * fVec9[0]))) + (fConst53 * fRec36[1]));
		fRec35[0] = (fRec36[0] - (fConst51 * ((fConst49 * fRec35[2]) + (fConst47 * fRec35[1]))));
		fRec34[0] = ((fConst51 * (((fConst46 * fRec35[0]) + (fConst73 * fRec35[1])) + (fConst46 * fRec35[2]))) - (fConst44 * ((fConst43 * fRec34[2]) + fTemp24)));
		double fTemp27 = max((double)-1, min((double)1, (fSlow7 * (fRec34[2] + (fConst44 * (fTemp24 + (fConst43 * fRec34[0])))))));
		fRec44[0] = ((fConst72 * (fVec9[0] + fVec9[1])) + (fConst53 * fRec44[1]));
		fRec43[0] = (fRec44[0] - (fConst51 * ((fConst49 * fRec43[2]) + (fConst47 * fRec43[1]))));
		double fTemp28 = (fRec43[2] + (fRec43[0] + (2 * fRec43[1])));
		fVec10[0] = fTemp28;
		fRec42[0] = ((fConst79 * ((fConst78 * fVec10[1]) + (fConst42 * fVec10[0]))) + (fConst77 * fRec42[1]));
		fRec41[0] = (fRec42[0] - (fConst75 * ((fConst74 * fRec41[2]) + (fConst41 * fRec41[1]))));
		double fTemp29 = max((double)-1, min((double)1, (fSlow8 * (((fConst40 * fRec41[0]) + (fConst80 * fRec41[1])) + (fConst40 * fRec41[2])))));
		double fTemp30 = (fConst41 * fRec45[1]);
		double fTemp31 = (fConst47 * fRec46[1]);
		fRec48[0] = ((fConst70 * ((fConst83 * fRec39[1]) + (fConst57 * fRec39[0]))) + (fConst62 * fRec48[1]));
		fRec47[0] = (fRec48[0] - (fConst60 * ((fConst58 * fRec47[2]) + (fConst56 * fRec47[1]))));
		fRec46[0] = ((fConst60 * (((fConst55 * fRec47[0]) + (fConst84 * fRec47[1])) + (fConst55 * fRec47[2]))) - (fConst82 * ((fConst81 * fRec46[2]) + fTemp31)));
		fRec45[0] = ((fRec46[2] + (fConst82 * (fTemp31 + (fConst81 * fRec46[0])))) - (fConst44 * ((fConst43 * fRec45[2]) + fTemp30)));
		double fTemp32 = max((double)-1, min((double)1, (fSlow9 * (fRec45[2] + (fConst44 * (fTemp30 + (fConst43 * fRec45[0])))))));
		fRec50[0] = ((fConst79 * (fVec10[0] + fVec10[1])) + (fConst77 * fRec50[1]));
		fRec49[0] = (fRec50[0] - (fConst75 * ((fConst74 * fRec49[2]) + (fConst41 * fRec49[1]))));
		double fTemp33 = max((double)-1, min((double)1, (fSlow10 * (fRec49[2] + (fRec49[0] + (2 * fRec49[1]))))));
		double fTemp34 = ((1.2589412 * (fTemp33 * (1 - (0.3333333333333333 * faustpower<2>(fTemp33))))) + (1.584893192 * ((fTemp32 * (1 - (0.3333333333333333 * faustpower<2>(fTemp32)))) + ((fTemp29 * (1 - (0.3333333333333333 * faustpower<2>(fTemp29)))) + (0.8413951417869425 * (fTemp27 * (1 - (0.3333333333333333 * faustpower<2>(fTemp27)))))))));
		fVec11[0] = fTemp34;
		fRec33[0] = ((fConst12 * (fVec11[0] + fVec11[1])) + (fConst11 * fRec33[1]));
		double fTemp35 = (((fSlow11 * fRec33[0]) + (fSlow6 * fTemp23)) + (fTemp10 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp10))) - 1)))));
		fVec12[0] = fTemp35;
		fRec5[0] = ((fConst12 * (fVec12[0] + fVec12[1])) + (fConst11 * fRec5[1]));
		double fTemp36 = (fRec5[0] * fRec4[0]);
		fRec2[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fTemp36 + fRec3[0]) - 0.664540999999999)) - 87.91682926829267);
		fRec1[0] = ((fConst28 * ((fConst27 * fRec2[1]) + (fConst6 * fRec2[0]))) + (fConst8 * fRec1[1]));
		double fTemp37 = (1e-15 + (0.0041 * fRec52[1]));
		fVec13[0] = fTemp37;
		fRec53[0] = ((fConst12 * (fVec13[0] + fVec13[1])) + (fConst11 * fRec53[1]));
		fRec52[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec53[0] + fTemp36) - 0.659760999999999)) - 89.08268292682925);
		fRec51[0] = ((fConst28 * ((fConst27 * fRec52[1]) + (fConst6 * fRec52[0]))) + (fConst8 * fRec51[1]));
		double fTemp38 = (fRec54[1] + (fConst86 * fRec54[2]));
		fRec54[0] = (fConst89 * (fConst88 - fTemp38));
		double fTemp39 = (fConst89 * fTemp38);
		double fTemp40 = (fRec55[1] + (fConst91 * fRec55[2]));
		fRec55[0] = (fConst94 * (fConst93 - fTemp40));
		double fTemp41 = (fConst94 * fTemp40);
		output0[i] = (FAUSTFLOAT)(fTemp41 + (fRec55[0] * (fTemp39 + (fRec54[0] * (((min(0.7, fRec51[0]) + max(-0.75, fRec1[0])) * fRec0[0]) + fTemp1)))));
		double fTemp42 = (double)input1[i];
		fVec14[0] = fTemp42;
		fRec71[0] = (fConst22 * ((fVec14[0] - fVec14[1]) + (fConst21 * fRec71[1])));
		fRec70[0] = (fConst22 * ((fRec71[0] - fRec71[1]) + (fConst21 * fRec70[1])));
		fRec69[0] = (fRec70[0] - (fConst19 * ((fConst18 * fRec69[2]) + (fConst14 * fRec69[1]))));
		fRec68[0] = ((fConst19 * (fRec69[2] + (fRec69[0] + (2 * fRec69[1])))) - (fConst17 * ((fConst16 * fRec68[2]) + (fConst14 * fRec68[1]))));
		double fTemp43 = (1e-15 + (0.027 * fRec67[1]));
		fVec15[0] = fTemp43;
		fRec72[0] = ((fConst26 * (fVec15[0] + fVec15[1])) + (fConst25 * fRec72[1]));
		fRec67[0] = (Ftube(TUBE_TABLE_12AT7_68k, ((fRec72[0] + (fConst17 * (fRec20[0] * (fRec68[2] + (fRec68[0] + (2 * fRec68[1])))))) - 2.617752999999999)) - 153.04618518518518);
		fRec66[0] = ((fConst28 * ((fConst27 * fRec67[1]) + (fConst6 * fRec67[0]))) + (fConst8 * fRec66[1]));
		double fTemp44 = (1e-15 + (0.015 * fRec74[1]));
		fVec16[0] = fTemp44;
		fRec75[0] = ((fConst32 * (fVec16[0] + fVec16[1])) + (fConst31 * fRec75[1]));
		fRec74[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec75[0] + fRec65[1]) - 1.8873329999999988)) - 124.17779999999999);
		fRec73[0] = ((fConst28 * ((fConst27 * fRec74[1]) + (fConst6 * fRec74[0]))) + (fConst8 * fRec73[1]));
		fRec65[0] = ((0.6 * fRec73[0]) + fRec66[0]);
		fRec64[0] = ((fConst12 * (fRec65[0] + fRec65[1])) + (fConst11 * fRec64[1]));
		double fTemp45 = (1e-15 + (0.015 * fRec63[1]));
		fVec17[0] = fTemp45;
		fRec76[0] = ((fConst32 * (fVec17[0] + fVec17[1])) + (fConst31 * fRec76[1]));
		fRec63[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec76[0] + fRec64[0]) - 1.8873329999999988)) - 124.17779999999999);
		fRec62[0] = ((fConst28 * ((fConst27 * fRec63[1]) + (fConst6 * fRec63[0]))) + (fConst8 * fRec62[1]));
		double fTemp46 = (1e-15 + (0.0082 * fRec78[1]));
		fVec18[0] = fTemp46;
		fRec79[0] = ((fConst36 * (fVec18[0] + fVec18[1])) + (fConst35 * fRec79[1]));
		fRec78[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec79[0] + fRec61[1]) - 1.2569619999999988)) - 96.7119512195122);
		fRec77[0] = ((fConst28 * ((fConst27 * fRec78[1]) + (fConst6 * fRec78[0]))) + (fConst8 * fRec77[1]));
		fRec61[0] = ((0.6 * fRec77[0]) + fRec62[0]);
		double fTemp47 = (1e-15 + (0.0082 * fRec60[1]));
		fVec19[0] = fTemp47;
		fRec80[0] = ((fConst36 * (fVec19[0] + fVec19[1])) + (fConst35 * fRec80[1]));
		fRec60[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec80[0] + fRec61[0]) - 1.2569619999999988)) - 96.7119512195122);
		fRec59[0] = ((fConst28 * ((fConst27 * fRec60[1]) + (fConst6 * fRec60[0]))) + (fConst8 * fRec59[1]));
		double fTemp48 = (fTemp3 * fRec59[0]);
		double fTemp49 = (fRec6[0] * fRec59[0]);
		double fTemp50 = fabs(fTemp49);
		fRec83[0] = ((9.999999999998899e-05 * fTemp50) + (0.9999 * fRec83[1]));
		double fTemp51 = max(fRec83[0], fTemp50);
		fVec20[IOTA&32767] = fTemp51;
		fRec82[0] = ((fVec20[IOTA&32767] + fRec82[1]) - fVec20[(IOTA-iConst37)&32767]);
		fRec81[0] = ((fConst38 * fRec82[0]) + (0.999 * fRec81[1]));
		double fTemp52 = max(-1.0, min(-0.01, (fVec20[IOTA&32767] - (1.0 + (1.02 * fRec81[0])))));
		double fTemp53 = (0 - fTemp52);
		double fTemp54 = (40.1 * fTemp53);
		double fTemp55 = max((double)-600, fTemp54);
		double fTemp56 = (0 - fTemp55);
		double fTemp57 = (fTemp49 - fTemp52);
		double fTemp58 = (40.1 * fTemp57);
		double fTemp59 = max((double)-600, fTemp58);
		double fTemp60 = (0 - fTemp59);
		double fTemp61 = (((int((fabs(fTemp58) > 0.0001)))?((int((fTemp59 < -50)))?(exp(fTemp59) * fTemp60):(fTemp59 / (1 - exp(fTemp60)))):(1 + (fTemp57 * (20.05 + (134.00083333333336 * fTemp57))))) - ((int((fabs(fTemp54) > 0.0001)))?((int((fTemp55 < -50)))?(exp(fTemp55) * fTemp56):(fTemp55 / (1 - exp(fTemp56)))):(1 + (fTemp53 * (20.05 + (134.00083333333336 * fTemp53))))));
		double fTemp62 = (fConst41 * fRec85[1]);
		fRec91[0] = ((0.024937655860349125 * fTemp61) - (fConst68 * ((fConst66 * fRec91[2]) + (fConst64 * fRec91[1]))));
		double fTemp63 = (fRec91[2] + (fRec91[0] + (2 * fRec91[1])));
		fVec21[0] = fTemp63;
		fRec90[0] = ((fConst69 * ((fConst27 * fVec21[1]) + (fConst6 * fVec21[0]))) + (fConst8 * fRec90[1]));
		fRec89[0] = ((fConst70 * (fRec90[0] + fRec90[1])) + (fConst62 * fRec89[1]));
		fRec88[0] = (fRec89[0] - (fConst60 * ((fConst58 * fRec88[2]) + (fConst56 * fRec88[1]))));
		double fTemp64 = (fRec88[2] + (fRec88[0] + (2 * fRec88[1])));
		fVec22[0] = fTemp64;
		fRec87[0] = ((fConst72 * ((fConst71 * fVec22[1]) + (fConst48 * fVec22[0]))) + (fConst53 * fRec87[1]));
		fRec86[0] = (fRec87[0] - (fConst51 * ((fConst49 * fRec86[2]) + (fConst47 * fRec86[1]))));
		fRec85[0] = ((fConst51 * (((fConst46 * fRec86[0]) + (fConst73 * fRec86[1])) + (fConst46 * fRec86[2]))) - (fConst44 * ((fConst43 * fRec85[2]) + fTemp62)));
		double fTemp65 = max((double)-1, min((double)1, (fSlow7 * (fRec85[2] + (fConst44 * (fTemp62 + (fConst43 * fRec85[0])))))));
		fRec95[0] = ((fConst72 * (fVec22[0] + fVec22[1])) + (fConst53 * fRec95[1]));
		fRec94[0] = (fRec95[0] - (fConst51 * ((fConst49 * fRec94[2]) + (fConst47 * fRec94[1]))));
		double fTemp66 = (fRec94[2] + (fRec94[0] + (2 * fRec94[1])));
		fVec23[0] = fTemp66;
		fRec93[0] = ((fConst79 * ((fConst78 * fVec23[1]) + (fConst42 * fVec23[0]))) + (fConst77 * fRec93[1]));
		fRec92[0] = (fRec93[0] - (fConst75 * ((fConst74 * fRec92[2]) + (fConst41 * fRec92[1]))));
		double fTemp67 = max((double)-1, min((double)1, (fSlow8 * (((fConst40 * fRec92[0]) + (fConst80 * fRec92[1])) + (fConst40 * fRec92[2])))));
		double fTemp68 = (fConst41 * fRec96[1]);
		double fTemp69 = (fConst47 * fRec97[1]);
		fRec99[0] = ((fConst70 * ((fConst83 * fRec90[1]) + (fConst57 * fRec90[0]))) + (fConst62 * fRec99[1]));
		fRec98[0] = (fRec99[0] - (fConst60 * ((fConst58 * fRec98[2]) + (fConst56 * fRec98[1]))));
		fRec97[0] = ((fConst60 * (((fConst55 * fRec98[0]) + (fConst84 * fRec98[1])) + (fConst55 * fRec98[2]))) - (fConst82 * ((fConst81 * fRec97[2]) + fTemp69)));
		fRec96[0] = ((fRec97[2] + (fConst82 * (fTemp69 + (fConst81 * fRec97[0])))) - (fConst44 * ((fConst43 * fRec96[2]) + fTemp68)));
		double fTemp70 = max((double)-1, min((double)1, (fSlow9 * (fRec96[2] + (fConst44 * (fTemp68 + (fConst43 * fRec96[0])))))));
		fRec101[0] = ((fConst79 * (fVec23[0] + fVec23[1])) + (fConst77 * fRec101[1]));
		fRec100[0] = (fRec101[0] - (fConst75 * ((fConst74 * fRec100[2]) + (fConst41 * fRec100[1]))));
		double fTemp71 = max((double)-1, min((double)1, (fSlow10 * (fRec100[2] + (fRec100[0] + (2 * fRec100[1]))))));
		double fTemp72 = ((1.2589412 * (fTemp71 * (1 - (0.3333333333333333 * faustpower<2>(fTemp71))))) + (1.584893192 * ((fTemp70 * (1 - (0.3333333333333333 * faustpower<2>(fTemp70)))) + ((fTemp67 * (1 - (0.3333333333333333 * faustpower<2>(fTemp67)))) + (0.8413951417869425 * (fTemp65 * (1 - (0.3333333333333333 * faustpower<2>(fTemp65)))))))));
		fVec24[0] = fTemp72;
		fRec84[0] = ((fConst12 * (fVec24[0] + fVec24[1])) + (fConst11 * fRec84[1]));
		double fTemp73 = (((fSlow11 * fRec84[0]) + (fSlow6 * fTemp61)) + (fTemp48 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp48))) - 1)))));
		fVec25[0] = fTemp73;
		fRec58[0] = ((fConst12 * (fVec25[0] + fVec25[1])) + (fConst11 * fRec58[1]));
		double fTemp74 = (fRec4[0] * fRec58[0]);
		double fTemp75 = (1e-15 + (0.0041 * fRec57[1]));
		fVec26[0] = fTemp75;
		fRec102[0] = ((fConst12 * (fVec26[0] + fVec26[1])) + (fConst11 * fRec102[1]));
		fRec57[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fRec102[0] + fTemp74) - 0.664540999999999)) - 87.91682926829267);
		fRec56[0] = ((fConst28 * ((fConst27 * fRec57[1]) + (fConst6 * fRec57[0]))) + (fConst8 * fRec56[1]));
		double fTemp76 = (1e-15 + (0.0041 * fRec104[1]));
		fVec27[0] = fTemp76;
		fRec105[0] = ((fConst12 * (fVec27[0] + fVec27[1])) + (fConst11 * fRec105[1]));
		fRec104[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec105[0] + fTemp74) - 0.659760999999999)) - 89.08268292682925);
		fRec103[0] = ((fConst28 * ((fConst27 * fRec104[1]) + (fConst6 * fRec104[0]))) + (fConst8 * fRec103[1]));
		output1[i] = (FAUSTFLOAT)(fTemp41 + (fRec55[0] * (fTemp39 + (fRec54[0] * (fTemp1 + (fRec0[0] * (min(0.7, fRec103[0]) + max(-0.75, fRec56[0]))))))));
		// post processing
		fRec103[1] = fRec103[0];
		fRec104[1] = fRec104[0];
		fRec105[1] = fRec105[0];
		fVec27[1] = fVec27[0];
		fRec56[1] = fRec56[0];
		fRec57[1] = fRec57[0];
		fRec102[1] = fRec102[0];
		fVec26[1] = fVec26[0];
		fRec58[1] = fRec58[0];
		fVec25[1] = fVec25[0];
		fRec84[1] = fRec84[0];
		fVec24[1] = fVec24[0];
		fRec100[2] = fRec100[1]; fRec100[1] = fRec100[0];
		fRec101[1] = fRec101[0];
		fRec96[2] = fRec96[1]; fRec96[1] = fRec96[0];
		fRec97[2] = fRec97[1]; fRec97[1] = fRec97[0];
		fRec98[2] = fRec98[1]; fRec98[1] = fRec98[0];
		fRec99[1] = fRec99[0];
		fRec92[2] = fRec92[1]; fRec92[1] = fRec92[0];
		fRec93[1] = fRec93[0];
		fVec23[1] = fVec23[0];
		fRec94[2] = fRec94[1]; fRec94[1] = fRec94[0];
		fRec95[1] = fRec95[0];
		fRec85[2] = fRec85[1]; fRec85[1] = fRec85[0];
		fRec86[2] = fRec86[1]; fRec86[1] = fRec86[0];
		fRec87[1] = fRec87[0];
		fVec22[1] = fVec22[0];
		fRec88[2] = fRec88[1]; fRec88[1] = fRec88[0];
		fRec89[1] = fRec89[0];
		fRec90[1] = fRec90[0];
		fVec21[1] = fVec21[0];
		fRec91[2] = fRec91[1]; fRec91[1] = fRec91[0];
		fRec81[1] = fRec81[0];
		fRec82[1] = fRec82[0];
		fRec83[1] = fRec83[0];
		fRec59[1] = fRec59[0];
		fRec60[1] = fRec60[0];
		fRec80[1] = fRec80[0];
		fVec19[1] = fVec19[0];
		fRec61[1] = fRec61[0];
		fRec77[1] = fRec77[0];
		fRec78[1] = fRec78[0];
		fRec79[1] = fRec79[0];
		fVec18[1] = fVec18[0];
		fRec62[1] = fRec62[0];
		fRec63[1] = fRec63[0];
		fRec76[1] = fRec76[0];
		fVec17[1] = fVec17[0];
		fRec64[1] = fRec64[0];
		fRec65[1] = fRec65[0];
		fRec73[1] = fRec73[0];
		fRec74[1] = fRec74[0];
		fRec75[1] = fRec75[0];
		fVec16[1] = fVec16[0];
		fRec66[1] = fRec66[0];
		fRec67[1] = fRec67[0];
		fRec72[1] = fRec72[0];
		fVec15[1] = fVec15[0];
		fRec68[2] = fRec68[1]; fRec68[1] = fRec68[0];
		fRec69[2] = fRec69[1]; fRec69[1] = fRec69[0];
		fRec70[1] = fRec70[0];
		fRec71[1] = fRec71[0];
		fVec14[1] = fVec14[0];
		fRec55[2] = fRec55[1]; fRec55[1] = fRec55[0];
		fRec54[2] = fRec54[1]; fRec54[1] = fRec54[0];
		fRec51[1] = fRec51[0];
		fRec52[1] = fRec52[0];
		fRec53[1] = fRec53[0];
		fVec13[1] = fVec13[0];
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec5[1] = fRec5[0];
		fVec12[1] = fVec12[0];
		fRec33[1] = fRec33[0];
		fVec11[1] = fVec11[0];
		fRec49[2] = fRec49[1]; fRec49[1] = fRec49[0];
		fRec50[1] = fRec50[0];
		fRec45[2] = fRec45[1]; fRec45[1] = fRec45[0];
		fRec46[2] = fRec46[1]; fRec46[1] = fRec46[0];
		fRec47[2] = fRec47[1]; fRec47[1] = fRec47[0];
		fRec48[1] = fRec48[0];
		fRec41[2] = fRec41[1]; fRec41[1] = fRec41[0];
		fRec42[1] = fRec42[0];
		fVec10[1] = fVec10[0];
		fRec43[2] = fRec43[1]; fRec43[1] = fRec43[0];
		fRec44[1] = fRec44[0];
		fRec34[2] = fRec34[1]; fRec34[1] = fRec34[0];
		fRec35[2] = fRec35[1]; fRec35[1] = fRec35[0];
		fRec36[1] = fRec36[0];
		fVec9[1] = fVec9[0];
		fRec37[2] = fRec37[1]; fRec37[1] = fRec37[0];
		fRec38[1] = fRec38[0];
		fRec39[1] = fRec39[0];
		fVec8[1] = fVec8[0];
		fRec40[2] = fRec40[1]; fRec40[1] = fRec40[0];
		fRec30[1] = fRec30[0];
		fRec31[1] = fRec31[0];
		IOTA = IOTA+1;
		fRec32[1] = fRec32[0];
		fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fRec29[1] = fRec29[0];
		fVec6[1] = fVec6[0];
		fRec9[1] = fRec9[0];
		fRec26[1] = fRec26[0];
		fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fVec5[1] = fVec5[0];
		fRec10[1] = fRec10[0];
		fRec11[1] = fRec11[0];
		fRec25[1] = fRec25[0];
		fVec4[1] = fVec4[0];
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
		fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fVec3[1] = fVec3[0];
		fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fRec21[1] = fRec21[0];
		fVec2[1] = fVec2[0];
		fRec20[1] = fRec20[0];
		fRec16[2] = fRec16[1]; fRec16[1] = fRec16[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fVec1[1] = fVec1[0];
		fRec6[1] = fRec6[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fVec0[1] = fVec0[0];
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, float *input0, float *input1, float *output0, float *output1, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, input1, output0, output1);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider3_ = (float*)data; // , 0.35, 0.0, 1.0, 0.01 
		break;
	case PREGAIN: 
		fslider2_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
		break;
	case WET_DRY: 
		fslider1_ = (float*)data; // , 1e+02, 0.0, 1e+02, 1.0 
		break;
	case GAIN1: 
		fslider0_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   PREGAIN, 
   WET_DRY, 
   GAIN1, 
} PortIndex;
*/

} // end namespace gxamp16_stereo
