#include "Owner.hpp"
    
    
double budget = 0;
double profit = 0;


Owner::Owner(std::string firstName, std::string lastName, int age, char gender) : Person(firstName, lastName, age, gender){ //Inheritance
   ID = Person::ID;
}

void Owner::addOwnership(std::string storeLocation, std::string storeName){
    //Add new store owenership
    storeOwned.push_back(std::make_pair(storeLocation, storeName));
}
void Owner::setBudget(double budget){
    //set budget
    this->budget = budget;
}
void Owner::checkBudget(){
    //Print budget
    printf("Available budget: $%.2f\n", budget);
}
void Owner::currProfit(){
    //Checking current profits
    printf("Current profit: $%.2f\n", profit);
}
void Owner::updateProfit(double profit){
    //Update adding the profit
    //Need to look out of negative numbers?
    this->profit += profit;
    std::cout<<"---Updated profit---"<<std::endl;
    printf("Current profit is: $%.2f\n", profit);
}
void Owner::printDetail(){
    //print owner's detail
    Person::printDetail();

    //print all stores owned
    std::cout<<"---List of stores owned---"<<std::endl;
    for(int i = 0; i < storeOwned.size(); i++){
        std::cout<<"Store name: "<<storeOwned[i].second<<"\nLocation: "<<storeOwned[i].first<<std::endl;
        std::cout<<std::endl;
    }
    
}