#ifndef _BEAT_LIB_H
#define _BEAT_LIB_H

#include "audioMixer.h"

#define ROCK_KICK  "wave-files/100052__menegass__gui-drum-bd-soft.wav"
#define ROCK_SNARE "wave-files/100058__menegass__gui-drum-snare-hard.wav"
#define ROCK_HIHAT "wave-files/100053__menegass__gui-drum-cc.wav"
#define ROCK_CYMBAL "wave-files/100057__menegass__gui-drum-cyn-soft.wav"

wavedata_t* beatLib_getKick();
wavedata_t* beatLib_getSnare();
wavedata_t* beatLib_getHihat();
wavedata_t* beatLib_getCymbal();

void beatLib_loadRockBeat(void);

#endif