#ifndef SHOPPING_H
#define SHOPPING_H
#include <iostream>
#include <string>

// classes will be defined here

// Base Class************************************************
class Clothes {
public:
  int userSelection;

  void showMenu();
  int displayAvailableItems();
  void displayDiscounts();
};

// Derived Classes**********************************************
class Shirts : public Clothes {
public:
  int item;
  int quantity;
  int initalPrice;
  int finalPrice;

  void displayShirtOptions();
  void setShirts();
  void showShirt();
  int cost();
};

class Pants : public Clothes {
public:
  int item;
  int quantity;
  int initalPrice;
  int finalPrice;

  void displayPantsOptions();
  void setPants();
  void showPants();
  int cost();
};

class Shoes : public Clothes {
public:
  int item;
  int quantity;
  int initalPrice;
  int finalPrice;

  void displayShoesOptions();
  void setShoes();
  void showShoes();
  int cost();
};

// Composition Class*****************************************
class ShoppingCart {
  // this class will include Shirts, Shoes, and Pants
public:
  Shirts shirt;
  Shoes shoe;
  Pants pant;

  // display the items in the cart
  void displayItemsInCart();
  // display the total of the items in the cart
  void displayTotal();
  // if user has 5 or more items, they recieve 5% off
  void applyDiscount();
};

#endif // !SHOPPING_H
