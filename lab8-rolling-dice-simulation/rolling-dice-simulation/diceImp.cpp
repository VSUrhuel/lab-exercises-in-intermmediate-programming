#include "Dice.h"
#include <cmath>
#include <stdlib.h>
#include <time.h>

Dice::Dice()
{
    numSides = 6;
    srand(time(NULL));
}
Dice::Dice(int s)
{
    numSides = s;
}
Dice::~Dice()
{

}
void Dice::setDiceSides(int s)
{
    numSides = s;
}
int Dice::rollDice() const
{
    return rand() % numSides + 1;
}
