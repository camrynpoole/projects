// This program simulates an application for purchasing items
// Camryn Poole
#include "shopping-cart.h"
#include <iostream>
using namespace std;

int main() {
  int choice = 0;
  Clothes menu;
  ShoppingCart cart;
  // begin with a menu of options
  while (choice != 4) {
    menu.showMenu();
    cin >> choice;
    if (choice == 1) {
      // add items to the cart
      // display the available items
      int itemChoice = menu.displayAvailableItems();
      if (itemChoice == 1) {
        // display the available shirt options
        cart.shirt.displayShirtOptions();
        // set the shirt options
        cart.shirt.setShirts();
      } else if (itemChoice == 2) {
        // display the available pant options
        cart.pant.displayPantsOptions();
        // set the pant options
        cart.pant.setPants();
      } else if (itemChoice == 3) {
        // display the available shoe options
        cart.shoe.displayShoesOptions();
        // set the shoe options
        cart.shoe.setShoes();
      } else {
        cout << "Invalid selection" << endl;
      }
    } else if (choice == 2) {
      // display the items in the cart
      cart.displayItemsInCart();
    } else if (choice == 3) {
      // display the total of the items in the cart
      // apply discount if items are 5 or more
      cart.displayTotal();
    } else if (choice == 4) {
      // exit the program
      cout << "Thank you for shopping with us!" << endl;
    } else {
      // input was invalid
      cout << "Invalid input, please try again." << endl;
    }
  }

  return 0;
}
