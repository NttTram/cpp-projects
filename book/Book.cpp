#include "Book.hpp"

using namespace std;

    int Book::bookID = 0;

    Book::Book(std::string title, std::string author, std::string description){
        bookID++;
        this->title = title;
        this->author = author;
        this->description = description;
      
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

    void Book::printInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Description: "<<description<<endl;
    }
