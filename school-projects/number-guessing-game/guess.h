#ifndef GUESS
#define GUESS
#include <iostream>

/* functions prototypes
variable declarations
class declarations
reside here */

namespace Guess {

class Menu {
public:
  void DisplayGreeting();
  void DisplayMenu();
  void DisplayEndMessage();

  // modifiers
  void setMenuChoice();

  // accessors
  int getMenuChoice();

private:
  int menuChoice;
};

class GuessingGame {

public:
  GuessingGame(); // constructor

  bool checkForPlayerMatch();
  bool checkForCpuMatch();
  void displayScoreBoard();

  // modifiers
  void setPlayerGuess();
  void setCpuGuess();
  void setNumberOfGuesses(int number);
  void setSecreteNumber();
  void setUserScore();
  void setCpuScore();

  // accessors
  int getPlayerGuess();
  int getCpuGuess();
  int getNumberOfGuesses();
  int getSecreteNumber();
  int getUserScore();
  int getCpuScore();

private:
  int playerGuess;
  int cpuGuess;
  int numberOfGuesses;
  int secreteNumber;
  int userScore;
  int cpuScore;
};

// subclass of GuessingGame
// to prevent having redundant function definitions for each level
class Levels : public GuessingGame {

public:
  // constructor
  // uses initializer list as the contructor for const variables
  Levels(int x = 5, int y = 10, int z = 20)
      : possible(x), slightlyPossible(y), impossible(z) {}

  void PossibleMode(); // easy mode
  void SlightlyPossibleMode(); // medium mode
  void ImpossibleMode(); // hard mode

private:
  const int possible;
  const int slightlyPossible;
  const int impossible;
};

} // namespace Guess

#endif // !GUESS
