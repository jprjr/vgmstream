#include "../vgmstream.h"

#ifndef _NGC_DSP_H
#define _NGC_DSP_H

void decode_ngc_dsp(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

#endif