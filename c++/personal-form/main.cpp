#include <iostream>
using namespace std;

int main() {
  // this program will prompt the user for the following:
  // major, total courses , courses remaining
  // then will calculate the percentage of completion
  // if there are no errors thrown
  // major try-catch block
  try {
    string major;
    cout << "Enter your major" << endl;
    // use getline because computer science contains a space
    // otherwise it will only read computer
    // clear the input stream before getline
    cin.clear();
    getline(cin, major);
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

  // courses try-catch block
  try {
    // variables to hold user input
    int totalCourses, coursesRemaining;
    cout << "Enter the number of courses" << endl;
    cin >> totalCourses;
    // if courses or less than or equal to 0
    // throw an error, cant have 0 courses
    if (totalCourses <= 0) {
      throw totalCourses; // throw the int totalCourses
    }
    // if totalCourses is greater than 0
    // continue with prompting for coursesRemaining
    cout << "Enter the number of courses remaining" << endl;
    cin >> coursesRemaining;
    // the calculate the percentage of courses completed
    // display the percentage of courses completed
    cout << "The percentage of completion is: "
         << (totalCourses - coursesRemaining) * 100 / totalCourses << "%"
         << endl;
  } catch (int e) { // does not matter what the variable is named
    cout << "Error: " << e << " is not a valid number of courses" << endl;
  } catch (...) { // catch all other errors
    cout << "Error: An unknown error has occured" << endl;
  }

  return 0;
}
