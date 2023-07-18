#ifndef DICE_H_INCLUDED
#define DICE_H_INCLUDED
class Dice
{
public:
    //default number of sides is 6
    Dice();
    Dice( int);
    ~Dice();
    void setDiceSides(int);
    virtual int rollDice() const;
protected:
    int numSides;
};
#endif // DICE_H_INCLUDED
