#include "math-class.h"

void MathClass::CalcFinalGrade() {
  int avg = (student.GetLabGrade() + student.GetExamGrade() +
             student.GetQuizGrade()) /
            3;
  cout << "Final Average: " << avg << "/" << student.GetLetterGrade(avg)
       << endl;
}

void MathClass::setStudent(Student student) { this->student = student; }

Student MathClass::getStudent() { return student; }
