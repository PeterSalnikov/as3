#include "../include/beatLib.h"
#include "../include/audioMixer.h"

static wavedata_t kick;
static wavedata_t snare;
static wavedata_t hihat;

void beatLib_loadRockBeat()
{
    AudioMixer_readWaveFileIntoMemory(ROCK_KICK, &kick);
    AudioMixer_readWaveFileIntoMemory(ROCK_SNARE, &snare);
    AudioMixer_readWaveFileIntoMemory(ROCK_HIHAT, &hihat);
}