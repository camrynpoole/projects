#include <iostream>
#include <string>
using namespace std;
/*
In the case of object pointers, destructors are called when we issue the delete
command, as in the following program on line 56
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
  Collector *c;
  c = new Collector(10);
  for (int i = 0; i < 15; i++) {
    cout << c->append(i) << endl;
  }
  delete c;
  cout << "Exiting program" << endl;
}
