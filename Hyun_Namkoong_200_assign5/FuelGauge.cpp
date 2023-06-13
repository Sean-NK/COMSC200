#include "FuelGauge.h"
// This is the implementation file for the FuelGauge class.
// It contains the definitions of the member functions declared in FuelGauge.h.
FuelGauge::FuelGauge() {
    gallons = 0;
}

int FuelGauge::getGallons() {
    return gallons;
}

void FuelGauge::incrementGallons() {
    if (gallons < 15) {
        gallons++;
    }
}

void FuelGauge::decrementGallons() {
    if (gallons > 0) {
        gallons--;
    }
}
