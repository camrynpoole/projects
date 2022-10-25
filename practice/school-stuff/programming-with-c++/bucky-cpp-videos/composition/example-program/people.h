#ifndef PEOPLE_H
#define PEOPLE_H
#include "birthday.h"
#include <iostream>
using namespace std;

class People {

public:
  People(string name, Birthday bo);
  void printInfo();

private:
  string name;
  Birthday dateOfBirth;
};

#endif // !PEOPLE_H
