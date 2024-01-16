#ifndef BOOK
#define BOOK

#include <iostream>

#include <string>
using namespace std;
class Book;
class Book{
    public:
        static int bookID;
        std::string title;
        std::string author;
        double price;
        std::string description;
        int currStock;
        int sold;

        Book(string title, string author, string description, double price);

        string getName();
        string getAuthor();
        int CheckCurrentStock();
        double getPrice();
        string getDescription();

        void addStock(int restock){
            currStock += restock;

        }

        void sellBook(int saleNum){
            currStock -= saleNum;
            sold += saleNum;
        }
        void printInfo();

    private:
        double purchased_price;

};


#endif 