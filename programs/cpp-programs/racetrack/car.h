#ifndef CAR_H
#define CAR_H

/** CAR CLASS **/

// each car will have the following attributes:
// id number - display car on track
// row number - identify row on track
// column number - identify column on track
// max speed - determines how many spaces car can move on 1 turn
// row velocity - number tracking how many spaces a car can move
// column velocity - number tracking how many spaces a car can move

/** PARENT CLASS **/
class Car {
private:
  int id;
  int rowNumber;
  int columnNumber;
  int maxSpeed = 5; // every car will start with max speed of 5
  int rowVelocity;
  int columnVelocity;

public:
  // default constructor
  Car();
  // initialize constructor
  Car(int id, int rowNumber, int columnNumber, int rowVelocity,
      int columnVelocity);
  // destructor
  ~Car();

  // getters
  int getId();
  int getRowNumber();
  int getColumnNumber();
  int getMaxSpeed();
  int getRowVelocity();
  int getColumnVelocity();

  // setters
  void setId(int id);
  void setRowNumber(int rowNumber);
  void setColumnNumber(int columnNumber);
  void setMaxSpeed(int maxSpeed);
  void setRowVelocity(int rowVelocity);
  void setColumnVelocity(int columnVelocity);
};

/** CAR TYPES **/
// ther will be 3 types of cars
// user, speed, and handle
// each will have logic that determines how car moves

// MOVEMENT
// a car will make contact with wall or other car:
// car lands on a space labeled as a wall
// car lands on a space outside of track, if did not cross finish line
// car path from current position passed through a wall or another car

// PATH
// determine cars path by calculating the slope from its current
// position to its destination
// formulas:
// yslope - (y1 - y2) / 10
// xslope - (x1 - x2) / 10
// 10 is the number of points to be checked between its current position and
// destination
// after calculating the slope apply these equations x1 = x1 -
// xslope y1 = y1 - yslope

// HIT WALL OR CAR
// max speed will descrease by 1
// velocity will be set to 0
// will not move that turn

/** CHILD CLASS - USER **/
class UserCar : public Car {
public:
  // this car will moved based on user input
  void moveCar();

  // check the car's path to see if it will hit a wall or another car
  void checkPath();

  // apply penalties when a car hits another car or wall
  void carCrashed();
};

/** CHILD CLASS - SPEED **/
class ComputerSpeedCar : public Car {
public:
  // this car will move based on lowest weight
  // car may reach on that turn
  // will frequently hit walls and other cars
  void moveCar();

  // check the car's path to see if it will hit a wall or another car
  void checkPath();

  // apply penalties when a car hits another car or wall
  void carCrashed();
};

/** CHILD CLASS - HANDLE **/
class ComputerHandleCar : public Car {
public:
  // this car will move based on lowest weight
  // car may reach on that turn
  // will never hit walls or other cars
  void moveCar();

  // check the car's path to see if it will hit a wall or another car
  void checkPath();

  // apply penalties when a car hits another car or wall
  void carCrashed();
};

#endif // !CAR_H
