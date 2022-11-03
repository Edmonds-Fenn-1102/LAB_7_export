#include "vehicle.h"

Vehicle::Vehicle(){
    maxMilesPerHour = -1;
	year = -1;
	make = "NONE";
	model = "NONE";
	isCheckedOut = true;
}

Vehicle::Vehicle(int newYear, string newMake, string newModel, int newMax, bool out){
    maxMilesPerHour = newMax;
	year = newYear;
	make = newMake;
	model = newModel;
	isCheckedOut = out;
}

Vehicle::Vehicle(const Vehicle& old){
    maxMilesPerHour = old.maxMilesPerHour;
	year = old.year;
	make = old.make;
	model = old.model;
	isCheckedOut = old.isCheckedOut;
}

int Vehicle::getMaxMilesPerHour(){
    return maxMilesPerHour;
}

void Vehicle::setMaxMilesPerHour(int miles){
    maxMilesPerHour = miles;
}

int Vehicle::getYear(){
	return year;
}
string Vehicle::getMake(){
	return make;
}
string Vehicle::getModel(){
	return model;
}
bool Vehicle::getCheckedOut(){
	return isCheckedOut;
}

void Vehicle::setYear(int newYear){
	year = newYear;
}
void Vehicle::setMake(string newMake){
	make = newMake;
}
void Vehicle::setModel(string newModel){
	model = newModel;
}
void Vehicle::setCheckedOut(bool checked){
	isCheckedOut = checked;
}
void Vehicle::displayBasicInfo(){
	cout << make << " " << model << " " << year << " " << isCheckedOut << " ";
}