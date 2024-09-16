import sys; sys.path.append("..")
import numpy as np
import pluginloader

data  = np.array((
    -0.0290103, -0.02684951, -0.02474904, -0.02275467, -0.02080619,
    -0.01886916, -0.01686096, -0.01475108, -0.01247537, -0.00993085,
    -0.00711274, -0.0040803, -0.00090325,  0.00237584,  0.0056951,
    0.00895047,  0.01215279,  0.01532888,  0.01846802,  0.0215832,
    0.02470756,  0.02786744,  0.03104711,  0.03428566,  0.03763735,
    0.04110992,  0.04472768,  0.04847527,  0.05222678,  0.05587375,
    0.05941474,  0.06279755,  0.06599367,  0.06898189,  0.07170856,
    0.0740819,  0.0760802,  0.07778156,  0.07922566,  0.08061182,
    0.08192587,  0.08335137,  0.08490515,  0.08666515,  0.08860099,
    0.09070063,  0.09294415,  0.09534264,  0.09780431,  0.1003077,
    0.10280156,  0.10524273,  0.1076082,  0.10989535,  0.1121639,
    0.11444795,  0.11676121,  0.11915565,  0.12163615,  0.12423444,
    0.12692463,  0.12973499,  0.13264489,  0.13569272,  0.13878357,
    0.14183223,  0.14481664,  0.14764428,  0.15026379,  0.15261149,
    0.15465033,  0.15633881,  0.1576283,  0.15838623,  0.15861487,
    0.15821159,  0.15721345,  0.15559149,  0.15342057,  0.15082347,
    0.14790666,  0.14466608,  0.14119101,  0.13745093,  0.13352144,
    0.12944591,  0.12520969,  0.12087071,  0.11645627,  0.11191988,
    0.1072613,  0.10253048,  0.09777272,  0.09305346,  0.0884372,
    0.08401942,  0.07993639,  0.07621801,  0.07291341,  0.07001674,
    ), dtype=np.float32)

dsp = [pluginloader.Plugin("gxplugins_.so", i) for i in range(2)]
dsp[0].init(96000)
dsp[1].init(96000)
dsp[1].compute(dsp[0].compute(data))
