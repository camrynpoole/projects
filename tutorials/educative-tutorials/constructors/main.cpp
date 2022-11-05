#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

public:
  // Default constructor
  Date() {
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }

  // Parameterized constructor
  Date(int day, int month, int year) {
    // Using this pointer
    this->day = day;
    this->month = month;
    this->year = year;
  }

  // A simple print function
  void printDate() {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main() {
  // Call the Date constructor to create its object;

  Date d(1, 8, 2018); // Object created with specified values!
  d.printDate();
}
