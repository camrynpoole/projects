#include "student.h"

/**Cosntructor**/
Student::Student() {}

/**Assigns random integer to each grade element**/
void Student::SetGrades() {
  srand(time(0));
  labGrade = int(sqrt(rand() % 101) * 10);
  examGrade = int(sqrt(rand() % 101) * 10);
  quizGrade = int(sqrt(rand() % 101) * 10);
}

/** Accessors and Mutators **/
int Student::GetLabGrade() { return labGrade; }

int Student::GetExamGrade() { return examGrade; }

int Student::GetQuizGrade() { return quizGrade; }

/**Returns letter grade**/
string Student::GetLetterGrade(int grade) {
  if (grade >= 90) {
    return "A";
  } else if (grade >= 80) {
    return "B";
  } else if (grade >= 70) {
    return "C";
  } else if (grade >= 60) {
    return "D";
  } else {
    return "F";
  }
}
