#ifndef SWAPTEMPLATE_H

#define SWAPTEMPLATE_H

// template definition starts here
template <typename T>
void swap(T &a, T &b) // Function swap using Template
{
  T temp = a;
  a = b;
  b = temp;
}

#endif
