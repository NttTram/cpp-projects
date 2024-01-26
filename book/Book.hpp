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
        int year;
        
        // int currStock;
        // int sold;
        Book();
        Book(string title, string author, string description, int year);
        ~Book(){};
        
        string getName();
        string getAuthor();     
        string getDescription();

        void setPrice(double price);
        double getPrice();
        
        void printInfo();

    private:
        double price;

};


#endif 