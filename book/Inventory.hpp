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
        // books = BookID(int), book(Book), quantity(int)
        std::map<int, std::pair<Book*, int>> books;
       

        Inventory(std::string name);
        ~Inventory();

        void addBook(Book* book, int quantity);
        void removeBook(Book* book);

        Book* getBook(int bookID);
        int getStock(int bookID);
        void printInfo();


};

#endif