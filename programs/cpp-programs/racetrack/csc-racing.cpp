#include "racetrack.h"
#include <iostream>

/** GAME SYNOPSIS **/

// user will race against the cpu on a given track
// race will consist of a user car and 2 cpu cars
// each car will move during their turn
// first car to reach the finish line wins

using namespace std;

int main() {
  cout << "   ___________ ______   ____             _            " << endl;
  cout << "  / ____/ ___// ____/  / __ \\____ ______(_)___  ____ _" << endl;
  cout << " / /    \\__ \\/ /      / /_/ / __ `/ ___/ / __ \\/ __ `/" << endl;
  cout << "/ /___ ___/ / /___   / _, _/ /_/ / /__/ / / / / /_/ / " << endl;
  cout << "\\____//____/\\____/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  " << endl;
  cout << "                                             /____/   " << endl;

  /** TESTING **/

  // Create RaceTrack object
  Racetrack track;
  // Create input object using a sample track
  ifstream trackFile("track1.txt");
  // Using text file to create track and weights
  track.read(trackFile);
  // Display track and weights to verify accuracy
  track.displayWeights();
  track.displayTrack();
}
