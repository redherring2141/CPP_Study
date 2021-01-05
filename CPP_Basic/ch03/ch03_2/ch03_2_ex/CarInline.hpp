#ifndef __CARINLINE_H__
#define __CARINLINE_H__

#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
        ACC_STEP=10, BRK_STEP=10
    };
}

class Car
{
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Brake();
};

inline void Car::ShowCarState()
{
    cout<<"Owner ID: "<<gamerID<<endl;
    cout<<"Fuel amount: "<<fuelGauge<<"%"<<endl;
    cout<<"Current speed: "<<curSpeed<<"km/h"<<endl<<endl;
}

inline void Car::Brake()
{
    if(curSpeed<CAR_CONST::BRK_STEP)
    {
        curSpeed=0;
        return;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}

#endif