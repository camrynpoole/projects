#include <iostream>
using namespace std;

int main() {

  try {
    int momsAge = 30;
    int sonsAge = 34;
    if (sonsAge > momsAge) {
      throw 99; // this means an error occured
    }
  } catch (int x) {
    cout << "Son can't be older than mom, ERROR NUMBER: " << x << endl;
  }

  return 0;
}
