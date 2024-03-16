#ifndef _BEAT_MAKER_H
#define _BEAT_MAKER_H


// 60 / bpm / 2
enum Beat {
	ONE,ONE_AND,
    TWO,TWO_AND,
    THREE,THREE_AND,
    FOUR,FOUR_AND,
    ALL,WHOLE,HALF
};

enum Beat getBeat();

void beatMaker_incBeat();

#endif