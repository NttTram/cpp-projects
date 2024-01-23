#ifndef OWNER_HPP
#define OWNER_HPP

#include "Person.hpp"
#include <vector>

class Owner;
class Owner : virtual public Person{
    public:
        std::vector<std::pair<std::string, std::string>> storeOwned; //location, name

        Owner();
        ~Owner();

        Owner(std::string storeLocation, std::string storeName);
        void addOwnership(std::string storeLocation, std::string storeName);
        void setBudget();
        void checkBudget();
        void currProfit();
        void updateProfit();
        void printDetail();

        private:
            double budget;
            double profit;
};

#endif