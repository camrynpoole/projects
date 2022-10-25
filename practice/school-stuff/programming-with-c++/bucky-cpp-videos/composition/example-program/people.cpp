#include "people.h"
#include "birthday.h"
#include <iostream>
using namespace std;

People::People(string name, Birthday bo)
    // member initializer list
    // does not go in the body of the constructor
    // does not need a semicolon
    : name(name), dateOfBirth(bo) {}

void People::printInfo() {
  cout << name << " was born on ";
  dateOfBirth.printDate();
}
