#include "motorcycle.h"

Motorcycle::Motorcycle(){
    type = "NONE:(";
}
Motorcycle::Motorcycle(string t, string newMake, string newModel, int max, int newYear, bool out){
    type = t;
    setMaxMilesPerHour(max);
    setModel(newModel);
    setMake(newMake);
    setMaxMilesPerHour(max);
    setYear(newYear);
    setCheckedOut(out);
    
}
Motorcycle::Motorcycle(const Motorcycle& old){
    type = old.type;
    maxMilesPerHour = old.maxMilesPerHour;
    model = old.model;
    make = old.make;
    year = old.year;
    isCheckedOut = old.isCheckedOut;
}

string Motorcycle::getType(){
    return type;
}
void Motorcycle::getType(string t){
    type = t;
}

void Motorcycle::displayVehicleInfo(){
    cout << type << " ";
    displayBasicInfo();
}