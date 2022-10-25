#include "computer-science-class.h"
#include "math-class.h"
#include <iostream>
using namespace std;

int main() {
  // set student
  Student std;
  std.SetGrades();

  // set the cs class object
  ComputerScienceClass csc;
  csc.SetName("CS210");
  csc.setStudent(std);

  // set the math class object
  MathClass mc;
  mc.SetName("MTH161");
  mc.setStudent(std);

  // get grades of mc class
  cout << "Course Name: " << mc.GetName() << "\n\n";
  int labGrade = mc.getStudent().GetLabGrade();
  int examGrade = mc.getStudent().GetExamGrade();
  int quizGrade = mc.getStudent().GetQuizGrade();

  cout << "Lab Grade: " << labGrade << "/"
       << mc.getStudent().GetLetterGrade(labGrade) << endl;
  cout << "Examm Grade: " << examGrade << "/"
       << mc.getStudent().GetLetterGrade(examGrade) << endl;
  cout << "Quiz Grade: " << quizGrade << "/"
       << mc.getStudent().GetLetterGrade(quizGrade) << endl;
  mc.CalcFinalGrade();

  // get the grades of cs class
  cout << "\nCourse Name: " << csc.GetName() << "\n\n";
  labGrade = csc.getStudent().GetLabGrade();
  examGrade = csc.getStudent().GetExamGrade();
  quizGrade = csc.getStudent().GetQuizGrade();

  cout << "Lab Grade: " << labGrade << "/"
       << csc.getStudent().GetLetterGrade(labGrade) << endl;
  cout << "Examm Grade: " << examGrade << "/"
       << csc.getStudent().GetLetterGrade(examGrade) << endl;
  cout << "Quiz Grade: " << quizGrade << "/"
       << csc.getStudent().GetLetterGrade(quizGrade) << endl;
  csc.CalcFinalGrade();

  return 0;
}
