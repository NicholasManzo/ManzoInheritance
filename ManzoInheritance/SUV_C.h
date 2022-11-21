#ifndef SUV_C_H
#define SUV_C_H
#include "Car_C.h"
class SUV_C : public Car_C
{
private:
	int gasCap;

public:
	//Constructors
	SUV_C();
	SUV_C(int, int, string, string);

	//Setters
	void Set_GasCap(int);

	//Getters
	int Get_GasCap() const;

	//Functions
	void displayInfo() const;




};
#endif