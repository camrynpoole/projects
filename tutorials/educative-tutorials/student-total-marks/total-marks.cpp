#include <iostream>
using namespace std;

class Student {
private:
  // Define private variables here
  string name;
  float mark1;
  float mark2;

public:
  Student() {
    // Write definition here
    name = "\0";
    mark1 = 0;
    mark2 = 0;
  }

  Student(string na, float ma1, float ma2) {
    // Write definition here
    name = na;
    mark1 = ma1;
    mark2 = ma2;
  }
  int GetMarks(int marknumber) {
    // Write definition here
    if (marknumber == 1) {
      return mark1;
    } else {
      return mark2;
    }
  }
  float calc_total() {
    // Write definition here
    float sum = mark1 + mark2;
    return sum;
  }
};
