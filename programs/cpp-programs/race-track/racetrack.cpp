#include "racetrack.h"
#include <queue>

// Wall Weight Value
const int Racetrack::W_WALL = 1000000;
// Finish Line Weight Value
const int Racetrack::W_FINISH = 0;
// Uninitialized Weight Value
const int Racetrack::W_UNINIT = -1;

/*******************************************************/
// Added Member Variables

/* TODO: not implemented yet */

// Neighbor Offset Values
const int Racetrack::offsetX[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
const int Racetrack::offsetY[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
/*******************************************************/

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
      } else if (toupper(track[i][j]) == 'S') {
        // Set start line weight
        weights[i][j] = 0;
      }
      /*******************************************************/
      // Added Code Here

      /* TODO: Incorrect Logic Here */
      // determine distance from finish line
      for (int k = 0; k < height(); k++) {
        for (int l = 0; l < width(); l++) {
          if (toupper(track[k][l]) == 'F') {
            // skip walls and initialized cells
            if (weights[i][j] == W_WALL || weights[i][j] != W_UNINIT) {
              continue;
            }
            // Calculate the distance from the finish line
            weights[i][j] = abs(k - i) + abs(l - j);
          }
        }
      }
    }
  }
  /********************************************************/
}

/**********************************************************/
// Added Member Functions

bool Racetrack::isVisited(int x, int y) {
  // if cell lies out of bounds return true
  if (x < 0 || y < 0 || x >= height() || y >= width()) {
    return true;
  }
  // if cell has been visited return true
  if (visited[x][y] == true) {
    return true;
  }
  return false;
}

bool Racetrack::isWall(int x, int y) {
  // determine if cell is a wall
  if (toupper(track[x][y]) == 'X') {
    return true;
  }
  return false;
}

bool Racetrack::isFinish(int x, int y) {
  // determine if cell is the finish line
  if (toupper(track[x][y]) == 'F') {
    return true;
  }
  return false;
}

bool Racetrack::isCar(int x, int y) {
  // determine if cell is the car
  if (toupper(track[x][y]) == 'C') {
    return true;
  }
  return false;
}
/*************************************************************/
