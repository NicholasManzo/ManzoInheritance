#include "SUV_C.h"

//Constructors
SUV_C::SUV_C() : Car_C() {
	gasCap = 0;
}
SUV_C::SUV_C(int gC, int dC, string mf, string yr) : Car_C(dC, mf, yr) {
	gasCap = gC;
}

//Setters
void SUV_C::Set_GasCap(int gC) {
	gasCap = gC;
}

//Getters
int SUV_C::Get_GasCap() const {
	return gasCap;
}

//Functions
void SUV_C::displayInfo() const {
	cout << "\nVehicle's Manufacturer is > " << Get_Manufacturer();
	cout << "\nVehicle was built in > " << Get_Year();
	cout << "\nVehicle's Door Count is > " << Get_DoorCount();
	cout << "\nVehicle's Gas Capacity is > " << gasCap << " Gallons";
	cout << endl;
}