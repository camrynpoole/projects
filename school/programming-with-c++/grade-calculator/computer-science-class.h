#ifndef COMPUTERSCIENCECLASS_H_INCLUDED
#define COMPUTERSCIENCECLASS_H_INCLUDED

#include "course.h"
#include "student.h"

class ComputerScienceClass : public Course {
private:
  Student student;

public:
  void CalcFinalGrade();
  Student getStudent();
  void setStudent(Student);
};

#endif
