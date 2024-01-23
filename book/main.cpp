#include "Book.hpp"
#include "Inventory.hpp"
#include "Owner.hpp"

int main(){

    Book* DeathNote = new Book("DeathNote", "N/A", "Manga series about a deadly book. Anything written in the book will come true including death.", 2004);
    Inventory* BookShelf = new Inventory("A");
     DeathNote->setPrice(18.99);
    BookShelf->addBook(DeathNote, 3);
   
    // DeathNote->addStock(3);
    DeathNote->printInfo();
    BookShelf->printAll();
    
    Owner* Tim = new Owner("Tim", "Lee", 28, 'M');

    Tim->setBudget(15000);
    Tim->addOwnership("VIC",BookShelf->name);
    Tim->printDetail();

    return 0;
}