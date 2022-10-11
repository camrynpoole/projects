#include "money.h"
#include <iostream>
using namespace std;

// ACCOUNT CLASS
void Account::setAccountNo(int n) { accountNo = n; }
int Account::getAccountNo() { return accountNo; }

void Account::setBalance(double b) { balance = b; }
double Account::getBalance() { return balance; }

void Account::makeWithdrawal(double w) {
  if (w > balance) {
    cout << "Withdrawal exceeds the balance\n";
  }
  balance -= w;
}

void Account::makeDeposit(double d) { balance += d; }

// SAVINGS CLASS

Savings::Savings(int num, double balance) {
  Account::setAccountNo(num);
  Account::setBalance(balance);
}

double Savings::applyInterestRate(float rate) {
  interestRate = rate;
  // calculate balance with interest rate
  double balance = Account::getBalance();
  balance = balance + (balance * interestRate) / 100;
  return balance;
}

void Savings::printBalance() {
  double balance = Account::getBalance();
  cout << "Savings Account Balance: $" << balance << endl;
}

// CHECKING CLASS

Checking::Checking(int num, double balance) {
  Account::setAccountNo(num);
  Account::setBalance(balance);
}

double Checking::applyAnnualFee(float fee) {
  annualFee = fee;
  // calculate balance with annual fee
  double balance = Account::getBalance();
  balance = balance - annualFee;
  return balance;
}

void Checking::printBalance() {
  double balance = Account::getBalance();
  cout << "Checking Account Balance: $" << balance << endl;
}
