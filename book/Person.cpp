#include "Person.hpp"

    int Person::ID = 0;
    Person::Person(std::string firstName, std::string lastName, int age, char gender){
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->gender = gender;
        ID++;

    }

    void Person::printDetail(){
        std::cout<<"Name: " << firstName << " " << lastName<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Gender: "<<gender<<std::endl;
    }

    Person::~Person(){
        std::cout<<"Person died."<<std::endl;
    }