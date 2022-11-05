#include "birthday.h"
#include "people.h"
#include <iostream>
using namespace std;

// composition
// classes can have objects of another class as its member
int main() {
  Birthday birthObj(9, 30, 1998);
  // needs a string and a Birthday object
  People camryn("Camryn", birthObj);
  camryn.printInfo();

  return 0;
}
