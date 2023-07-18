#include <iostream>
#include "CylinderTank.h"
using namespace std;

int main()
{
    CylinderTank c;
    c.setHeight(4);
    c.setRadius(2);
    c.setDrainRate(0);
    c.setFillRate(2);

    cout<<"Volume: "<<c.volume()<<endl;
    cout<<"Time to Fill if Empty: ";
    c.timeToFillEmpty();

    cout<<"Time to Fill if Partially Filled: ";
    c.timeToFillPartial(100);

    c.~CylinderTank();
    return 0;
}
