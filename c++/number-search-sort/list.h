#ifndef list_h // header
#define list_h

// List class
class List {
  // private fields
  int size; // to store size of the array
  int *arr; // pointer to store the array

public:
  void swap(int *, int *); // function to swap two values at two indices
  void init(int);          // function to initialize the dynamic array
  void fillData();         // function to fill random values in the data
  void sortData();         // function to sort data using bubble sort
  void searchElement(int); // function to search an element with binary search
  void print();            // function to print the array elements
};
#endif // list_h
