#include "Book.hpp"

using namespace std;

    int Book::bookID = 0;
    Book::Book(){
        title = "na";
        author = "na";
        description = "na";
        year = 0;
        ID = 0;
    }
    Book::Book(std::string title, std::string author, std::string description, int year){
        bookID++;
        ID = bookID;
        this->title = title;
        this->author = author;
        this->description = description;
        this->year = year;
      
    }

    string Book::getName(){
        return title;
    }
    string Book::getAuthor(){
        return author;
    }

    string Book::getDescription(){
        return description;
    }

    void Book::setPrice(double price){
        this->price = price;
    }
    double Book::getPrice(){
        return price;
    }

    void Book::printInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Description: "<<description<<endl;
    }
