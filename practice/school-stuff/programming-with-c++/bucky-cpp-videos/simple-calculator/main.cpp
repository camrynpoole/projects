#include <iostream>
using namespace std;

int main() {
  // this is a simple calculator program
  // it only performs division
  // it will throw an error if you try to divide by 0

  // setting up the try catch block
  try {
    int num1;
    cout << "Enter first  number: " << endl;
    cin >> num1;

    int num2;
    cout << "Enter second number: " << endl;
    cin >> num2;

    if (num2 == 0) {
      throw 0;
    }
    cout << "Answer is: " << num1 / num2 << endl;
  } catch (int e) { // this will catch type int
    cout << "Error: Cannot divide by " << e << endl;
  } catch (...) { // this is the default catch, will catch all other
    // do not put default catch first
    // if you do, it will catch all errors
    // and defeat the purpose of the other catch blocks
    cout << "Error: Unknown error" << endl;
  }
  return 0;
}
