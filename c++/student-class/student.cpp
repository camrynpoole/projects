#include "student.h"
#include <iostream>

using namespace std;

// functions definitions will reside here

// constructor
// require a name and major as paramenters
// create 5 random grades using the setter for grades
Student::Student(std::string n, std::string m) {
  setName(n);
  setMajor(m);
  setGrades();
}

// setter functions

void Student::setName(std::string n) { name = n; }
void Student::setMajor(std::string m) { major = m; }
void Student::setGrades() {
  // line goes before the loop or youll keep getting same number
  srand(time(0));
  // iterate through the array to access each element
  for (int i = 0; i < 5; i++) {
    int random = rand() % 100; // 100 is the upper bound
    grades[i] = random;        // assign the random number to each element
  }
}

// getter functions

string Student::getName() { return name; }
string Student::getMajor() { return major; }
void Student::getGrades() {
  // iterate through the array to access each element
  for (int i = 0; i < 5; i++) {
    /* store the value of the element in a variable
    to pass to the getLetterGrade function */
    int score = grades[i];
    cout << score << '/' << getLetterGrade(score) << endl;
  }
}

// returns the letter grade of a score using a grade scale
char Student::getLetterGrade(int score) {
  if (score >= 90)
    return 'A';
  if (score >= 80)
    return 'B';
  if (score >= 70)
    return 'C';
  if (score >= 60)
    return 'D';
  else
    return 'F';
}
