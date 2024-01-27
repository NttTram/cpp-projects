#include "Inventory.hpp"


        
        Inventory::Inventory(){
            name = "No name";
        }
        
        Inventory::Inventory(std::string name){
            this->name = name;
            totalCost = 0.00;
        }
        
        // Add existing book to inventory annd the numbber on quantity
        void Inventory::addBook(Book* book, int quantity, double salePrice){
            double cost = book->getPrice() * quantity;
            books[book] = std::make_pair(quantity, salePrice);
            totalCost += cost;
            std::cout<<"Added book: "<<book->title<<"\nWhich cost: $"<<cost<<std::endl;
            std::cout<<std::endl;
        }

        // Remove book from inventory with ID
        void Inventory::removeBook(Book* book){
            books.erase(book);
        }

        // Get the object Book by ID
        bool Inventory::findBook(Book* book){
            // Uses '.' because it's in std::pair. 
            // books: <ID, std::pair(Book, quantity)>
            if(books.count(book))
                return true;
            return false;
            
        }

        // Check current stock on requested book
        int Inventory::getStock(Book* book){
            // books: <ID, std::pair(Book, quantity)>
            return books[book].first;
        }

        void Inventory::updateStock(Book* book, int quantity){
           
            if(books[book].first > quantity){
                 books[book].first -= quantity;
            }else{
                books[book].first = 0;
            }

            std::cout<<"---Updated book stock---"<<std::endl;
            std::cout<<std::endl;
        }

        //Print all books in the inventory and it's quantity
        void Inventory::printAll(){
            for (auto it = books.cbegin(); it != books.cend(); it++){
                std::cout<<"Book ID: "<< it->first->bookID<<"\nTitle: "<< it->first->title<<"\nCurrent Stock: "<<it->second.first<<"\nSale Price: "<<it->second.second<<std::endl;
            }
            std::cout<<std::endl;
            
        }

      