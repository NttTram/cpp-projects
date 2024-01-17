#include "Book.hpp"
#include "Inventory.hpp"

int main(){

    Book* DeathNote = new Book("DeathNote", "N/A", "Manga series about a deadly book. Anything written in the book will come true including death.");
    Inventory* BookShelf = new Inventory("A");
    BookShelf->addBook(DeathNote, 3);

    // DeathNote->addStock(3);
    DeathNote->printInfo();
    BookShelf->printInfo();
    

    return 0;
}