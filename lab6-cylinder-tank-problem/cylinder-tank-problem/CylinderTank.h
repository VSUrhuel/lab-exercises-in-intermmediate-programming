#ifndef CYLINDERTANK_H_INCLUDED
#define CYLINDERTANK_H_INCLUDED
class CylinderTank
{
public:
    CylinderTank(); //default constructor, sets all variables to 0
    void setHeight (double); //set tank height
    void setRadius (double); //set tank radius
    void setDrainRate (double);//set tank drain rate
    void setFillRate (double); //set tank fill rate
    double getHeight (); //return the value of the height
    double getRadius (); //return the value of the radius
    double getDrainRate (); //return the value of the drain rate
    double getFillRate (); //return the value of the fill rate
    double volume (); //computes and returns the volume
    void timeToFillEmpty();
    /*computes and displays the time to fill in hr:min:sec if tank is empty*/
    void timeToFillPartial(double);
    /*computes and displays the time to fill in hr:min:sec if the tank is
    partially filled from the value of the passing parameter.*/
    ~CylinderTank(); //default destructor, no content on function body

private:
    double height; // the height of the tank (meters)
    double radius; //the width of the tank (meters)
    double aveDrainRate; //average drain rate of the tank (liters/sec)
    double aveFillRate; //average fill rate of the tank (liters/sec)
};
#endif // CYLINDERTANK_H_INCLUDED
