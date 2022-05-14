#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item::Item(){
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}
// 5. Implement Overloaded Constructor Implementation
Item::Item( int ItCode, float price, float disc){
  itemCode = ItCode;
  unitPrice = price;
  discount = disc;
}
// 6. Implement Destructor (display "Destructor Called")

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}

Item::~Item(){
  cout<< "Destructor runs for Item with Item code:"<< itemCode<<
    "price:"<< unitPrice<<"discount"<< discount;
}
