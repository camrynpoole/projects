#include "racetrack.h"

/** Special Weights **/
// each space on the track will be assigned a weight
// finish line will have a weight of 0
// wall spaces will have a weight of 1000000
// open spaces will be determined based on distance from finish line
// at the start of race . each car will be at highest weight value

// Wall Weight Value
const int Racetrack::W_WALL = 1000000;
// Finish Line Weight Value
const int Racetrack::W_FINISH = 0;
// Uninitialized Weight Value
const int Racetrack::W_UNINIT = -1;

//
Racetrack::Racetrack() : track() {
  // Let the initializer list construct the track vector
  // weights can not be created until the size of the track is known
  weights = NULL;
}

// Destroy object and weights pointer
Racetrack::~Racetrack() {
  // I can not delete an array if it has not yet been created
  if (weights != NULL) {
    // delete each row
    for (int i = 0; i < this->height(); i++) {
      delete[] weights[i];
    }

    // delete the array of pointers
    delete[] weights;
  }
}

// Read track and add elements to vector and weights to weight array
void Racetrack::read(istream &ins) {
  string element;
  while (ins >> element) {
    for (int i = 0; i < element.size(); i++) {
      // Replace the T's with blank/track spaces
      element = replaceStrChar(element, "T", ' ');
    }
    // Add current element to the track vector
    track.push_back(element);
  }
  // Initialize weights after track has been created
  this->initWeights();
}

// Convert string into character
string Racetrack::replaceStrChar(string str, const string &replace, char ch) {
  // set our locator equal to the first appearance of any character in replace
  size_t found = str.find_first_of(replace);

  while (found !=
         string::npos) { // While our position in the sting is in range.
    str[found] = ch;     // Change the character at position.
    found = str.find_first_of(replace, found + 1); // Relocate again.
  }

  return str; // return our new string.
}

// Access an element from the track
char Racetrack::getTrack(int x, int y) { return track[x][y]; }

// Update an element from the track
void Racetrack::setTrack(int x, int y, char value) { track[x][y] = value; }

// Displays Track in Game Mode
void Racetrack::displayTrack() {
  for (int i = 0; i < height(); i++) {
    for (int j = 0; j < width(); j++) {
      cout << setw(3) << track[i][j];
    }
    cout << endl;
  }
}

// Displays the weights of the current track.  Used for Testing/Debugging
// Purposes
void Racetrack::displayWeights() {
  cout << "********************TRACK WEIGHTS***********************" << endl;
  for (int i = 0; i < height(); i++) {
    for (int j = 0; j < width(); j++) {
      if (weights[i][j] > 100) {
        cout << setw(3) << "X";
      } else {
        cout << setw(3) << weights[i][j];
      }
    }
    cout << endl;
  }
  cout << "********************TRACK WEIGHTS***********************" << endl
       << endl;
}

// Initialize weight values
void Racetrack::initWeights() {
  // Allocate the number of required rows (pointers)
  weights = new int *[height()];

  // Allocate each row
  for (int i = 0; i < height(); i++) {
    weights[i] = new int[width()];

    // Set each cell as uninitialized
    for (int j = 0; j < width(); j++) {
      weights[i][j] = W_UNINIT;

      // Set wall weights
      if (toupper(track[i][j]) == 'X') {
        weights[i][j] = W_WALL;
      } else if (toupper(track[i][j]) == 'F') {
        // Set finish line weight
        weights[i][j] = W_FINISH;
      }
    }
  }
  /** TODO: Assign Weights to blank spaces here **/
  
}
