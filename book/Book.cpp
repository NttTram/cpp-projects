#include "Book.hpp"

using namespace std;

    int Book::bookID = 0;

    Book::Book(std::string title, std::string author, std::string description, double price){
        bookID++;
        this->title = title;
        this->author = author;
        this->description = description;
        this->price = price;
        sold = 0;
        currStock = 0;
    }

    string Book::getName(){
        return title;
    }
    string Book::getAuthor(){
        return author;
    }
    int Book::CheckCurrentStock(){
        return currStock;
    }   

    double Book::getPrice(){
        return price;
    }

    string Book::getDescription(){
        return description;
    }

    void Book::printInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Description: "<<description<<endl;
        cout<<"Price: "<<price<<"     Current Stock: "<<currStock<<endl;
    }
