// Camryn Poole
// Exercise: Classes and Data Abstraction
// CSC 210
// September 7, 2022
// this program will create a class named Student with the private attributes
// name, major, and grades then use accessors and modifiers
// to access the attributes

#include "student.h"
#include <iostream>

using namespace std;

// class object
// resides here

int main() {

  Student a("Billy Billy Fo Filly Banana Anna Fo Fana Fee Fi Fo Famma Emma!", "Computer Science");
  cout << "Name: " << a.getName() << endl;
  cout << "Major: " << a.getMajor() << endl;
  cout << "Grades: " << endl;
  cout << "-------" << endl;
  a.getGrades();

  return 0;
}
