#include "Inventory.hpp"


        
        Inventory::Inventory(){
            name = "No name";
        }
        
        Inventory::Inventory(std::string name){
            this->name = name;
            totalCost = 0.00;
        }
        
        // Add existing book to inventory annd the numbber on quantity
        void Inventory::addBook(Book* book, int quantity){
            double cost = book->getPrice() * quantity;
            books[book->ID] = std::make_pair(book, quantity);
            totalCost += cost;
            std::cout<<"Added book: "<<book->title<<"\nWhich cost: $"<<cost<<std::endl;
            std::cout<<std::endl;
        }

        // Remove book from inventory with ID
        void Inventory::removeBook(int bookID){
            books.erase(bookID);
        }

        // Get the object Book by ID
        Book* Inventory::getBook(int bookID){
            // Uses '.' because it's in std::pair. 
            // books: <ID, std::pair(Book, quantity)>
            return books[bookID].first;
        }

        // Check current stock on requested book
        int Inventory::getStock(int bookID){
            // books: <ID, std::pair(Book, quantity)>
            return books[bookID].second;
        }

        void Inventory::updateStock(Book* book, int quantity){
           
            if(books[book->ID].second > quantity){
                 books[book->ID].second -= quantity;
            }else{
                books[book->ID].second = 0;
            }

            std::cout<<"---Updated book stock---"<<std::endl;
            std::cout<<std::endl;
        }

        //Print all books in the inventory and it's quantity
        void Inventory::printAll(){
            for (auto it = books.cbegin(); it != books.cend(); it++){
                std::cout<<"Book ID: "<< it->first<<"\nTitle: "<< it->second.first->title<<"\nCurrent Stock: "<<it->second.second;
            }
            std::cout<<std::endl;
            
        }

      