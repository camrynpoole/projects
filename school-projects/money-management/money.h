#ifndef MONEY_H
#define MONEY_H
#include <iostream>

// Account: base class
class Account {

public:
  // getters
  int getAccountNo();
  double getBalance();

  // setters
  void setAccountNo(int n);
  void setBalance(double b);

  // withdrawals
  void makeWithdrawal(double w);

  // deposits
  void makeDeposit(double d);

private:
  // account number
  int accountNo;
  // balance
  double balance;
};

// Savings: derived class
class Savings : public Account {

public:
  // constructor
  Savings(int num, double balance);

  double applyInterestRate(float rate);
  void printBalance();

private:
  // interest rate
  float interestRate;
};

// Checking: derived class
class Checking : public Account {

public:
  // constructor
  Checking(int num, double balance);

  double applyAnnualFee(float fee);
  void printBalance();

private:
  // annual fee
  float annualFee;
};
#endif // !MONEY_H
