#include "daughter.h"
#include "mother.h"
#include <iostream>
using namespace std;

// derived class
// can access public and protected members
// cannot inherit the private members
void Daughter::doSomething() {
  publicv = 1;
  protectedv = 2;
}
