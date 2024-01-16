#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

using namespace std;
class Book;
class Book{
    public:
        static int bookID;
        std::string title;
        std::string author;
        
        std::string description;
        // double price;
        // int currStock;
        // int sold;

        Book(string title, string author, string description);
        ~Book(){}
        
        string getName();
        string getAuthor();
        
        string getDescription();


        // int CheckCurrentStock();
        // double getPrice();
        // void addStock(int restock){
        //     currStock += restock;

        // }

        // void sellBook(int saleNum){
        //     currStock -= saleNum;
        //     sold += saleNum;
        // }
        virtual void printInfo() = 0;

    private:
        // double purchased_price;

};


#endif 