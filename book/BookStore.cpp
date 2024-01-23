#include "BookStore.hpp"

    BookStore::BookStore(){
        
    }
        

    BookStore::BookStore(std::string storeName, std::string owner){
        this->storeName = storeName;
        this->owner = owner;
    }

    void BookStore::buyBook(int bookID, int quantity){
        //buy books to restock inventory and how many copies of it

        //will minus the budget. If not enough budget then cannot buy
    }
    void BookStore::sellBook(int bookID, int quantity){
        //find book and check if enough quantity to sell
        //if enough then remove book from Inventory


        //update sale price, profit
    }

    void BookStore::addInventory(Inventory* invent){
        //Add inventory to the bookstore
    }
    void BookStore::removeInventory(Inventory* invent){
        //remove inventory from the bookstore
    }