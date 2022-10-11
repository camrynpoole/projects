#ifndef MATHCLASS_H_INCLUDED
#define MATHCLASS_H_INCLUDED

#include "course.h"
#include "student.h"

class MathClass : public Course {
private:
  Student student;

public:
  void CalcFinalGrade();
  void setStudent(Student);
  Student getStudent();
};

#endif
