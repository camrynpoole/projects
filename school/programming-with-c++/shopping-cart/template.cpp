#include <iostream>
using namespace std;

int checkcartempty = 0;

class clothes {
public:
  int quant, price;
};
class shirts : public clothes {
public:
  int type;
  int item;
  int initial_price = 0;
  int fprice = 0;
  void set(int item, int quant) {
    checkcartempty++;
    this->type = item;
    this->quant = quant;
    this->item = item;
    initial_price = quant * 25;
    if (quant >= 2) {
      fprice = initial_price * 0.85;
    }
  }
  void show() {
    string temp = "";
    if (item == 1) {
      temp = "Red Shirt";
    } else if (item == 2) {
      temp = "Blue shirt";
    } else {
      temp = "Green shirt";
    }
    cout << item << " " << temp << "........$" << initial_price << endl;
  }
  void price() { cout << quant << " " << type << ".......$" << fprice; }
  int discount() { return fprice - initial_price; }
  int pp() { return fprice; }
};

class pants : public clothes {
public:
  int type;
  int item;
  int initial_price = 0;
  int fprice = 0;
  void set(int item, int quant) {
    this->type = item;
    this->quant = quant;
    this->item = item;
    initial_price = quant * 40;
    if (quant >= 2) {
      fprice = initial_price * 0.85;
    }
  }
  void show() {
    string temp = "";
    if (item == 1) {
      temp = "Silk Pant";
    } else if (item == 2) {
      temp = "Cotton Pant";
    } else {
      temp = "Linen Pant";
    }
    cout << item << " " << temp << "........$" << initial_price << endl;
  }
  void price() { cout << quant << " " << type << ".......$" << fprice; }
  int discount() { return fprice - initial_price; }
  int pp() { return fprice; }
};

class shoes : public clothes {
public:
  int type;
  int item;
  int initial_price = 0;
  int fprice = 0;
  void set(int item, int quant) {
    this->type = item;
    this->quant = quant;
    this->item = item;
    initial_price = quant * 25;
    if (quant >= 2) {
      fprice = initial_price - 100;
    }
  }
  void show() {
    string temp = "";
    if (item == 1) {
      temp = "Nike shoes";
    } else if (item == 2) {
      temp = "Adidas shoes";
    } else {
      temp = "Converse shoes";
    }
    cout << item << " " << temp << "........$" << initial_price << endl;
  }
  void price() { cout << quant << " " << type << ".......$" << fprice; }
  int discount() { return fprice - initial_price; }
  int pp() { return fprice; }
};

int main() {
  shirts s;
  pants p;
  shoes sh;
  int choice = 0;

  while (choice != -1) {
    cout << "********CSC Shopping********\n";
    cout << "Add items...press 1\n";
    cout << "Display items...press 2\n";
    cout << "Display Total...press 3\n";
    cout << "Exit............press 4\n";
    cin >> choice;
    if (choice == 1) {
      cout << "How many do you like?";
      int n;
      cin >> n;
      cout << "Select a color:\n 1. Red\n2. Blue\n3. Green";
      int ch;
      cin >> ch;
      s.set(ch, n);

      cout << "How many would you like\n";
      int no;
      cin >> no;
      cout << "Select a fablric:\n1. Silk\n2. Cotton\n3. Linen\n";
      int choice2;
      cin >> choice2;
      p.set(choice2, no);

      cout << endl;

      cout << "How many would you like\n";
      int no3;
      cin >> no3;
      cout << "Select a brand\n";
      cout << "1. Nike\n2. Adidas\n3. Converse\n";
      int choice3;
      cin >> choice3;
      sh.set(choice3, no3);

    }

    else if (choice == 2) {
      s.show();
      p.show();
      sh.show();
    }

    else if (choice == 3) {
      if (checkcartempty == 0) {
        cout << "Cart is empty\n";
      } else {
        cout << "****Current items****\n";
        s.show();
        p.show();
        sh.show();

        cout << endl;
        cout << "****Discounts****\n";
        cout << s.discount() << endl << p.discount() << endl << sh.discount();

        cout << "************\n";
        cout << s.pp() + p.pp() + sh.pp() << endl;
      }
    }
  }
}
