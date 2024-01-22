#ifndef OWNER_HPP
#define OWNER_HPP

#include "Person.hpp"
#include <vector>

class Owner;
class Owner : virtual public Person{
    public:
        std::vector<std::string, std::string> storeOwned; //location, name

        Owner();
        ~Owner();

        Owner(std::string storeLocation, std::string storeName);
        
};

#endif