#include "guess.h"
#include <iostream>
using namespace Guess;
using namespace std;

int main() {
  // object declarations
  Menu menu;
  Levels levels;

  // display greeting
  menu.DisplayGreeting();

  // display menu
  menu.DisplayMenu();

  while (menu.getMenuChoice() != 0) {

    switch (menu.getMenuChoice()) {

    case 1:
      levels.PossibleMode();
      break;

    case 2:
      levels.SlightlyPossibleMode();
      break;

    case 3:
      levels.ImpossibleMode();
      break;

    case 4:
      levels.displayScoreBoard();
      break;

    default:
      break;
    }
    menu.DisplayMenu();
  }
  menu.DisplayEndMessage();
  return 0;
}
