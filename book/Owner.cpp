#include "Owner.hpp"
    
    
double budget = 0;
double profit = 0;

Owner::Owner(){

}

Owner::Owner(std::string storeLocation, std::string storeName){
    storeOwned.push_back(std::make_pair(storeLocation, storeName));
}

void Owner::addOwnership(std::string storeLocation, std::string storeName){
    storeOwned.push_back(std::make_pair(storeLocation, storeName));
}
void Owner::setBudget(){

}
void Owner::checkBudget(){

}
void Owner::currProfit(){

}
void Owner::updateProfit(){

}
void Owner::printDetail(){
    
}