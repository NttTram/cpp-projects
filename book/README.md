# Bookstore Management System

## Planning


## Progress / Thoughts
- Research the difference between Abstract class and pure virtual functions to use. Cause Book class will take up space if we instantiate too many objects. 
- Abstract class type cannot be instantiated, but pointers and references to it can be generated. So technically, we're not taking up space while still referring to it.

- After more research, that idea is not good. Because abstract class is just a concept class that cannot be instantiated. So you can't set a class Book book1. 
- I've looked into virtual constructor but it's not possible in C++. Because you cannot override the base/parent class constructor and the virtual table in memory (for virtual functions/calls) is not available for constructor.
- All this is part of Polymorphism (an instance that take up many forms: person => father => husband => teacher, etc). It's the run time polymorphism involving virtual functions overriding.

- Pure virtual is when 'virtual void func() = 0;'
## Drafting Area



## Final Area