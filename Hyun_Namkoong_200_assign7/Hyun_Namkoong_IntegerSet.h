#include <vector>
#include <iostream>
#include <string>

using namespace std;

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
private:
    vector<bool> set;
public:

    IntegerSet();

    IntegerSet(int arr[], int size);

    IntegerSet unionOfSets(const IntegerSet& other) const;

    IntegerSet intersectionOfSets(const IntegerSet& other) const;

    void insertElement(int k);

    void deleteElement(int m);

    void printSet() const;

    bool isEqualTo(const IntegerSet& other) const;

    void inputSet();

    bool isValid(int k) const;
};

#endif 
