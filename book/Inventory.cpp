#include "Inventory.hpp"


        
        
        
        Inventory::Inventory(std::string name){
            this->name = name;
        }
        

        void Inventory::addBook(Book* book, int quantity){
            books[book->ID] = std::make_pair(book, quantity);
        }

        // void Inventory::removeBook(Book book){

        // }

        // // Book Inventory::getBook(int bookID){
        // //     // Uses '.' because it's in std::pair. 
        // //     // books: <ID, std::pair(Book, quantity)>
        // //     // return books[bookID].first;
        // // }

        // // int Inventory::getStock(int bookID){
        // //     // books: <ID, std::pair(Book, quantity)>
        // //     // return books[bookID].second;
        // // }

        void Inventory::printInfo(){
            for (auto it = books.cbegin(); it != books.cend(); it++){
                std::cout<<"Book ID: "<< it->first<<"\nTitle: "<< it->second.first->title<<"\nCurrent Stock: "<<it->second.second;
            }
            std::cout<<std::endl;
            
        }