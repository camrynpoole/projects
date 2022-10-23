#include "swap-template.h"
#include <iostream>

int main() {
  int x = 4, y = 7;

  std::cout << "Before Swap \n";
  std::cout << "x : " << x << "\t y: " << y;

  swap(x, y);

  std::cout << "\n\nAfter Swap\n";
  std::cout << "x : " << x << "\t y: " << y;

  return 0;
}
