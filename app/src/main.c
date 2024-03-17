/*
 *  Small program to read a 16-bit, signed, 44.1kHz wave file and play it.
 *  Written by Brian Fraser, heavily based on code found at:
 *  http://www.alsa-project.org/alsa-doc/alsa-lib/_2test_2pcm_min_8c-example.html
 */

#include <alsa/asoundlib.h>

#include "audioMixer.h"
#include "beatMaker.h"
#include "beatLib.h"
#include "time_helpers.h"
#include "hal/joystick.h"
#include<stdbool.h>
// File used for play-back:
// If cross-compiling, must have this file available, via this relative path,
// on the target when the application is run. This example's Makefile copies the wave-files/
// folder along with the executable to ensure both are present.

#define SAMPLE_RATE   44100
#define NUM_CHANNELS  1
#define SAMPLE_SIZE   (sizeof(short)) 	// bytes per sample




int main(void)
{
	joystick_init();
	AudioMixer_init();
	beatMaker_init();

	beatLib_loadRockBeat();

	// mode = OFF;
	// Play Audio
	while(1) {

		switch(beatMaker_getBeatMode()) {
			case OFF:
				break;
			case ROCK1:
				beatMaker_playRock1();
				break;
			case ROCK2:
				beatMaker_playRock2();
				break;
		}

		float waitFor = (60.0 / (float) beatMaker_getTempo() / 2.0)*1000;

		time_sleepForMs((int) waitFor);

	}

	AudioMixer_cleanup();

	printf("Done!\n");
	return 0;
}
