#include "Book.hpp"

int main(){

    Book* DeathNote = new Book("DeathNote", "N/A", "Manga series about a deadly book. Anything written in the book will come true including death.");
    
    // DeathNote->addStock(3);
    DeathNote->printInfo();
    

    return 0;
}