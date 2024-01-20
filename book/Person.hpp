#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
//abstract base class
class Person;
class Person{
    public:
        Person();
        ~Person();

        static int ID;
        Person(std::string firstName, std::string lastName, int age, char gender);
        std::string firstName;
        std::string lastName;
        int age;
        char gender;

        virtual void printDetail() = 0;

};

#endif