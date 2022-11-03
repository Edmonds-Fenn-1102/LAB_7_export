#include "agency.h"
#include "car.h"
#include "motorcycle.h"

int main(){
	Agency agency("Hertz");

	Car car(1979, "Cadillac", "DeVille", 100, 5, true);
	Car car2(2016, "Chevrolet", "Sonic", 85, 5, false);
	Motorcycle motorcycle("Touring", "Indian", "Roadmaster", 123, 2022, true);
	agency.addCar(car);
	agency.addCar(car2);
	agency.addMotorcycle(motorcycle);

	agency.print();

	return 0;
}