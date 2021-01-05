#include <iostream>
using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];	// Owner's ID
	int fuelGauge;		// The amount of fuel
	int curSpeed;		// Current speed
};

void ShowCarState(const Car &car)
{
	cout<<"Owner ID: "<<car.gamerID<<endl;
	cout<<"Fuel amount: "<<car.fuelGauge<<"%"<<endl;
	cout<<"Current speed: "<<car.curSpeed<<"km/h"<<endl<<endl;
}

void Accel(Car &car)
{
	if(car.fuelGauge<=0)
		return;
	else
		car.fuelGauge-=FUEL_STEP;

	if(car.curSpeed+ACC_STEP>=MAX_SPD)
	{
		car.curSpeed=MAX_SPD;
		return;
	}

	car.curSpeed+=ACC_STEP;
}

void Brake(Car &car)
{
	if(car.curSpeed<BRK_STEP)
	{
		car.curSpeed=0;
		return;
	}

	car.curSpeed-=BRK_STEP;
}

int main(void)
{
	Car run99={"run99", 100, 0};
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Brake(run99);
	ShowCarState(run99);

	Car sped77={"sped77", 100, 0};
	Accel(sped77);
	Brake(sped77);
	ShowCarState(sped77);
	return 0;
}
