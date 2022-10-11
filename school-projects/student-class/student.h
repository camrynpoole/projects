#ifndef STUDENT_H
#define STUDENT_H
#include <string>

// class declaration,
// function prototypes,
// variable declarations
// will reside here

class Student {
public:
  // constructor
  Student(std::string n, std::string m);
  // setters: purpose to write to or change
  void setName(std::string n);
  void setMajor(std::string m);
  void setGrades();

  // getters: purpose is to return data
  std::string getName();
  std::string getMajor();
  void getGrades();
  // letter grade
  char getLetterGrade(int score);

private:
  std::string name;
  std::string major;
  int grades[5];
};

#endif // !STUDENT_H
