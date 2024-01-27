#include "BookStore.hpp"

    BookStore::BookStore(){
        
    }
        

    BookStore::BookStore(std::string storeName, Owner* owner){
        this->storeName = storeName;
        this->owner = owner;
    }

    void BookStore::buyBook(Book* book, int quantity){
        double cost = quantity * book->getPrice();
        double res = owner->getBudget() - cost;
        //buy books to restock inventory and how many copies of it
        if(inventories.empty()){
            std::cout<<"---Please add inventory first---"<<std::endl;
            std::cout<<std::endl;
        }else{
            if(res <= 0.00){
                std::cout<<"---Budget not enough to buy---"<<std::endl;
                owner->checkBudget();
                printf("The book(s) cost: %.2f for %d quantity", cost, quantity);
                std::cout<<std::endl;
            }else{
                inventories["A"]->addBook(book, quantity);
                std::cout<<"---Book(s) added---"<<std::endl;
                owner->updateBudget(-cost);
                owner->checkBudget();
                std::cout<<std::endl;

            }
        }
        
        //will minus the budget. If not enough budget then cannot buy
    }
    void BookStore::sellBook(Book* book, int quantity){
        //find book and check if enough quantity to sell
        //if enough then remove book from Inventory
        double cost = book->getPrice() * quantity;
        if(inventories["A"]->getBook(book->ID)){
            if(inventories["A"]->getStock(book->ID) >= quantity){
                 //update sale price, profit
                std::cout<<"---Sell book successfully---"<<std::endl;
                owner->updateProfit(cost);
                owner->getProfit();
                inventories["A"]->updateStock(book, quantity);
                std::cout<<std::endl;
            }else{
                std::cout<<"---Not enough quantity to sell---"<<std::endl;
                std::cout<<"--Only "<<inventories["A"]->getStock(book->ID)<<" of copies this book are available--"<<std::endl;
                std::cout<<std::endl;
            }
        }else {
            std::cout<<"---Book not found---"<<std::endl;
            std::cout<<std::endl;
        }

       
    }

    void BookStore::addInventory(Inventory* invent){
        //Add inventory to the bookstore
        inventories[invent->name] = invent;
    }
    void BookStore::removeInventory(Inventory* invent){
        //remove inventory from the bookstore
        inventories.erase(invent->name);
    }