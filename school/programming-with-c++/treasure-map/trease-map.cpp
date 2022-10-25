#include "map.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace map;

int main() {
  /**Create 2d-array**/
  char myMap[20][20];

  /**Create Loop to iterate through all array elements**/
  for (int col = 0; col < 20; col++) {
    for (int row = 0; row < 20; row++) {
      /**Assign character to all elements**/
      myMap[col][row] = '.';
    }
  }
  std::cout << "hi";

  // display the map using DisplayMap function
  DisplayMap(myMap);

  /**Generate Random number**/
  srand(time(0));

  /**Store the 'X' in a random element of the 2d array**/
  myMap[rand() % 20][rand() % 20] = 'X';

  // show the column and row x is located on
  FindX(myMap);

  return 0;
}
