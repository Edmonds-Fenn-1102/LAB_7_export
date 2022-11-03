rental_agency: driver.o agency.o car.o vehicle.o motorcycle.o
	g++ -o rental_agency driver.o agency.o car.o vehicle.o motorcycle.o

driver.o: driver.cpp agency.h car.h vehicle.h motorcycle.h
	g++ -c driver.cpp

agency.o: agency.cpp agency.h motorcycle.h car.h vehicle.h
	g++ -c agency.cpp


car.o: car.cpp car.h vehicle.h
	g++ -c car.cpp

motorcycle.o: motorcycle.cpp motorcycle.h vehicle.h
	g++ -c motorcycle.cpp

rental_agency.o: vehicle.cpp vehicle.h
	g++ -c vehicle.cpp

clean:
	rm *.o rental_agency