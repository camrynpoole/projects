#include "exception.h"
#include <iostream>
using namespace std;

int main() {
  // this program will prompt the user for the following:
  // major, total courses , courses remaining
  // then will calculate the percentage of completion
  // if there are no errors thrown

  except e; // create an object of the except class

  // this should not throw an error
  e.majorExcept("Computer Science");
  // this will throw an error
  e.coursesExcept(0, 24);

  return 0;
}
