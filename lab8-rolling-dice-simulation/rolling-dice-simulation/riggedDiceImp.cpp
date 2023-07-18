#include "RiggedDice.h"
#include <cmath>
#include <stdlib.h>
#include <time.h>

int RiggedDice::rollDice() const
{
    //srand(time(NULL));
    if((rand()%4+1) == 1)
        return numSides;
    else
        return Dice::rollDice();
}
