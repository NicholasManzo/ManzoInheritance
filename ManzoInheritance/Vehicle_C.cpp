#include "Vehicle_C.h"

//Constructors
Vehicle_C::Vehicle_C() {
	manu = "";
	year = "";
}

Vehicle_C::Vehicle_C(string mf, string yr) {
	manu = mf;
	year = yr;
}

//Setters
void Vehicle_C::Set_Manufacturer(string mf) {
	manu = mf;
}
void Vehicle_C::Set_Year(string yr) {
	year = yr;
}

//Getters
string Vehicle_C::Get_Manufacturer() const {
	return manu;
}
string Vehicle_C::Get_Year() const {
	return year;
}

//Member Functions
void Vehicle_C::displayInfo() const {
	cout << "\nVehicle's Manufacturer is > " << manu;
	cout << "\nVehicle was built in > " << year;
	cout << endl;
}
