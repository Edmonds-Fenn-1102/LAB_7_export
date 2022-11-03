#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;
class Vehicle{
    protected:
        int maxMilesPerHour;
        string make;
        string model;
        int year;
        bool isCheckedOut;
    
    public:
        Vehicle();
        Vehicle(int, string, string, int, bool);
        Vehicle(const Vehicle&);

        int getMaxMilesPerHour();
        int getYear();
        string getMake();
        string getModel();
        bool getCheckedOut();

        void setYear(int);
        void setMake(string);
        void setModel(string);
        void setMaxMilesPerHour(int);
        void setCheckedOut(bool);

        void displayBasicInfo();
        virtual void displayVehicleInfo() =0;


};

#endif