#include "Car_C.h"


//Constructors
Car_C::Car_C() : Vehicle_C() {
	doorCount = 0;
}
Car_C::Car_C(int dC, string mf, string yr) : Vehicle_C(mf, yr) {
	doorCount = dC;
}

//Setters
void Car_C::Set_DoorCount(int dC) {
	doorCount = dC;
}

//Getters 
int Car_C::Get_DoorCount() const {
	return doorCount;
}

//Member Functions 
void Car_C::displayInfo() const {
	cout << "\nVehicle's Manufacturer is > " << Get_Manufacturer();
	cout << "\nVehicle was built in > " << Get_Year();
	cout << "\nVehicle's Door Count is > " << doorCount;
	cout << endl;
}