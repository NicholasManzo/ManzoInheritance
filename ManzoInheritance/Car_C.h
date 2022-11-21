#ifndef Car_C_H
#define Car_C_H
#include "Vehicle_C.h"
//This Class Inherits from the Vehicle Class
class Car_C : public Vehicle_C
{
private: 
	int doorCount;

public:
	//Constructors
	Car_C();
	Car_C(int, string, string);

	//Setters
	void Set_DoorCount(int);

	//Getters 
	int Get_DoorCount() const;

	//Member Functions 
	void displayInfo() const;


};
#endif

