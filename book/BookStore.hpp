#ifndef     BOOKSTORE_HPP
#define     BOOKSTORE_HPP

#include <iostream>
#include "Inventory.hpp"
#include "Book.hpp"

class BookStore;
class BookStore{
    public:
        std::string storeName;
        // std::string owner;
        // std::vector<Employee> employees;
        std::map<std::string, Inventory*> inventories;

        BookStore();
        ~BookStore();

        BookStore(std::string storeName, std::string owner);

        void buyBook(int bookID, int quantity);
        void sellBook(int bookID, int quantity);

        void addInventory(Inventory* invent);
        void removeInventory(Inventory* invent);
        
};

#endif