#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

  /*
     VECTOR PROGRAM
  */

  // statement to declare a vector named secretList of type integer
  vector<int> secretList;

  // adding elements to the vector
  secretList.push_back(56);
  secretList.push_back(28);
  secretList.push_back(32);
  secretList.push_back(96);
  secretList.push_back(75);

  // for loop to display the elements of the vector
  for (int i = 0; i < secretList.size(); i++) {
    cout << secretList[i] << endl;
  }

  /*
     LIST PROGRAM
  */

  // statement to declare a list named secretList of type integer
  list<int> secretList2;

  // adding elements to the list
  secretList2.push_back(56);
  secretList2.push_back(28);
  secretList2.push_back(32);
  secretList2.push_back(96);
  secretList2.push_back(75);

  // statement to declare an iterator named i of type integer
  list<int>::iterator i;

  // display the elements of the list
  // loop until the end of the list
  // starting from the beginning
  for (i = secretList2.begin(); i != secretList2.end(); i++) {
    cout << *i << endl;
  }

  return 0;
}
