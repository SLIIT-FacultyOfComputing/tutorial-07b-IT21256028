// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      // 1. Write the Default Constructor
      Item();
      // 2. Write the Overloaded Constructor
      Item( int ItCode, float price, float disc);
      // 3. Write the Destructor
      

      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
      ~Item();
};
