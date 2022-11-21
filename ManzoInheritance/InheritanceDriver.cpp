/*
Nick Manzo
11/20/22
Assignment #14 - Inheritance 
*/

#include <iostream>
#include "SUV_C.h"

using namespace std;

int main() {

	Vehicle_C objectOne;
	Car_C objectTwo;
	SUV_C objectThree;

	//Start of Vehicle inputs
	string manufacturer;
	string year;
	cout << "First Vehicle";
	cout << "\nPlease input Manufacturer's Name > ";
	getline(cin, manufacturer);
	cout << "\nPlease Input year the Vehicle was Built > ";
	cin >> year;
	objectOne.Set_Manufacturer(manufacturer);
	objectOne.Set_Year(year);
	
	cout << "\nDisplaying info for the Vehicle Class...";
	objectOne.displayInfo();

	//Start of Car Inputs 
	int doorCount;
	cout << "\nSecond Vehicle";
	cout << "\nPlease input Manufacturer's Name > ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "\nPlease Input year the Vehicle was Built > ";
	cin >> year;
	cout << "\nPlease Input the Door Count > ";
	cin >> doorCount;
	objectTwo.Set_Manufacturer(manufacturer);
	objectTwo.Set_Year(year);
	objectTwo.Set_DoorCount(doorCount);
	
	cout << "\nDisplaying info for the Car Class...";
	objectTwo.displayInfo();

	//Start of SUV Inputs 
	int gasCap;
	cout << "\nThird Vehicle";
	cout << "\nPlease input Manufacturer's Name > ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "\nPlease Input year the Vehicle was Built > ";
	cin >> year;
	cout << "\nPlease Input the Door Count > ";
	cin >> doorCount;
	cout << "\nPlease input the Gas Capacity > ";
	cin >> gasCap;
	objectThree.Set_Manufacturer(manufacturer);
	objectThree.Set_Year(year);
	objectThree.Set_DoorCount(doorCount);
	objectThree.Set_GasCap(gasCap);

	cout << "\nDisplaying info for the SUV Class...";
	objectThree.displayInfo();


	cout << endl << endl;
	system("pause");
	return 0;
}