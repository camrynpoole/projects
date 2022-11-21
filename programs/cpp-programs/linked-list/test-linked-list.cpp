// Program to test the various operations on an ordered linked list

#include "ordered-linked-list.h"
#include <iostream>

using namespace std;

int main() {
  orderedLinkedList<int> list1, list2;
  int num;

  cout << "Enter numbers ending with -999." << endl;
  cin >> num;

  while (num != -999) {
    list1.insert(num);
    cin >> num;
  }

  cout << endl;

  cout << "list1: ";
  list1.print();
  cout << endl << endl;

  list2 = list1; // test the assignment operator

  cout << "list2: ";
  list2.print();
  cout << endl << endl;

  cout << "Enter the number to be deleted: ";
  cin >> num;
  cout << endl;

  list2.deleteAll(num);

  cout << "After deleting " << num << ", list2: " << endl;
  list2.print();
  cout << endl;

  return 0;
}
