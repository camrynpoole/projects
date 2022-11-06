#include "list.cpp"
#include <iostream>
using namespace std;

int main() {
  cout << "Enter the size of array\n";
  int n;
  cin >> n;        // get size of array
  List list;       // make object of list class
  list.init(n);    // initialize the list
  list.fillData(); // fill the data
  list.print();    // print the data

  list.sortData(); // sort the  data
  cout << "\n--- After sorting the data---\n";
  list.print(); // print the data
  cout << "Enter the element to search\n";
  int x;
  cin >> x;              // get element to search
  list.searchElement(x); // call the search function

  return 0;
}
