#include "IntegerSet.h"
#include <vector>
#include <iomanip>

using namespace std;

// 1. Default constructor
IntegerSet::IntegerSet() {
    set = vector<bool>(101, false);
}
// 2. The IntegerSet class implements a set of integers using a vector of boolean values.
// 3. Constructor that takes an array of integers and its size
IntegerSet::IntegerSet(int arr[], int size) {
    set = vector<bool>(101, false);
    for (int i = 0; i < size; i++) {
        if (isValid(arr[i])) {
            set[arr[i]] = true;
        }
    }
}

// 4. Union of two sets
IntegerSet IntegerSet::unionOfSets(const IntegerSet& other) const {
    IntegerSet result;
    for (int i = 0; i <= 100; i++) {
        if (set[i] || other.set[i]) {
            result.set[i] = true;
        }
    }
    return result;
}

// 5. Intersection of two sets
IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& other) const {
    IntegerSet result;
    for (int i = 0; i <= 100; i++) {
        if (set[i] && other.set[i]) {
            result.set[i] = true;
        }
    }
    return result;
}

// 6. Insert an element in the set
void IntegerSet::insertElement(int k) {
    if (isValid(k)) {
        set[k] = true;
    }
}

// 7. Delete an element from the set
void IntegerSet::deleteElement(int m) {
    if (isValid(m)) {
        set[m] = false;
    }
}

void IntegerSet::printSet() const {
    bool empty = true;
    cout << "{  ";
    for (int i = 0; i <= 100; i++) {
        if (set[i]) {
            if (!empty) {
                cout << "";
            }

            cout << i << "  ";
            empty = false;

        }
    }
    if (empty) {
        cout << "---    ";
    }
    cout << "}";

    cout << endl;
}

bool IntegerSet::isEqualTo(const IntegerSet& other) const {

    for (int i = 0; i <= 100; i++) {
        if (set[i] != other.set[i]) {
            return false;
        }
    }
    return true;
}

// 8. Input corresponding elements in the set
void IntegerSet::inputSet() {
    int input;

    do {
        cout << "Enter an element (-1 to end):  ";
        cin >> input;
        if (isValid(input)) {
            set[input] = true;
        }
        else if (!isValid(input)) {
            if (input != -1) {
                cout << "Invalid Element \n";
            }
        }
    } while (input != -1);

    cout << "Entry complete \n";
}

// 9. If it is valid number, return the value
bool IntegerSet::isValid(int k) const {
    return (k >= 0 && k <= 100);
}
// 10. This is an important safety check that prevents the program from accessing invalid memory if an out-of-range integer is passed to the set vector.




