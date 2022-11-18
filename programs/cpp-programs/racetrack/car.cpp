#include "car.h"
#include <iostream>
using namespace std;

/** CAR CLASS IMPLEMENTATION **/

/** CONSTRUCTORS **/
Car::Car() {
  id = 0;
  rowNumber = 0;
  columnNumber = 0;
  rowVelocity = 0;
  columnVelocity = 0;
}
// TODO: seems redundant
Car::Car(int id, int rowNumber, int columnNumber, int rowVelocity,
         int columnVelocity) {

  this->id = id;
  this->rowNumber = rowNumber;
  this->columnNumber = columnNumber;
  this->rowVelocity = rowVelocity;
  this->columnVelocity = columnVelocity;
}

/** GETTERS **/
int Car::getId() { return id; }
int Car::getMaxSpeed() { return maxSpeed; }
int Car::getColumnNumber() { return columnNumber; }
int Car::getRowNumber() { return rowNumber; }
int Car::getColumnVelocity() { return columnVelocity; }
int Car::getRowVelocity() { return rowVelocity; }

/** SETTERS **/
void Car::setId(int id) { this->id = id; }
void Car::setMaxSpeed(int maxSpeed) { this->maxSpeed = maxSpeed; }
void Car::setColumnNumber(int columnNumber) {
  this->columnNumber = columnNumber;
}
void Car::setRowNumber(int rowNumber) { this->rowNumber = rowNumber; }
void Car::setColumnVelocity(int columnVelocity) {
  this->columnVelocity = columnVelocity;
}
void Car::setRowVelocity(int rowVelocity) { this->rowVelocity = rowVelocity; }

/** USER CAR CLASS IMPLEMENTATION **/
void UserCar::moveCar() {
  // move car based on user input
}
