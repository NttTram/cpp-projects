#include "Person.hpp"

    int Person::ID = 0;
    Person::Person(std::string firstName, std::string lastName, int age, char gender){
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->gender = gender;
        ID++;
    }