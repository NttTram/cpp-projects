#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Book.hpp"
#include <map>
#include <utility>
#include <functional>

class Inventory;
class Inventory{
    public:
        std::string name;
        // books = book(Book*), <quantity(int), salePrice>
        std::map<Book*, std::pair<int, int>> books;
        double totalCost;
        Inventory();
        Inventory(std::string name);
        ~Inventory();

        void addBook(Book* book, int quantity, double salePrice);
        void removeBook(Book* book);
        
        bool findBook(Book* book);
        int getStock(Book* book);
        void updateStock(Book* book, int quantity);
        void printAll();
        

};

#endif