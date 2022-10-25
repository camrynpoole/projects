#include "money.h"
#include <iostream>
using namespace std;

int main() {
  // object declarations
  Savings s(23, 15000.00);
  Checking c(1738, 1751.22);

  // initial balances
  cout << "**********INITIAL BALANCES**********" << endl;
  c.printBalance(); // checking account
  s.printBalance(); // savings account
  cout << endl;

  // transactions
  cout << "**********TRANSACTIONS BALANCES**********" << endl;
  cout << "Withdraw $250 from Checking Account" << endl;
  c.makeWithdrawal(250);
  cout << "Deposit $100 from Savings Account" << endl;
  s.makeDeposit(100);
  cout << "Apply $5 fee to Checking Account" << endl;
  c.applyAnnualFee(5);
  cout << "Apply 2% interest to Savings Account" << endl;
  s.applyInterestRate(2);

  cout << endl;

  // final balances
  cout << "**********FINAL BALANCES**********" << endl;
  c.printBalance();
  s.printBalance();

  return 0;
}
