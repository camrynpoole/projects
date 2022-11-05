#include <iostream>
#include <string>
using namespace std;

// base class
class employee {
public:
  employee();
  employee(string, int, double);
  employee(int, double);
  employee(string);

  void setData(string, int, double);
  void print() const;
  void updatePay(double);
  int getNumOfServiceYears() const;
  double getPay() const;

private:
  string name;
  int numOfServiceYears;
  double pay;
};

// base class definitions
employee::employee() {
  name = "";
  numOfServiceYears = 0;
  pay = 0.0;
}
employee::employee(string n, int num, double tPay) {
  name = n;
  numOfServiceYears = num;
  pay = tPay;
}

void employee::print() const {
  cout << "\nName: " << name
       << "\nNumber of Service Years: " << numOfServiceYears
       << "\nPay: " << pay;
}

// derived class
class partTime : public employee {
private:
  double payRate;
  double hoursWorked;

public:
  // constructor
  partTime() : employee() {
    payRate = 0;
    hoursWorked = 0;
  }
  // argument constructor
  partTime(string n, int y, double tPay, double p, double h)
      : employee(n, y, tPay) {
    payRate = p;
    hoursWorked = h;
  }
  partTime(int y, double tPay, double p, double h) : employee(y, tPay) {
    payRate = p;
    hoursWorked = h;
  }

  partTime(string n, double p, double h) : employee(n) {
    payRate = p;
    hoursWorked = h;
  }
  void print() const {
    employee::print();
    cout << "\nPay Rate: " << payRate;
    cout << "\nHours Worked: " << hoursWorked << "\n";
  }
};

int main() {
  // partTime object
  partTime p1("Camryn", 30, 1500, 15, 40);

  return 0;
}
