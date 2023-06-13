#ifndef ODOMETER_H
#define ODOMETER_H
// This is the header file for the Odometer class, which simulates a car's odometer.
#include "FuelGauge.h"

class Odometer {
private:
    int mileage;
    FuelGauge& fuelGauge;

public:
    Odometer(FuelGauge& fg);
    int getMileage();
    void incrementMileage();
};
// It contains the class definition, along with the member function declarations.
#endif
