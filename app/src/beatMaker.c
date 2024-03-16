#include "../include/beatMaker.h"
#include<stdio.h>

static enum Beat beatNum = ONE;

// just for testing
// static char * beatNumNames[] = { "one","one and", "two", "two and", "three", "three and", "four", "four and" };

enum Beat getBeat()
{
    return beatNum;
}

void beatMaker_incBeat()
{
    
    beatNum++;

    if(beatNum > FOUR_AND) {
        beatNum = ONE;
    }

}

// void beatMaker_playRockBeat()
// {
    
//     switch(beatNum) {
//         case ONE:
//         case ONE_AND:
//         case TWO:
//         case TWO_AND:
//         case THREE:
//         case THREE_AND:
//         case FOUR:
//         case FOUR_AND:
//     }
    
// }