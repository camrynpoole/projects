#include "camryn.h"
#include <iostream>
using namespace std;

// TLDR
// constant objects need constant functions
int main() {
  Camryn c;
  c.printShit();

  // creating a constant object
  // put const before the class name
  // need const function for a const obj
  const Camryn c2;
  c2.printShit2();
  return 0;
}
