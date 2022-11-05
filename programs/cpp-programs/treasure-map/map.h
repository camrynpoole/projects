#ifndef MAP_H
#define MAP_H

#include <iostream>

namespace map {
/**
 * Display the map
 *
 * @pre 2d-array contains 20 row elements
 * @post Display 2d-array in a 20x20 square
 */
void DisplayMap(char myMap[][20]) {
  for (int col = 0; col < 20; col++) {
    // std::cout << col << " ";
    for (int row = 0; row < 20; row++) {
      std::cout << myMap[col][row] << " ";
    }
    std::cout << std::endl;
  }
}

/**
 * Find the 'X' on the map
 *
 * @pre 2d-array contains 20 row elements
 * @post Displays the column and row of the 'X'
 */
void FindX(char myMap[][20]) {
  for (int col = 0; col < 20; col++) {
    for (int row = 0; row < 20; row++) {
      if (myMap[col][row] == 'X') {
        std::cout << "Treasure is at : " << col << ',' << row << std::endl;
      }
    }
  }
}
} // namespace map

#endif
