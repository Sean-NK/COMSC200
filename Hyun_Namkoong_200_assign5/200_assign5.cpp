#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"

int main() {
    FuelGauge fuelGauge;
    Odometer odometer(fuelGauge);
    // It simulates filling the car up with fuel and then incrementing the odometer until the car runs out of fuel.
    std::cout << "Filling up the car with 15 gallons of fuel...\n";
    for (int i = 0; i < 15; i++) {
        fuelGauge.incrementGallons();
    }

    std::cout << "Starting the car...\n";
    while (fuelGauge.getGallons() > 0) {
        odometer.incrementMileage();
        std::cout << "Mileage: " << odometer.getMileage() << std::endl << "Fuel level: " << fuelGauge.getGallons() << " gallons" << std::endl << "---------------------" << std::endl << std::endl;
    }
    // During each loop iteration, it prints the car's current mileage and amount of fuel.
    std::cout << "The car ran out of fuel at " << odometer.getMileage() << " miles.\n";

    return 0;
}
