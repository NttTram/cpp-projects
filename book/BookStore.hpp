#ifndef     BOOKSTORE_HPP
#define     BOOKSTORE_HPP

#include <iostream>
#include "Inventory.hpp"
#include "Book.hpp"
#include "Owner.hpp"

class BookStore;
class BookStore{
    public:
        std::string storeName;
        Owner* owner;
        // std::vector<Employee> employees;
        std::map<std::string, Inventory*> inventories;

        BookStore();
        ~BookStore();

        BookStore(std::string storeName, Owner* owner);

        void buyBook(Book* book, int quantity, double salePrice);
        void sellBook(Book* book, int quantity);

        void addInventory(Inventory* invent);
        void removeInventory(Inventory* invent);
        
};

#endif