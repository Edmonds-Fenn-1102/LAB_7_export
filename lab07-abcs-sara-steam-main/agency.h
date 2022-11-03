#ifndef AGENCY_H
#define AGENCY_H

#include <iostream>

#include "agency.h"
#include "car.h"
#include "motorcycle.h"

using namespace std;

#define MAX_CARS 70
#define MAX_BIKES 10

class Agency{
	string name;
	int numCars;
	int numBikes;
	Car cars[MAX_CARS];
	Motorcycle bikes[MAX_BIKES];
public:
	Agency();
	Agency(string);
	Agency(const Agency&);

	string getName();
	int getNumCars();
	Car* getCarFleet();
	Motorcycle* getMotorcycleFleet();

	void setName(string);
 
	void print();

	bool addCar(const Car&);
	bool addMotorcycle(const Motorcycle&);
};

#endif