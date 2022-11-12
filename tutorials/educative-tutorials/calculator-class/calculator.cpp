#include <iostream>
using namespace std;

class calculator {
  // write class member variables here
  float num1;
  float num2;

public:
  calculator() {
    // write definition here
    num1 = 0;
    num2 = 0;
  }

  float add(float n1, float n2) {
    // write definition here
    num1 = n1;
    num2 = n2;
    float sum = num1 + num2;
    return sum;
  }

  float subtract(float n1, float n2) {
    // write definition here
    num1 = n1;
    num2 = n2;
    float difference = n2 - n1;
    return difference;
  }

  float multiply(float n1, float n2) {
    // write definition here
    num1 = n1;
    num2 = n2;
    float product = n1 * n2;
    return product;
  }

  float divide(float n1, float n2) {
    // write definition here
    num1 = n1;
    num2 = n2;
    float quotient = n2 / n1;
    return quotient;
  }
};

int main() {
  calculator c;
  float n1, n2;
  cin >> n1 >> n2;
  cout << c.add(n1, n2) << endl;
  cout << c.subtract(n1, n2) << endl;
  cout << c.multiply(n1, n2) << endl;
  cout << c.divide(n1, n2) << endl;
  return 0;
}
