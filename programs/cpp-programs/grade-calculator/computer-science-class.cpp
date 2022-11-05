#include "computer-science-class.h"

void ComputerScienceClass::CalcFinalGrade() {
  int avg = student.GetLabGrade() * 0.5 + student.GetExamGrade() * 0.3 +
            student.GetQuizGrade() * 0.2;
  cout << "Final Weighted Average: " << avg << "/"
       << student.GetLetterGrade(avg) << endl;
}

void ComputerScienceClass::setStudent(Student student) {
  this->student = student;
}

Student ComputerScienceClass::getStudent() { return student; }
