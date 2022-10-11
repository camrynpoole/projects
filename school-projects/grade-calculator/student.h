#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Student {

private:
  /** Private Members/Attributes **/
  int labGrade;
  int examGrade;
  int quizGrade;

public:
  /**
   * Constructor
   */
  Student();

  /** Accessors and Mutators **/
  void SetGrades();
  int GetLabGrade();
  int GetExamGrade();
  int GetQuizGrade();

  /**
   * Obtain letter grade
   *
   * @pre score/number is provided
   * @post returns the letter grade associated to the score/number
   */
  string GetLetterGrade(int grade);
};

#endif // STUDENT_H_INCLUDED
