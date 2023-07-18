#ifndef TWODICE_H_INCLUDED
#define TWODICE_H_INCLUDED
#include "Dice.h"
#include "RiggedDice.h"

class TwoDice: public Dice
{
public:
    /*default suffleSize is 10, number of size 6. Allocate the
    dynamic arrays *dice1Suffle and *dice2Suffle at constructors */
     TwoDice();
     TwoDice(int numSides, int sufSize);
     //destructor
     ~TwoDice();
    /*roll dice 1 and rigged dice 2 and store it on dynamic arrays
    *dice1Suffle and *dice2Suffle respectively*/
    void suffle();
     //returns dice 1 suffle result at index
     int dice1SuffleAt(int);
     //returns dice 2 suffle result at index
     int dice2SuffleAt(int);
     //returns the suffle size
    int getSuffleSize();
private:
    int suffleSize;
    int *dice1Suffle;
    int *dice2Suffle;
    Dice d1;
    RiggedDice d2;
};
#endif // TWODICE_H_INCLUDED
