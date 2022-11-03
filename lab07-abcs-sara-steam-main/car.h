#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle{
	int maxPassengers;
public:
	Car();
	Car(int, string, string, int, int, bool);
	Car(const Car&);

	int getMaxPassengers();
	void setMaxPassengers(int);

	void displayVehicleInfo();
};

#endif