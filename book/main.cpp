#include "Book.hpp"
#include "Inventory.hpp"
#include "Owner.hpp"
#include "BookStore.hpp"

int main(){

    Book* DeathNote = new Book("DeathNote", "N/A", "Manga series about a deadly book. Anything written in the book will come true including death.", 2004);
    BookStore* cat_cafe = new BookStore("Meow meow cafe", "Tim");
    Inventory* BookShelf = new Inventory("A");
     DeathNote->setPrice(18.99);
    BookShelf->addBook(DeathNote, 3);
   
    // DeathNote->addStock(3);
    DeathNote->printInfo();
    BookShelf->printAll();
    
    Owner* Tim = new Owner("Tim", "Lee", 28, 'M');

    Tim->setBudget(15000);
    Tim->addOwnership("VIC",BookShelf->name);
    Tim->addOwnership("3020,, VIC", cat_cafe->storeName);
    Tim->printDetail();
    Tim->currProfit();
    Tim->updateProfit(-88.50);

    return 0;
}