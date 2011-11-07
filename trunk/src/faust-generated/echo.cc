// generated from file '../src/faust/echo.dsp' by dsp2cc:
// Code generated with Faust 0.9.43 (http://faust.grame.fr)

namespace echo {
static FAUSTFLOAT 	fslider0;
static float 	fConst0;
static FAUSTFLOAT 	fslider1;
static int 	IOTA;
static float *fRec0;
static bool mem_allocated = false;
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<262144; i++) fRec0[i] = 0;
}

static void init(unsigned int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (0.001f * min(192000, max(1, fSamplingFreq)));
	IOTA = 0;
}

static void mem_alloc()
{
	if (!fRec0) fRec0 = new float[262144];
	mem_allocated = true;
}

static void mem_free()
{
	mem_allocated = false;
	if (fRec0) { delete fRec0; fRec0 = 0; }
}


static int activate(bool start, PluginDef* = 0)
{
    if (start) {
        if (!mem_allocated) {
            mem_alloc();
            clear_state();
        }
    } else if (!mem_allocated) {
        mem_free();
    }
    return 0;
}

static void compute(int count, float *input0, float *output0, PluginDef *)
{
	int 	iSlow0 = int((1 + int((int((int((fConst0 * fslider0)) - 1)) & 131071))));
	float 	fSlow1 = (0.01f * fslider1);
	for (int i=0; i<count; i++) {
		fRec0[IOTA&262143] = ((float)input0[i] + (fSlow1 * fRec0[(IOTA-iSlow0)&262143]));
		output0[i] = (FAUSTFLOAT)fRec0[(IOTA-0)&262143];
		// post processing
		IOTA = IOTA+1;
	}
}

static int register_params(const ParamReg& reg)
{
	reg.registerVar("echo.percent","","S","",&fslider1, 0.0f, 0.0f, 1e+02f, 0.1f);
	reg.registerVar("echo.time","","S","",&fslider0, 1.0f, 1.0f, 2e+03f, 1.0f);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "echo",  // id
    N_("Echo"),  // name
    0,  // groups
    compute,  // mono_audio
    0,  // stereo_audio
    init,  // set_samplerate
    activate,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace echo
