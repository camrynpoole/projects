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
  int price = 25;
  initalPrice = price * quantity;
  if (quantity >= 2) {
    // if the user purchases 2 or more shirts, they recieve 15% off
    int discount = (initalPrice * 15) / 100;
    finalPrice = initalPrice - discount;
  } else {
    finalPrice = initalPrice;
  }
}
void Shirts::showShirt() {
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
  cout << "You have selected " << type << " with a quantity of " << quantity
       << " for a total of $" << finalPrice << endl;
}
int Shirts::cost() { return finalPrice; }

// Pants*************************************************************
void Pants::displayPantsOptions() {
  cout << "Please select a pant from the menu below." << endl;
  cout << "Jeans .............................. press 1" << endl;
  cout << "BellBottoms ........................ press 2" << endl;
  cout << "Corduroy ........................... press 3" << endl;
  cin >> item;
  cout << "How many would you like to purchase?" << endl;
  cin >> quantity;
}
void Pants::setPants() {
  int price = 40;
  initalPrice = price * quantity;
  if (quantity >= 2) {
    // if the user purchases 2 or more pants, they recieve 15% off
    int discount = (initalPrice * 15) / 100;
    finalPrice = initalPrice - discount;
  } else {
    finalPrice = initalPrice;
  }
}
void Pants::showPants() {
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
  cout << "You have selected " << type << " with a quantity of " << quantity
       << " for a total of $" << finalPrice << endl;
}
int Pants::cost() { return finalPrice; }

// Shoes*************************************************************
void Shoes::displayShoesOptions() {
  cout << "Please select a shoe from the menu below." << endl;
  cout << "Louboutin ........................... press 1" << endl;
  cout << "DrMartens ........................... press 2" << endl;
  cout << "Stacey Adams ........................ press 3" << endl;
  cin >> item;
  cout << "How many would you like to purchase?" << endl;
  cin >> quantity;
}

void Shoes::setShoes() {
  int price = 50;
  initalPrice = price * quantity;
  if (quantity >= 2) {
    // if the user purchases 2 or more shoes, they recieve 1 free pair
    int discount = price;
    finalPrice = initalPrice - discount;
  } else {
    finalPrice = initalPrice;
  }
}

void Shoes::showShoes() {
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
  cout << "You have selected " << type << " with a quantity of " << quantity
       << " for a total of $" << finalPrice << endl;
}

int Shoes::cost() { return finalPrice; }

// ShoppingCart********************************************************
void ShoppingCart::displayItemsInCart() {
  cout << "Items in Cart:" << endl;
  pant.showPants();
  shoe.showShoes();
  shirt.showShirt();
}
void ShoppingCart::displayTotal() {
  int total = shirt.cost() + shoe.cost() + pant.cost();
  std::cout << "Your total is: $" << total << std::endl;
}
void ShoppingCart::applyDiscount() {
  if (shirt.quantity + shoe.quantity + pant.quantity >= 5) {
    int total = shirt.cost() + shoe.cost() + pant.cost();
    int discount = (total * 5) / 100;
    cout << "You have recieved a discount of $" << discount << endl;
    total = total - discount;
    std::cout << "Your total is: $" << total << std::endl;
  } else {
    displayTotal();
  }
}
