#include "car.h"
#include "racetrack.h"
#include <iostream>
using namespace std;

int main(void) {
  cout << "   ___________ ______   ____             _            " << endl;
  cout << "  / ____/ ___// ____/  / __ \\____ ______(_)___  ____ _" << endl;
  cout << " / /    \\__ \\/ /      / /_/ / __ `/ ___/ / __ \\/ __ `/" << endl;
  cout << "/ /___ ___/ / /___   / _, _/ /_/ / /__/ / / / / /_/ / " << endl;
  cout << "\\____//____/\\____/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  " << endl;
  cout << "                                             /____/   " << endl;

  // Create RaceTrack object
  Racetrack track;

  // Create input object using a sample track
  ifstream trackFile("track1.txt");

  // Using text file to create track and weights
  track.read(trackFile);

  // Display track and weights to verify accuracy
  track.displayWeights(); // TODO: weights are inaccurate
  track.displayTrack();

  /* Segmentation Fault Occurs Here */

  // user car object
  Car userCar;
  userCar.userMoveCar();

  return 0;
}
