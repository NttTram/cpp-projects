#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Book.hpp";

class Inventory;
class Inventory : public Book{
    public:
        int bookID;
        
        void printInfo(){ 
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Description: "<<description<<endl;
        };

};

#endif