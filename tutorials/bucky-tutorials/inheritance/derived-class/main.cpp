#include "daughter.h"
#include "mother.h"
#include <iostream>
using namespace std;

int main() {

  // CONSTRUCTOR
  // daughter does not inherit constructor and destructor from mother
  // however, the mother class will still run
  // will invoke the base class's constructor first

  // DESTRUCTOR
  // when object is destroyed, will invoke the class's destructor first
  // and the base class's destructor second
  Daughter me;
  return 0;
}
