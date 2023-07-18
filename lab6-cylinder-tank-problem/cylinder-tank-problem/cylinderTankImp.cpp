#include "CylinderTank.h"
#include <cmath>
#include <iostream>
using namespace std;

CylinderTank::CylinderTank()
{
    height = 0;
    radius = 0;
    aveDrainRate = 0;
    aveFillRate = 0;
}
void CylinderTank::setHeight(double h)
{
    height = h;
}
void CylinderTank::setRadius(double r)
{
    radius = r;
}
void CylinderTank::setDrainRate(double d)
{
    aveDrainRate = d;
}
void CylinderTank::setFillRate(double f)
{
    aveFillRate = f;
}
double CylinderTank::getHeight()
{
    return height;
}
double CylinderTank::getRadius()
{
    return radius;
}
double CylinderTank::getDrainRate()
{
    return aveDrainRate;
}
double CylinderTank::getFillRate()
{
    return aveFillRate;
}
double CylinderTank::volume()
{
    return M_PI * pow(radius, 2) * height;
}
void CylinderTank::timeToFillEmpty()
{
    //cout<<((CylinderTank::volume()) * 0.001);
    int sec, hours, minutes;
    double time = ((CylinderTank::volume()) * 1000)/(aveFillRate - aveDrainRate);
    sec = static_cast<int>(time) % 60;
    minutes = static_cast<int>(time / 60) % 60;
    hours = time / 3600;
    cout<<hours<<":"<<minutes<<":"<<sec<<endl;
}
void CylinderTank::timeToFillPartial(double v)
{
    int sec, hours, minutes;
    double time = (((volume()) * 1000) - v)/(aveFillRate - aveDrainRate);
    sec = static_cast<int>(time) % 60;
    minutes = static_cast<int>(time / 60) % 60;
    hours = time / 3600;
    cout<<hours<<":"<<minutes<<":"<<sec<<endl;
}
CylinderTank::~CylinderTank()
{

}
