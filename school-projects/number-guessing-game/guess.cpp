#include "guess.h"
#include <iostream>
using namespace std;
using namespace Guess;

// MENU CLASS

// display a greeting message upon program start
void Menu::DisplayGreeting() {
  cout << "\n\t\t\tWelcome to GuessingGame game!" << endl;
  cout << "You have to guess a number between 0 and 100. "
          "You'll have limited choices based on the "
          "level you choose. Good Luck!"
       << endl;
}
// display the menu
void Menu::DisplayMenu() {
  cout << "\nEnter the difficulty level: \n";
  cout << "1 for possible!\n";
  cout << "2 for slightly possible!\n";
  cout << "3 for impossible!\n";
  cout << "4 for the scoreboard\n";
  cout << "0 for ending the game!\n" << endl;
  cout << "Your choice: ";
  setMenuChoice();
  cout << endl;
}
// set menu choice with user input
void Menu::setMenuChoice() {
  int x;
  cin >> x;
  menuChoice = x;
}
// return menu choice
int Menu::getMenuChoice() { return menuChoice; }

// thanks for playing and exit
void Menu::DisplayEndMessage() {
  cout << "Thanks for playing! " << endl;
  exit(0);
}

// GUESSINGGAME CLASS

// constructor initliazes userScore and cpuScore to 0
GuessingGame::GuessingGame() {
  userScore = 0;
  cpuScore = 0;
}

// sets secreteNumber with a random number
void GuessingGame::setSecreteNumber() {
  srand(time(0));
  secreteNumber = 1 + (rand() % 100);
}

// returns secreteNumber variable
int GuessingGame::getSecreteNumber() { return secreteNumber; }

// sets the players choice with the user input
void GuessingGame::setPlayerGuess() {
  cout << "\nEnter the number: ";
  cin >> playerGuess;
}

// returns the players Guess
int GuessingGame::getPlayerGuess() { return playerGuess; }

// sets the player's guess
// checks if guess is equal to, less than, or greater than secreteNumber
// loops only once
// returns true if player wins and false if player looses
bool GuessingGame::checkForPlayerMatch() {
  setPlayerGuess();
  getPlayerGuess();
  // use early return instead of else statements for readability
  if (playerGuess == secreteNumber) {
    cout << "Well played! You won, " << playerGuess << " is the secret number"
         << endl;
    cout << "\t\t\t Thanks for playing...." << endl;
    cout << "Play the game again with "
            "us!!\n\n"
         << endl;
    setUserScore(); // increments userScore if player wins
    return true;    // true if player guesses correct
  }
  if (playerGuess > secreteNumber) {
    cout << "The secret number is "
            "smaller than the number "
            "you have chosen"
         << endl;
  }
  if (playerGuess < secreteNumber) {
    cout << "The secret number is "
            "greater than the number "
            "you have chosen"
         << endl;
  }
  return false; // false if player guesses wrong
}

// set cpu choice uses a random number between 0 and 100
void GuessingGame::setCpuGuess() { cpuGuess = rand() % 100 + 1; }

// returns cpu choice
int GuessingGame::getCpuGuess() { return cpuGuess; }

// sets the cpu's guess with a random number
// checks if guess is equal to, less than, or greater than secreteNumber
// loops until cpu is out of guesses
// return true if cpu wins and return false if cpu looses
bool GuessingGame::checkForCpuMatch() {
  do {
    setCpuGuess();
    getCpuGuess();
    // early return instead of using else statements for readability
    if (cpuGuess == secreteNumber) {
      cout << "Cpu guess is " << cpuGuess << endl;
      cout << "CPU won\n" << cpuGuess << " is the secrete number\n";
      setCpuScore(); // increases cpuScore if cpu wins
      return true;   // true if cpu guesses correct
    }
    if (cpuGuess > secreteNumber) {
      cout << "Cpu guess is " << cpuGuess << endl;
      cout << "Cpu number is too high\n";
    }
    if (cpuGuess < secreteNumber) {
      cout << "Cpu guess is " << cpuGuess << endl;
      cout << "Cpu number is too low\n";
    }
    --numberOfGuesses;
    cout << "Cpu has " << numberOfGuesses << " choices left. " << endl;
  } while (numberOfGuesses != 0); // terminate loop when numberOfGuesses is 0
  return false;                   // false if cpu guesses wrong
}

// set numberOfGuesses to what is passed into function
void GuessingGame::setNumberOfGuesses(int number) { numberOfGuesses = number; }

// return numberOfGuesses
int GuessingGame::getNumberOfGuesses() { return numberOfGuesses; }

// increments userScore
void GuessingGame::setUserScore() { userScore++; }

// return the current userScore
int GuessingGame::getUserScore() { return userScore; }

// increments cpuScore
void GuessingGame::setCpuScore() { cpuScore++; }

// return the current cpuScore
int GuessingGame::getCpuScore() { return cpuScore; }

// displays the current scores
void GuessingGame::displayScoreBoard() {
  cout << "\n\t\t\tScoreBoard" << endl;
  cout << "User Score: " << getUserScore() << endl;
  cout << "Cpu Score: " << getCpuScore() << endl;
}

// LEVELS CLASS

// run the GuessingGame in possible mode
void Levels::PossibleMode() {

  cout << "\n\t\t\tPOSSIBRUH" << endl;

  setSecreteNumber();
  getSecreteNumber();

  int user, cpu;

  do {
    setNumberOfGuesses(possible);
    getNumberOfGuesses();
    user = checkForPlayerMatch();
    if (user == true) // dont let cpu guess if user is correct
      continue;
    cpu = checkForCpuMatch();
  } while (user == false && cpu == false); // loop until user or cpu is true

  getUserScore();
  getCpuScore();
}

// run the GuessingGame in slightly possible mode
void Levels::SlightlyPossibleMode() {

  cout << "\n\t\t\tSLIGHTLY POSSIBRUH" << endl;

  setSecreteNumber();
  getSecreteNumber();

  int user, cpu;

  do {
    setNumberOfGuesses(slightlyPossible);
    getNumberOfGuesses();
    user = checkForPlayerMatch();
    if (user == true) // dont let cpu guess if user is correct
      continue;
    cpu = checkForCpuMatch();
  } while (user == false && cpu == false); // loop until user or cpu is true

  getUserScore();
  getCpuScore();
}

// run the GuessingGame in impossible mode
void Levels::ImpossibleMode() {

  cout << "\n\t\t\tIMPOSSIBRUH" << endl;

  setSecreteNumber();
  getSecreteNumber();

  int user, cpu;

  do {
    setNumberOfGuesses(possible);
    getNumberOfGuesses();
    user = checkForPlayerMatch();
    if (user == true) // dont let cpu guess if user is correct
      continue;
    cpu = checkForCpuMatch();
  } while (user == false && cpu == false); // loop until user or cpu is true

  getUserScore();
  getCpuScore();
}
