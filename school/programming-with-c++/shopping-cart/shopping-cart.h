#ifndef SHOPPING_H
#define SHOPPING_H
#include <iostream>

// classes will be defined here

// base class
class Clothes {
public:
  void setPrice(int p);
  int getPrice();

  void setQuantity(int q);
  int getQuantity();

  void setCart(int c);
  int getCart();

private:
  int quantity;
  int price;
  int cart;
};

// derived classes
class Shirts : public Clothes {
public:
  void setShirt(int t, int i, int p);
  void showMenu();
  void setPrice();
  int getDiscount();
  int getFinalPrice();

private:
  int type;
  int item;
  int price;
  int discount;
  int finalPrice;
};

class Pants : public Clothes {
public:
  void setPant(int t, int i, int p);
  void showMenu();
  void setPrice();
  void getDiscount();
  void getFinalPrice();

private:
  int type;
  int item;
  int price;
  int discount;
  int finalPrice;
};

class Shoes : public Clothes {
public:
void setShoe(int t, int i, int p);
void showMenu();
void setPrice();
void getDiscount();
void getFinalPrice();

private:
int type;
int item;
int price;
int discount;
int finalPrice;
};


// class using composition
class ShoppingCart {
  // this class will include Shirts, Shoes, and Pants
public:
};

#endif // !SHOPPING_H
