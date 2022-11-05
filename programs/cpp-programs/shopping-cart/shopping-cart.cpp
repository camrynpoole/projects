#include "shopping-cart.h"
#include <iostream>
using namespace std;

// Clothes********************************************************
void Clothes::showMenu() {
  // display the intro menu
  cout << "Welcome to the Shopping Cart!" << endl;
  cout << "Please select an option from the menu below." << endl;
  cout << "Add Items .......................... press 1" << endl;
  cout << "View Items in Cart ................. press 2" << endl;
  cout << "View Total ......................... press 3" << endl;
  cout << "Exit ............................... press 4" << endl;
}

int Clothes::displayAvailableItems() {
  displayDiscounts();
  // display the available items
  cout << "Please select an item from the menu below." << endl;
  cout << "Shirts ............................. press 1" << endl;
  cout << "Pants .............................. press 2" << endl;
  cout << "Shoes .............................. press 3" << endl;
  cin >> userSelection;
  return userSelection;
}
void Clothes::displayDiscounts() {
  // display the discounts available
  cout << "Big Summer Blowout!!!!!!" << endl;
  cout << "Catch The Sale Before It Ends!!" << endl;
  cout << "Buy 2 or more shirts and receive 15% off" << endl;
  cout << "Buy 2 or more pants and receive 15% off" << endl;
  cout << "Buy 2 or more shoes and receive 1 free pair" << endl;
}

// Shirts********************************************************
void Shirts::displayShirtOptions() {
  // display the available shirt options
  cout << "Please select a shirt from the menu below." << endl;
  cout << "Long Sleeve ........................ press 1" << endl;
  cout << "Short Sleeve ....................... press 2" << endl;
  cout << "Sweatshirt ......................... press 3" << endl;
  cin >> item;
  cout << "How many would you like to purchase?" << endl;
  cin >> quantity;
}

void Shirts::setShirts() {
  // sets the price of the shirt based on the quantity
  this->quantity = quantity;
  int price = 25;                 // base price of shirt
  initalPrice = price * quantity; // base price multiplied by quantity
  if (quantity >= 2) {
    // if the user purchases 2 or more shirts, they recieve 15% off
    int discount = (initalPrice * 15) / 100;
    finalPrice =
        initalPrice - discount; // substract discounted amount from price
  } else {
    // if the user purchases less than 2 shirts, they pay the base price
    finalPrice = initalPrice;
  }
}
void Shirts::showShirt() {
  // setting the shirt type based on user input
  string type = "";
  if (item == 1) {
    type = "Long Sleeve";
  } else if (item == 2) {
    type = "Short Sleeve";
  } else if (item == 3) {
    type = "Sweatshirt";
  } else {
    type = "";
  }
  if (type == "") {
    cout << "No shirts selected" << endl;
  } else {
    cout << "You have selected " << type << " with a quantity of " << quantity
         << " for a total of $" << finalPrice << endl;
  }
}
int Shirts::cost() { return finalPrice; }

// Pants*************************************************************
void Pants::displayPantsOptions() {
  // display the available pants options
  cout << "Please select a pant from the menu below." << endl;
  cout << "Jeans .............................. press 1" << endl;
  cout << "BellBottoms ........................ press 2" << endl;
  cout << "Corduroy ........................... press 3" << endl;
  cin >> item;
  cout << "How many would you like to purchase?" << endl;
  cin >> quantity;
}
void Pants::setPants() {
  // sets the price of the pants based on the quantity
  this->quantity = quantity;
  int price = 40; // base price of pants
  initalPrice = price * quantity;
  if (quantity >= 2) {
    // if the user purchases 2 or more pants, they recieve 15% off
    int discount = (initalPrice * 15) / 100;
    finalPrice =
        initalPrice - discount; // substract the discount from base price
  } else {
    // if the user purchases less than 2 pants, they pay the base price
    finalPrice = initalPrice;
  }
}
void Pants::showPants() {
  // setting the pants type based on user input
  string type = "";
  if (item == 1) {
    type = "Jeans";
  } else if (item == 2) {
    type = "BellBottoms";
  } else if (item == 3) {
    type = "Corduroy";
  } else {
    type = "";
  }
  if (type == "") {
    cout << "No pants selected" << endl;
  } else {
    cout << "You have selected " << type << " with a quantity of " << quantity
         << " for a total of $" << finalPrice << endl;
  }
}
int Pants::cost() { return finalPrice; }

// Shoes*************************************************************
void Shoes::displayShoesOptions() {
  // display the available shoes options
  cout << "Please select a shoe from the menu below." << endl;
  cout << "Louboutin ........................... press 1" << endl;
  cout << "DrMartens ........................... press 2" << endl;
  cout << "Stacey Adams ........................ press 3" << endl;
  cin >> item;
  cout << "How many would you like to purchase?" << endl;
  cin >> quantity;
}

void Shoes::setShoes() {
  // sets the price of the shoes based on the quantity
  this->quantity = quantity;
  int price = 50; // base price of shoes
  initalPrice = price * quantity;
  if (quantity >= 2) {
    // if the user purchases 2 or more shoes, they recieve 1 free pair
    int discount = price; // remove the price of one shoe for the discount
    finalPrice = initalPrice - discount;
  } else {
    finalPrice = initalPrice;
  }
}

void Shoes::showShoes() {
  // setting the shoes type based on user input
  string type = "";
  if (item == 1) {
    type = "Louboutin";
  } else if (item == 2) {
    type = "DrMartens";
  } else if (item == 3) {
    type = "Stacey Adams";
  } else {
    type = "";
  }
  if (type == "") {
    cout << "No shoes selected" << endl;
  } else {
    cout << "You have selected " << type << " with a quantity of " << quantity
         << " for a total of $" << finalPrice << endl;
  }
}

int Shoes::cost() { return finalPrice; }

// ShoppingCart********************************************************
void ShoppingCart::displayItemsInCart() {
  // display the items in the cart
  cout << "Items in Cart:" << endl;
  pant.showPants();  // display the pants
  shoe.showShoes();  // display the shoes
  shirt.showShirt(); // display the shirt
  // will display  "None Selected" if no items are selected
}

void ShoppingCart::displayTotal() {
  // display the total price of the items in the cart
  int total = shirt.cost() + shoe.cost() + pant.cost();
  // if the total quantity is 5 or more apply the discount
  if (shirt.quantity + shoe.quantity + pant.quantity >= 5) {
    int discount = (total * 5) / 100; // discount is 5%
    cout << "You have recieved a discount of $" << discount
         << endl; // displays the amount saved
    total = total - discount;
    cout << "Your total is: $" << total << endl;
  } else {
    // if less than 5 items are purchased, display the total with no discount
    cout << "Your total is $" << total << endl;
  }
}
