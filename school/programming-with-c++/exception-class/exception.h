#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>
#include <string>
using namespace std;

class except {
  string major;
  int totalCourses, coursesRemaining;

public:
  void majorExcept(string m) {
    // major try-catch block
    try {
      major = m;
      // if major is not "Computer Science" or "Math"
      // throw an error
      if (major != "Computer Science" && major != "Math") {
        throw major; // throw the string major
      }
      // if major is "Computer Science" or "Math"
      // then display the major
      cout << "Your major is " << major << endl;
    } catch (string e) {
      cout << "Error: " << e << " is not a valid major" << endl;
    } catch (...) { // catch all other errors
      cout << "Error: An unknown error has occured" << endl;
    }
  }

  void coursesExcept(int t, int r) {
    totalCourses = t;
    coursesRemaining = r;
    // courses try-catch block
    try {
      // if courses are less than or equal to 0
      // throw an error, cant have 0 courses
      if (totalCourses <= 0) {
        throw totalCourses; // throw the int totalCourses
      }
      // if totalCourses is greater than 0
      // then calculate the percentage of courses completed
      // display the percentage of courses completed
      cout << "The percentage of completion is: "
           << (totalCourses - coursesRemaining) * 100 / totalCourses << "%"
           << endl;
    } catch (int e) { // does not matter what the variable is named
      cout << "Error: " << e << " is not a valid number of courses" << endl;
    } catch (...) { // catch all other errors
      cout << "Error: An unknown error has occured" << endl;
    }
  }
};
#endif // !EXCEPTION_H
