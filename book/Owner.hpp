#ifndef OWNER_HPP
#define OWNER_HPP

#include "Person.hpp"
#include <vector>

class Owner;
class Owner : virtual public Person{
    public:
        std::vector<std::pair<std::string, std::string>> storeOwned; //location, name
        int ID;
        Owner();
        ~Owner();

        Owner(std::string firstName, std::string lastName, int age, char gender);
        void addOwnership(std::string storeLocation, std::string storeName);
        void setBudget(double budget);
        void checkBudget();
        void updateBudget(double num);
        void currProfit();
        void updateProfit(double profit);

        double getBudget();
        double getProfit();
        void printDetail();

        private:
            double budget;
            double profit;
};

#endif