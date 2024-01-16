#include "Book.hpp"

int main(){

    Book* DeathNote = new Book("DeathNote", "N/A", "Mange series about a deadly book. Anything written in the book will come true including death.", 15.99);
    
    DeathNote->addStock(3);
    DeathNote->printInfo();
    

    return 0;
}