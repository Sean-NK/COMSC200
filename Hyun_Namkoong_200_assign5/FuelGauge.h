#ifndef FUELGAUGE_H
#define FUELGAUGE_H
// This is the header file for the FuelGauge class, which simulates a car's fuel gauge.
class FuelGauge {
private: //It contains the class definition, along with the member function declarations.
    int gallons;

public:
    FuelGauge();
    int getGallons();
    void incrementGallons();
    void decrementGallons();
};

#endif
