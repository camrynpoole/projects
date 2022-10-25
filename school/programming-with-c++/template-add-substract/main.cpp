#include <iostream>
using namespace std;

// template definition starts here
template <typename T> class AddMultiply {
private:
  // variables to store numbers
  T x;
  T y;

public:
  // will add x and y together
  T Add(T x, T y);
  // will multiply x and y together
  T Multiply(T x, T y);
};

// implementing template class
template <typename T> T AddMultiply<T>::Add(T x, T y) { return x + y; }

template <typename T> T AddMultiply<T>::Multiply(T x, T y) { return x * y; }

int main() {
  // create an object of AddMultiply class
  AddMultiply<int> obj;
  // call Add() function
  cout << obj.Add(2, 3) << endl;
  // call Multiply() function
  cout << obj.Multiply(2, 3) << endl;
  return 0;
}
