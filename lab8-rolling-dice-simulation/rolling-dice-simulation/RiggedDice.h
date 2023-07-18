#ifndef RIGGEDDICE_H_INCLUDED
#define RIGGEDDICE_H_INCLUDED
#include "Dice.h"
class RiggedDice:public Dice
{
public:
    int rollDice() const;
};
#endif // RIGGEDDICE_H_INCLUDED
