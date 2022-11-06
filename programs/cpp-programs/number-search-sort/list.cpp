#include <iostream>
using namespace std;
#include "list.h"

// function to initialize the size of dynamic array
void List::init(int n) {
  size = n; // assign the size
  // dynamically assign the size of array
  arr = (int *)(malloc(sizeof(int) * n));
}

// function to swap values at two indices
void List::swap(int *a, int *b) {
  // swapping using a third variable
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to fill random data in array
void List::fillData() {
  int max = 1e3; // assuming max value is 999
  // iterate through each index and assign the value
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % max;
  }
}
// function to print the data
void List::print() {
  cout << "\nThe array elements are : ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

// function to sort data using bubble sort
void List::sortData() {
  // strategy is to sort the array from right side
  // largest element will come at last in first iteration
  // similarly 2nd ,3rd largest and so on

  // iterate through each index
  for (int i = 0; i < size; i++) {
    // again iterate from starting index
    for (int j = 0; j < size - i - 1; j++) {
      // check if value at j index is greater than value at j+1 index
      if (arr[j] > arr[j + 1]) {
        // swap both values so that larger comes at right side
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// function to search an element in sorted array
void List::searchElement(int x) {

  int l = 0;        // assign low as 0
  int h = size - 1; // assign high as last index
  int ans = -1;     // assume element doesnot exist
  while (l <= h)    // iterate until l <=h
  {
    int mid = (l + h) / 2; // get mid value
    // compare value at mid index with x

    if (arr[mid] < x) {
      // this means all values less than mid index  will be less than x
      // so search in the right part
      l = mid + 1;
    } else if (arr[mid] == x) {
      // this means x is there in the array
      // assign mid as x
      // break the loop
      ans = mid;
      break;

    } else {
      // this means value to be find may be in the left half of range
      h = mid - 1;
    }
  }

  // check if ans is -1 means value doesnot exist in the array
  if (ans == -1) {
    cout << x << " not found in the array\n";
  } else {
    // value exists
    cout << x << " found at index " << ans << " in the array\n";
  }
}
