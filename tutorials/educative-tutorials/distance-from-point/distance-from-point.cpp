#include <cmath>
#include <iostream>
using namespace std;

class Point {

  // Private fields
private:
  int x;
  int y;

public:
  // Default Constructor
  Point() {
    x = 0;
    y = 0;
  }

  // Parameterized Constructor
  Point(int x, int y) {
    // Implement the function
    this->x = x;
    this->y = y;
  }

  double distance() {
    // Implement the function
    double distance = sqrt(pow(x - 0, 2) + pow(y - 0, 2) * 1.0);
    return distance;
  }

  double distance(int x1, int y1) {
    // Implement the function
    double distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) * 1.0);
    return distance;
  }
};

int main() {

  Point p1(5, 5);
  p1.distance();
  p1.distance(2, 1);

  return 0;
}
