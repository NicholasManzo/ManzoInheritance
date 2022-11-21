//Base Class
#ifndef Vehicle_C_H
#define Vehicle_C_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle_C
{
private: 
	string manu;
	string year;

public:
	//Constructor
	Vehicle_C();
	Vehicle_C(string, string);

	//Setters
	void Set_Manufacturer(string);
	void Set_Year(string);

	//Getters
	string Get_Manufacturer() const;
	string Get_Year() const;

	//Member Functions
	void displayInfo() const;




};

#endif