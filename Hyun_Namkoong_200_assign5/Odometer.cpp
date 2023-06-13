#include "Odometer.h"
// This is the implementation file for the Odometer class.
Odometer::Odometer(FuelGauge& fg) : fuelGauge(fg) {
    mileage = 0;
}

int Odometer::getMileage() {
    return mileage;
}

void Odometer::incrementMileage() {
    mileage++;

    if (mileage % 24 == 0) {
        fuelGauge.decrementGallons();
    }

    if (mileage > 999999) {
        mileage = 0;
    }
}
// It contains the definitions of the member functions declared in Odometer.h.
