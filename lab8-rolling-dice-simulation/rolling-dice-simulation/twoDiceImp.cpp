#include "TwoDice.h"
#include "Dice.h"
#include <iostream>
using namespace std;

TwoDice::TwoDice()
{
    suffleSize = 10;
    d1.setDiceSides(6);
    d2.setDiceSides(6);
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
}
 TwoDice::TwoDice(int nSides, int sSize)
 {
    suffleSize = sSize;
    d1.setDiceSides(nSides);
    d2.setDiceSides(nSides);
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
 }
 TwoDice::~TwoDice()
 {
     delete [] dice1Suffle;
     delete [] dice2Suffle;
 }
 void TwoDice::suffle()
 {
     for(int i=0; i<suffleSize; i++)
     {
        dice1Suffle[i] = d1.rollDice();
        dice2Suffle[i] = d2.rollDice();
     }
 }
 int TwoDice::dice1SuffleAt(int n)
 {
     return dice1Suffle[n];
 }
 int TwoDice::dice2SuffleAt(int n)
 {
     return dice2Suffle[n];
 }
int TwoDice::getSuffleSize()
{
    return suffleSize;
}
