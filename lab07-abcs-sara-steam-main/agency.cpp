#include "agency.h"

Agency::Agency(){
	setName("");
	numCars = 0;
	numBikes = 0;
}
Agency::Agency(string newName){
	setName(newName);
	numCars = 0;
	numBikes = 0;
}
Agency::Agency(const Agency& rhs){
	setName(rhs.name);
}

string Agency::getName(){
	return name;
}
int Agency::getNumCars(){
	return numCars;
}
Car* Agency::getCarFleet(){
	return cars;
}
Motorcycle* Agency::getMotorcycleFleet(){
	return bikes;
}

void Agency::setName(string newName){
	name = newName;
}
 
void Agency::print(){
	cout << name << endl << endl;
	cout << "Cars" << endl;
	cout << "=====================" << endl;
	cout << "Make Model Year Available Seats" << endl;
	cout << "=====================" << endl;
	for(int i = 0; i < numCars; i++){
		cars[i].displayVehicleInfo();
	}
	cout <<endl << "Motorcycles" << endl;
	cout << "=====================" << endl;
	cout << "Type Make Model Year Available" << endl;
	cout << "=====================" << endl;
	for(int i = 0; i < numBikes; i++){
		bikes[i].displayVehicleInfo();
		cout << endl << endl;
	}
}

bool Agency::addCar(const Car& newCar){
	if(numCars < MAX_CARS){
		cars[numCars] = newCar;
		numCars++;
		return true;
	}
	return false;
}

bool Agency::addMotorcycle(const Motorcycle& newMotorcycle){
	if(numBikes < MAX_BIKES){
		bikes[numBikes] = newMotorcycle;
		numBikes++;
		return true;
	}
	return false;
}