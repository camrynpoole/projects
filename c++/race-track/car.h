#ifndef CAR_H
#define CAR_H
#include "racetrack.h"

// car class derived from racetrack
class Car : public Racetrack {
private:
  int row, column;    // current row and column of car
  int id;             // identify car on track
  int rowNumber;      // desired row number of car
  int columnNumber;   // desired column number of car
  int maxSpeed;       // maximum speed of car in one turn
  int rowVelocity;    // number tracking how many spaces up or down car may move
  int columnVelocity; // number tracking how many spaces left or right car may
                      // move

public:
  // initializer list for constructor
  // precondition: none
  // postcondition: member variables initialized
  Car() : id(0), rowNumber(0), columnNumber(0), maxSpeed(5), rowVelocity(0) {
    // max speed cannot go below 1
    maxSpeed = (maxSpeed < 1) ? 1 : maxSpeed;
  }

  // function to determine best path to take
  // precondition: car has not crashed
  // postcondition: car has best path to take
  void bestPath(int row, int column);

  // functions to set car id
  // precondition: id is not set
  // postcondition: id is set
  void setCarId(int carId) { id = carId; }
  // precondition: none
  // postcondition: id is returned
  int getCarId() { return id; }

  // functions to set car row velocity
  // precondition: row velocity is not set
  // postcondition: row velocity is set
  void setRowVelocity(int rowVel) { rowVelocity = rowVel; }
  // precondition: none
  // postcondition: row velocity is returned
  int getRowVelocity() { return rowVelocity; }

  // functions to set car column velocity
  // precondition: column velocity is not set
  // postcondition: column velocity is set
  void setColumnVelocity(int columnVel) { columnVelocity = columnVel; }
  // precondition: none
  // postcondition: column velocity is returned
  int getColumnVelocity() { return columnVelocity; }

  // function to determine how the user car will move
  // precondition: car has not crashed
  // postcondition: car has moved
  void userMoveCar();

  // function to determine how the cpu speed car will move
  // precondition: car has not crashed
  // postcondition: car has moved
  void cpuSpeedMoveCar();

  // function to determine how the cpu handle car will move
  // precondition: car has not crashed
  // postcondition: car has moved
  void cpuHandleMoveCar();

  // function to determine if car crashed
  // precondition: none
  // postcondition: true if car crashed, false if not
  bool carCrash();

  // function to calculate and apply slope from its current space to desired
  // space
  // precondition: none
  // postcondition: slope is calculated and applied
  void calculateSlope(int row, int column);

  // function to determine the spaces the car passes
  // precondition: none
  // postcondition: spaces are determined
  void calculateSpaces(int row, int column);

  // function to determine the winner
  // precondition: none
  // postcondition: winner is determined
  void determineWinner();
};

#endif // !CAR_H
