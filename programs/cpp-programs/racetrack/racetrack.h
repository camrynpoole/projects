#ifndef RACETRACK_H_INCLUDED
#define RACETRACK_H_INCLUDED

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/** RACETRACK CLASS **/

// track will consist of:
// open spaces - blank spaces
// wall spaces - 'x'
// finish line - 'F'

// TODO: find somewhere to determine the winner

class Racetrack {
private:
  // The racetrack in printable form
  vector<string> track; // NOTE: dynamically change the structure of the track

  // The race track in the form of integer weights
  int **weights; // NOTE: weight array

  // Weight of a wall
  static const int W_WALL;

  // Weight of a finish line
  static const int W_FINISH;

  // Weight assigned to uninitialized cells
  static const int W_UNINIT;

public:
  // Initialize the racetrack
  Racetrack();

  // De-construct the racetrack
  ~Racetrack();

  // Retrieve the track height
  //@pre track is valid
  //@post return the number of rows in the track
  int height() const;

  // Retrieve the track width
  //@pre track is valid--i.e., all rows are of the same length.
  //@post return the number of columns in the track
  int width() const;

  // Read the track from an input stream, istream
  //@param ins input stream from which to read the track
  //@pre text file is provided using the correct characters for the track
  //@post create track/weights converting track into a 2d character array
  void read(istream &ins);

  // Display track
  //@pre track has been created
  //@post display track with spacing
  void displayTrack();

  // Display weights
  // This function exists purely for the purpose of debugging
  //@pre text file is provided and weights have been initialized
  //@post display weights of the current track
  void displayWeights(); // NOTE: for debugging

  // Create track spaces
  //@pre text file is provided using the correct characters for the track
  //@post convert string value "T" into a blank space.  T's represent the
  // actual track
  // NOTE: no need to change this function
  std::string replaceStrChar(string str, const string &replace, char ch);

  // NOTE: changes are needed in this function
  // weight initialization:
  // find finish line in 2d array
  // analyze each space around it
  // and determine if a weight needs to be assigned
  // ignore weight that are already assigned
  // do this iteratively
  // Initialize weights for the track
  //@pre text file is provided using the correct characters for the track
  //@post return weight array with the proper weights initialized
  void initWeights();

  // Access an element from the track
  //@pre numbers are provided that are between the height and width ranges
  //@post return the element located in the row/column position
  char getTrack(int x, int y);

  // Update an element from the track
  //@pre numbers are provided that are between the
  // height and width ranges.  A character is provided as well
  //@post Update the element located in the row/column
  // position using the character provided
  void setTrack(int x, int y, char value);
};

/** INLINE FUNCTIONS **/
// Used to improve performance in a program
// These functions work better for smaller tasks
// that are repeated frequently

// Return the height of the track
inline int Racetrack::height() const { return track.size(); }

// Return the width of the track
inline int Racetrack::width() const { return track[0].size(); }

#endif // RACETRACK_H_INCLUDED
