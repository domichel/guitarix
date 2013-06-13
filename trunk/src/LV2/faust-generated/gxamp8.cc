// generated from file '../src/LV2/faust/gxamp8.dsp' by dsp2cc:
// Code generated with Faust 0.9.57 (http://faust.grame.fr)

#include "valve.h"

namespace gxamp8 {

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
	double 	fConst22;
	double 	fVec1[2];
	double 	fConst23;
	double 	fRec19[2];
	double 	fRec18[2];
	double 	fRec17[3];
	double 	fRec16[3];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec20[2];
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fVec2[2];
	double 	fConst28;
	double 	fRec21[2];
	double 	fRec15[2];
	double 	fConst29;
	double 	fConst30;
	double 	fRec14[2];
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fVec3[2];
	double 	fConst34;
	double 	fRec24[2];
	double 	fRec23[2];
	double 	fRec22[2];
	double 	fRec13[2];
	double 	fRec12[2];
	double 	fVec4[2];
	double 	fRec25[2];
	double 	fRec11[2];
	double 	fRec10[2];
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fVec5[2];
	double 	fConst38;
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
	int 	iConst39;
	double 	fRec31[2];
	double 	fConst40;
	double 	fRec30[2];
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
	double 	fConst69;
	double 	fConst70;
	double 	fRec40[3];
	double 	fVec8[2];
	double 	fConst71;
	double 	fRec39[2];
	double 	fConst72;
	double 	fRec38[2];
	double 	fRec37[3];
	double 	fVec9[2];
	double 	fConst73;
	double 	fConst74;
	double 	fRec36[2];
	double 	fRec35[3];
	double 	fConst75;
	double 	fRec34[3];
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fRec44[2];
	double 	fRec43[3];
	double 	fVec10[2];
	double 	fConst80;
	double 	fConst81;
	double 	fRec42[2];
	double 	fRec41[3];
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fRec48[2];
	double 	fRec47[3];
	double 	fConst86;
	double 	fRec46[3];
	double 	fRec45[3];
	double 	fRec50[2];
	double 	fRec49[3];
	double 	fVec11[2];
	double 	fRec33[2];
	double 	fVec12[2];
	double 	fRec5[2];
	double 	fRec2[2];
	double 	fConst87;
	double 	fRec1[2];
	double 	fVec13[2];
	double 	fRec53[2];
	double 	fRec52[2];
	double 	fRec51[2];
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fRec54[3];
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fRec55[3];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, float *input0, float *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, float *input0, float *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "pre 12AU7/ push-pull 6V6";
	name = N_("pre 12AU7/ push-pull 6V6");
	mono_audio = compute_static;
	stereo_audio = 0;
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
	fConst17 = (1 + ((0.7653668647301795 + fConst15) / fConst13));
	fConst18 = (1.0 / fConst17);
	fConst19 = (1 + ((fConst15 - 1.8477590650225735) / fConst13));
	fConst20 = (1.0 / (1 + ((fConst15 + 1.8477590650225735) / fConst13)));
	fConst21 = (973.8937226128359 / double(iConst0));
	fConst22 = (1 - fConst21);
	fConst23 = (1.0 / (1 + fConst21));
	fConst24 = (2.0 / fConst17);
	fConst25 = (1.0 / tan((270.1769682087222 / double(iConst0))));
	fConst26 = (1 + fConst25);
	fConst27 = (0 - ((1 - fConst25) / fConst26));
	fConst28 = (1.0 / fConst26);
	fConst29 = (0 - fConst6);
	fConst30 = (0.1 / fConst7);
	fConst31 = (1.0 / tan((414.6902302738527 / double(iConst0))));
	fConst32 = (1 + fConst31);
	fConst33 = (0 - ((1 - fConst31) / fConst32));
	fConst34 = (1.0 / fConst32);
	fConst35 = (1.0 / tan((609.4689747964198 / double(iConst0))));
	fConst36 = (1 + fConst35);
	fConst37 = (0 - ((1 - fConst35) / fConst36));
	fConst38 = (1.0 / fConst36);
	IOTA = 0;
	iConst39 = int((int((0.1111111111111111 * iConst0)) & 65535));
	fConst40 = (0.009000000000000008 / double(iConst0));
	fConst41 = tan((942.4777960769379 / double(iConst0)));
	fConst42 = (1.0 / faustpower<2>(fConst41));
	fConst43 = (2 * (1 - fConst42));
	fConst44 = (1.0 / fConst41);
	fConst45 = (1 + ((fConst44 - 1.0) / fConst41));
	fConst46 = (1.0 / (1 + ((1.0 + fConst44) / fConst41)));
	fConst47 = tan((3769.9111843077517 / double(iConst0)));
	fConst48 = (1.0 / faustpower<2>(fConst47));
	fConst49 = (2 * (1 - fConst48));
	fConst50 = (1.0 / fConst47);
	fConst51 = (1 + ((fConst50 - 1.0000000000000004) / fConst47));
	fConst52 = (1 + ((fConst50 + 1.0000000000000004) / fConst47));
	fConst53 = (1.0 / fConst52);
	fConst54 = (1 + fConst50);
	fConst55 = (0 - ((1 - fConst50) / fConst54));
	fConst56 = tan((10053.096491487338 / double(iConst0)));
	fConst57 = (1.0 / faustpower<2>(fConst56));
	fConst58 = (2 * (1 - fConst57));
	fConst59 = (1.0 / fConst56);
	fConst60 = (1 + ((fConst59 - 1.0000000000000004) / fConst56));
	fConst61 = (1 + ((1.0000000000000004 + fConst59) / fConst56));
	fConst62 = (1.0 / fConst61);
	fConst63 = (1 + fConst59);
	fConst64 = (0 - ((1 - fConst59) / fConst63));
	fConst65 = tan((47123.8898038469 / double(iConst0)));
	fConst66 = (2 * (1 - (1.0 / faustpower<2>(fConst65))));
	fConst67 = (1.0 / fConst65);
	fConst68 = (1 + ((fConst67 - 1.414213562373095) / fConst65));
	fConst69 = (1 + ((1.414213562373095 + fConst67) / fConst65));
	fConst70 = (1.0 / fConst69);
	fConst71 = (1.0 / (fConst7 * fConst69));
	fConst72 = (1.0 / fConst63);
	fConst73 = (0 - fConst50);
	fConst74 = (1.0 / (fConst54 * fConst61));
	fConst75 = (2 * (0 - fConst48));
	fConst76 = (1 + ((fConst44 - 1.0000000000000004) / fConst41));
	fConst77 = (1.0 / (1 + ((fConst44 + 1.0000000000000004) / fConst41)));
	fConst78 = (1 + fConst44);
	fConst79 = (0 - ((1 - fConst44) / fConst78));
	fConst80 = (0 - fConst44);
	fConst81 = (1.0 / (fConst78 * fConst52));
	fConst82 = (2 * (0 - fConst42));
	fConst83 = (1 + ((fConst50 - 1.0) / fConst47));
	fConst84 = (1.0 / (1 + ((1.0 + fConst50) / fConst47)));
	fConst85 = (0 - fConst59);
	fConst86 = (2 * (0 - fConst57));
	fConst87 = (0.025 / fConst7);
	fConst88 = (49574.33207364693 / double(iConst0));
	fConst89 = (0 - (2 * cos(fConst88)));
	fConst90 = (0.07042253521126761 * sin(fConst88));
	fConst91 = (1 - fConst90);
	fConst92 = (1.0 / (1 + fConst90));
	fConst93 = (31704.95306002819 / double(iConst0));
	fConst94 = (0 - (2 * cos(fConst93)));
	fConst95 = (0.026178010471204185 * sin(fConst93));
	fConst96 = (1 - fConst95);
	fConst97 = (1.0 / (1 + fConst95));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, float *input0, float *output0)
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
	double 	fSlow8 = (fConst77 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow9 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow10 = (fConst77 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow11 = (1 - max((double)0, (0 - fSlow5)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fRec0[1] + (fConst2 * fRec0[2]));
		fRec0[0] = (fConst5 * (fConst4 - fTemp0));
		double fTemp1 = (1e-15 + (0.0041 * fRec2[1]));
		fVec0[0] = fTemp1;
		fRec3[0] = ((fConst12 * (fVec0[0] + fVec0[1])) + (fConst11 * fRec3[1]));
		fRec4[0] = (fSlow0 + (0.999 * fRec4[1]));
		fRec6[0] = (fSlow1 + (0.999 * fRec6[1]));
		double fTemp2 = (double)input0[i];
		fVec1[0] = fTemp2;
		fRec19[0] = (fConst23 * ((fVec1[0] - fVec1[1]) + (fConst22 * fRec19[1])));
		fRec18[0] = (fConst23 * ((fRec19[0] - fRec19[1]) + (fConst22 * fRec18[1])));
		fRec17[0] = (fRec18[0] - (fConst20 * ((fConst19 * fRec17[2]) + (fConst14 * fRec17[1]))));
		fRec16[0] = ((fConst20 * (fRec17[2] + (fRec17[0] + (2 * fRec17[1])))) - (fConst18 * ((fConst16 * fRec16[2]) + (fConst14 * fRec16[1]))));
		fRec20[0] = (fSlow2 + (0.999 * fRec20[1]));
		double fTemp3 = (1e-15 + (0.027 * fRec15[1]));
		fVec2[0] = fTemp3;
		fRec21[0] = ((fConst28 * (fVec2[0] + fVec2[1])) + (fConst27 * fRec21[1]));
		fRec15[0] = (Ftube(TUBE_TABLE_12AU7_68k, ((fRec21[0] + (fConst24 * (fRec20[0] * (fRec16[2] + (fRec16[0] + (2 * fRec16[1])))))) - 1.2572399999999988)) - 83.43555555555557);
		fRec14[0] = ((fConst30 * ((fConst29 * fRec15[1]) + (fConst6 * fRec15[0]))) + (fConst8 * fRec14[1]));
		double fTemp4 = (1e-15 + (0.015 * fRec23[1]));
		fVec3[0] = fTemp4;
		fRec24[0] = ((fConst34 * (fVec3[0] + fVec3[1])) + (fConst33 * fRec24[1]));
		fRec23[0] = (Ftube(TUBE_TABLE_12AU7_250k, ((fRec24[0] + fRec13[1]) - 0.776161999999999)) - 78.25586666666666);
		fRec22[0] = ((fConst30 * ((fConst29 * fRec23[1]) + (fConst6 * fRec23[0]))) + (fConst8 * fRec22[1]));
		fRec13[0] = ((0.6 * fRec22[0]) + fRec14[0]);
		fRec12[0] = ((fConst12 * (fRec13[0] + fRec13[1])) + (fConst11 * fRec12[1]));
		double fTemp5 = (1e-15 + (0.015 * fRec11[1]));
		fVec4[0] = fTemp5;
		fRec25[0] = ((fConst34 * (fVec4[0] + fVec4[1])) + (fConst33 * fRec25[1]));
		fRec11[0] = (Ftube(TUBE_TABLE_12AU7_250k, ((fRec25[0] + fRec12[0]) - 0.776161999999999)) - 78.25586666666666);
		fRec10[0] = ((fConst30 * ((fConst29 * fRec11[1]) + (fConst6 * fRec11[0]))) + (fConst8 * fRec10[1]));
		double fTemp6 = (1e-15 + (0.0082 * fRec27[1]));
		fVec5[0] = fTemp6;
		fRec28[0] = ((fConst38 * (fVec5[0] + fVec5[1])) + (fConst37 * fRec28[1]));
		fRec27[0] = (Ftube(TUBE_TABLE_12AU7_250k, ((fRec28[0] + fRec9[1]) - 0.445486999999999)) - 75.67231707317073);
		fRec26[0] = ((fConst30 * ((fConst29 * fRec27[1]) + (fConst6 * fRec27[0]))) + (fConst8 * fRec26[1]));
		fRec9[0] = ((0.6 * fRec26[0]) + fRec10[0]);
		double fTemp7 = (1e-15 + (0.0082 * fRec8[1]));
		fVec6[0] = fTemp7;
		fRec29[0] = ((fConst38 * (fVec6[0] + fVec6[1])) + (fConst37 * fRec29[1]));
		fRec8[0] = (Ftube(TUBE_TABLE_12AU7_250k, ((fRec29[0] + fRec9[0]) - 0.445486999999999)) - 75.67231707317073);
		fRec7[0] = ((fConst30 * ((fConst29 * fRec8[1]) + (fConst6 * fRec8[0]))) + (fConst8 * fRec7[1]));
		double fTemp8 = (fRec7[0] * (1 - fRec6[0]));
		double fTemp9 = (fRec7[0] * fRec6[0]);
		double fTemp10 = fabs(fTemp9);
		fRec32[0] = ((9.999999999998899e-05 * fTemp10) + (0.9999 * fRec32[1]));
		double fTemp11 = max(fRec32[0], fTemp10);
		fVec7[IOTA&32767] = fTemp11;
		fRec31[0] = ((fVec7[IOTA&32767] + fRec31[1]) - fVec7[(IOTA-iConst39)&32767]);
		fRec30[0] = ((fConst40 * fRec31[0]) + (0.999 * fRec30[1]));
		double fTemp12 = max(-1.0, min(-0.01, (fVec7[IOTA&32767] - (1.0 + (1.02 * fRec30[0])))));
		double fTemp13 = (0 - fTemp12);
		double fTemp14 = (40.1 * fTemp13);
		double fTemp15 = max((double)-600, fTemp14);
		double fTemp16 = (0 - fTemp15);
		double fTemp17 = (fTemp9 - fTemp12);
		double fTemp18 = (40.1 * fTemp17);
		double fTemp19 = max((double)-600, fTemp18);
		double fTemp20 = (0 - fTemp19);
		double fTemp21 = (((int((fabs(fTemp18) > 0.0001)))?((int((fTemp19 < -50)))?(exp(fTemp19) * fTemp20):(fTemp19 / (1 - exp(fTemp20)))):(1 + (fTemp17 * (20.05 + (134.00083333333336 * fTemp17))))) - ((int((fabs(fTemp14) > 0.0001)))?((int((fTemp15 < -50)))?(exp(fTemp15) * fTemp16):(fTemp15 / (1 - exp(fTemp16)))):(1 + (fTemp13 * (20.05 + (134.00083333333336 * fTemp13))))));
		double fTemp22 = (fConst43 * fRec34[1]);
		fRec40[0] = ((0.024937655860349125 * fTemp21) - (fConst70 * ((fConst68 * fRec40[2]) + (fConst66 * fRec40[1]))));
		double fTemp23 = (fRec40[2] + (fRec40[0] + (2 * fRec40[1])));
		fVec8[0] = fTemp23;
		fRec39[0] = ((fConst71 * ((fConst29 * fVec8[1]) + (fConst6 * fVec8[0]))) + (fConst8 * fRec39[1]));
		fRec38[0] = ((fConst72 * (fRec39[0] + fRec39[1])) + (fConst64 * fRec38[1]));
		fRec37[0] = (fRec38[0] - (fConst62 * ((fConst60 * fRec37[2]) + (fConst58 * fRec37[1]))));
		double fTemp24 = (fRec37[2] + (fRec37[0] + (2 * fRec37[1])));
		fVec9[0] = fTemp24;
		fRec36[0] = ((fConst74 * ((fConst73 * fVec9[1]) + (fConst50 * fVec9[0]))) + (fConst55 * fRec36[1]));
		fRec35[0] = (fRec36[0] - (fConst53 * ((fConst51 * fRec35[2]) + (fConst49 * fRec35[1]))));
		fRec34[0] = ((fConst53 * (((fConst48 * fRec35[0]) + (fConst75 * fRec35[1])) + (fConst48 * fRec35[2]))) - (fConst46 * ((fConst45 * fRec34[2]) + fTemp22)));
		double fTemp25 = max((double)-1, min((double)1, (fSlow7 * (fRec34[2] + (fConst46 * (fTemp22 + (fConst45 * fRec34[0])))))));
		fRec44[0] = ((fConst74 * (fVec9[0] + fVec9[1])) + (fConst55 * fRec44[1]));
		fRec43[0] = (fRec44[0] - (fConst53 * ((fConst51 * fRec43[2]) + (fConst49 * fRec43[1]))));
		double fTemp26 = (fRec43[2] + (fRec43[0] + (2 * fRec43[1])));
		fVec10[0] = fTemp26;
		fRec42[0] = ((fConst81 * ((fConst80 * fVec10[1]) + (fConst44 * fVec10[0]))) + (fConst79 * fRec42[1]));
		fRec41[0] = (fRec42[0] - (fConst77 * ((fConst76 * fRec41[2]) + (fConst43 * fRec41[1]))));
		double fTemp27 = max((double)-1, min((double)1, (fSlow8 * (((fConst42 * fRec41[0]) + (fConst82 * fRec41[1])) + (fConst42 * fRec41[2])))));
		double fTemp28 = (fConst43 * fRec45[1]);
		double fTemp29 = (fConst49 * fRec46[1]);
		fRec48[0] = ((fConst72 * ((fConst85 * fRec39[1]) + (fConst59 * fRec39[0]))) + (fConst64 * fRec48[1]));
		fRec47[0] = (fRec48[0] - (fConst62 * ((fConst60 * fRec47[2]) + (fConst58 * fRec47[1]))));
		fRec46[0] = ((fConst62 * (((fConst57 * fRec47[0]) + (fConst86 * fRec47[1])) + (fConst57 * fRec47[2]))) - (fConst84 * ((fConst83 * fRec46[2]) + fTemp29)));
		fRec45[0] = ((fRec46[2] + (fConst84 * (fTemp29 + (fConst83 * fRec46[0])))) - (fConst46 * ((fConst45 * fRec45[2]) + fTemp28)));
		double fTemp30 = max((double)-1, min((double)1, (fSlow9 * (fRec45[2] + (fConst46 * (fTemp28 + (fConst45 * fRec45[0])))))));
		fRec50[0] = ((fConst81 * (fVec10[0] + fVec10[1])) + (fConst79 * fRec50[1]));
		fRec49[0] = (fRec50[0] - (fConst77 * ((fConst76 * fRec49[2]) + (fConst43 * fRec49[1]))));
		double fTemp31 = max((double)-1, min((double)1, (fSlow10 * (fRec49[2] + (fRec49[0] + (2 * fRec49[1]))))));
		double fTemp32 = ((1.2589412 * (fTemp31 * (1 - (0.3333333333333333 * faustpower<2>(fTemp31))))) + (1.584893192 * ((fTemp30 * (1 - (0.3333333333333333 * faustpower<2>(fTemp30)))) + ((fTemp27 * (1 - (0.3333333333333333 * faustpower<2>(fTemp27)))) + (0.8413951417869425 * (fTemp25 * (1 - (0.3333333333333333 * faustpower<2>(fTemp25)))))))));
		fVec11[0] = fTemp32;
		fRec33[0] = ((fConst12 * (fVec11[0] + fVec11[1])) + (fConst11 * fRec33[1]));
		double fTemp33 = (((fSlow11 * fRec33[0]) + (fSlow6 * fTemp21)) + (fTemp8 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp8))) - 1)))));
		fVec12[0] = fTemp33;
		fRec5[0] = ((fConst12 * (fVec12[0] + fVec12[1])) + (fConst11 * fRec5[1]));
		double fTemp34 = (fRec5[0] * fRec4[0]);
		fRec2[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fTemp34 + fRec3[0]) - 0.664540999999999)) - 87.91682926829267);
		fRec1[0] = ((fConst87 * ((fConst29 * fRec2[1]) + (fConst6 * fRec2[0]))) + (fConst8 * fRec1[1]));
		double fTemp35 = (1e-15 + (0.0041 * fRec52[1]));
		fVec13[0] = fTemp35;
		fRec53[0] = ((fConst12 * (fVec13[0] + fVec13[1])) + (fConst11 * fRec53[1]));
		fRec52[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec53[0] + fTemp34) - 0.659760999999999)) - 89.08268292682925);
		fRec51[0] = ((fConst87 * ((fConst29 * fRec52[1]) + (fConst6 * fRec52[0]))) + (fConst8 * fRec51[1]));
		double fTemp36 = (fRec54[1] + (fConst89 * fRec54[2]));
		fRec54[0] = (fConst92 * (fConst91 - fTemp36));
		double fTemp37 = (fRec55[1] + (fConst94 * fRec55[2]));
		fRec55[0] = (fConst97 * (fConst96 - fTemp37));
		output0[i] = (FAUSTFLOAT)((fConst97 * fTemp37) + (fRec55[0] * ((fConst92 * fTemp36) + (fRec54[0] * (((min(0.7, fRec51[0]) + max(-0.75, fRec1[0])) * fRec0[0]) + (fConst5 * fTemp0))))));
		// post processing
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

void __rt_func Dsp::compute_static(int count, float *input0, float *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
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

} // end namespace gxamp8
