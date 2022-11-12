#include <iostream>
#include <string>
using namespace std;

/*
Our Collector class has a heap-allocated array list,
an int representing its capacity and the current number of elements in it
(size). The default constructor sets the list pointer to a safe default
(nullptr), size and capacity to 0. An append() function is defined to append
data to a Collector object. It returns true if space is available in the array,
or false otherwise.
*/
class Collector {
  int *list;
  int size;
  int capacity;

public:
  // Default constructor
  Collector() {
    // We must define the default values for the data members
    list = nullptr;
    size = 0;
    capacity = 0;
  }

  // Parameterized constructor
  Collector(int cap) {
    // The arguments are used as values
    capacity = cap;
    size = 0;
    list = new int[capacity];
  }

  bool append(int v) {
    if (size < capacity) {
      list[size++] = v;
      return true;
    }
    return false;
  }

  // A simple print function
  void dump() {
    for (int i = 0; i < size; i++) {
      cout << list[i] << " ";
    }
    cout << endl;
  }

  ~Collector() {
    cout << "Deleting the object " << endl;
    if (capacity > 0)
      delete[] list;
  }
};

int main() {
  Collector c(10);
  for (int i = 0; i < 15; i++) {
    cout << c.append(i) << endl;
  }
}
