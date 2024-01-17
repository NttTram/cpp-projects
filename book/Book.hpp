#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

using namespace std;
class Book;
class Book{
    public:
        static int bookID;
        int ID;
        std::string title;
        std::string author;
        std::string description;
        // double price;
        // int currStock;
        // int sold;
        Book();
        Book(string title, string author, string description);
        ~Book(){}
        
        string getName();
        string getAuthor();     
        string getDescription();

        virtual void printInfo();

    private:
        // double purchased_price;

};


#endif 