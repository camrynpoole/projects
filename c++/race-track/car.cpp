#include "car.h"
#include <iostream>
using namespace std;

void Car::bestPath(int row, int column)
{
}

void Car::userMoveCar()
{
    setCarId(1);
    id = getCarId();

    // get user input for row velocity
    cout << "Enter row : ";
    cin >> row;

    // get user input for column velocity
    cout << "Enter column : ";
    cin >> column;

    /* Segmentation Fault Occurs Here */

    // move car to new location
    setTrack(row, column, id);

    // determine if car crashed
    if (carCrash())
    {
        // if car crashed, reset velocities to 0
        rowVelocity = 0;
        columnVelocity = 0;
    } else {
    // if car did not crash, calculate slope
    calculateSlope(rowVelocity, columnVelocity);
  }

  // calculate spaces
  calculateSpaces(rowVelocity, columnVelocity);

  // determine winner
  determineWinner();
}

void Car::cpuSpeedMoveCar() {
  setCarId(2);

  /* Car Does Not Move */
  // TODO: determine best path to take

  // determine if car crashed
  if (carCrash() == true) {
    // if car crashed, reset velocity to 0
    rowVelocity = 0;
    columnVelocity = 0;
  } else {
    // if car did not crash, calculate slope
    calculateSlope(rowVelocity, columnVelocity);
  }
  // calculate spaces
  calculateSpaces(rowVelocity, columnVelocity);

  // determine winner
  determineWinner();
}

void Car::cpuHandleMoveCar() {
  setCarId(3);

  /* Car Does Not Move */
  // TODO: determine best path to take

  // this car never hits cars or walls
  // so increase the velocity
  rowVelocity++;
  columnVelocity++;

  // calculate slope
  calculateSlope(rowVelocity, columnVelocity);

  // calculate spaces
  calculateSpaces(rowVelocity, columnVelocity);

  // determine winner
  determineWinner();
}

bool Car::carCrash() {
  // if element is wall
  if (isWall(rowNumber + rowVelocity, columnNumber + columnVelocity)) {
    // set velocity to 0
    rowVelocity = 0;
    columnVelocity = 0;
    // decrease max speed by 1
    maxSpeed--;
    return true;
  }
  // if element is car
  if (isCar(rowNumber + rowVelocity, columnNumber + columnVelocity)) {
    // set velocity to 0
    rowVelocity = 0;
    columnVelocity = 0;
    // decrease max speed by 1
    maxSpeed--;
    return true;
  }
  return false;
}

void Car::calculateSlope(int row, int column) {
  // to determine  car's path
  // calculate the slope from its current space to desired space
  // row = current row
  // rowNumber = desired row
  // column = current column
  // columnNumber = desired column
  // 10 = number of points to be checked between
  // current space and desired space
  int xslope = (row - rowNumber) / 10;
  int yslope = (column - columnNumber) / 10;
}

void Car::calculateSpaces(int row, int column) {
  // determine the spaces the car passes
  row = row - rowNumber;
  column = column - columnNumber;
}

void Car::determineWinner() {
  // determine the winner
  // if car lands on finish line
  if (isFinish(rowNumber, columnNumber)) {
    cout << id << " wins!" << endl;
  }
  return;
}
