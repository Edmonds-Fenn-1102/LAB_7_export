#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "vehicle.h"
class Motorcycle : public Vehicle{
    string type;

    public:
        Motorcycle();
        Motorcycle(string, string, string, int, int, bool);
        Motorcycle(const Motorcycle&);

        string getType();
        void getType(string);

        void displayVehicleInfo();
};

#endif