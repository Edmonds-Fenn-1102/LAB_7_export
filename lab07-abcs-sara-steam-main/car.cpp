#include "car.h"

Car::Car(){
	maxPassengers = 4;
}
Car::Car(int newYear, string newMake, string newModel, int newMax, int newPass, bool rented){
	setYear(newYear);
	setMake(newMake);
	setModel(newModel);
	setMaxMilesPerHour(newMax);
	setMaxPassengers(newPass);
	setCheckedOut(rented);
}
Car::Car(const Car& rhs){
	setYear(rhs.year);
	setMake(rhs.make);
	setModel(rhs.model);
	setMaxMilesPerHour(rhs.maxMilesPerHour);
	setMaxPassengers(rhs.maxPassengers);
	setCheckedOut(rhs.isCheckedOut);
}

int Car::getMaxPassengers(){
	return maxPassengers;
}
void Car::setMaxPassengers(int maxPass){
	maxPassengers = maxPass;
}


void Car::displayVehicleInfo(){
	displayBasicInfo();
	cout << maxPassengers << endl;
}