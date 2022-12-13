#ifndef SHOPPING_H
#define SHOPPING_H
#include <iostream>
#include <string>

// classes will be defined here

// Base Class************************************************
class Clothes {
public:
  // variable to hold the user's selection
  int userSelection;
  // variable to hold the quantity of items
  int quantity;

  // display the intro menu
  void showMenu();
  // display the available items
  int displayAvailableItems();
  // display the discounts
  void displayDiscounts();
};

// Derived Classes**********************************************
class Shirts : public Clothes {
public:
  // variable to hold the shirt type
  int item;
  // variable to hold the initial price
  int initalPrice = 0;
  // variable to hold the final price
  int finalPrice = 0;

  // display the available shirt options
  // allows the user to select the shirt type and quantity
  void displayShirtOptions();
  // sets the price of the shirt based on the quantity
  void setShirts();
  // displays the shirt type and price
  void showShirt();
  // returns the price of the shirt
  int cost();
};

class Pants : public Clothes {
public:
  // variable to hold the pant type
  int item;
  // variable to hold the initial price
  int initalPrice = 0;
  // variable to hold the final price
  int finalPrice = 0;

  // display the available pants options
  // allows the user to select the pants type and quantity
  void displayPantsOptions();
  // sets the price of the pants based on the quantity
  void setPants();
  // displays the pants type and price
  void showPants();
  // returns the price of the pants
  int cost();
};

class Shoes : public Clothes {
public:
  // variable to hold the shoe type
  int item;
  // variable to hold the initial price
  int initalPrice = 0;
  // variable to hold the final price
  int finalPrice = 0;

  // display the available shoes options
  // allows the user to select the shoes type and quantity
  void displayShoesOptions();
  // sets the price of the shoes based on the quantity
  void setShoes();
  // displays the shoes type and price
  void showShoes();
  // returns the price of the shoes
  int cost();
};

// Composition Class*****************************************
class ShoppingCart {
  // this class will include Shirts, Shoes, and Pants
public:
  Shirts shirt; // shirt object
  Shoes shoe;   // shoe object
  Pants pant;   // pant object

  // display the items in the cart
  // returns none selected if empty
  void displayItemsInCart();
  // display the total of the items in the cart
  // if the cart has over 5 items , it will apply a discount
  // of 5% off the total
  void displayTotal();
};

#endif // !SHOPPING_H
