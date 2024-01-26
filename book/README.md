# Bookstore Management System

## Planning


## Progress / Thoughts

16/01/20224
- Research the difference between Abstract class and pure virtual functions to use. Cause Book class will take up space if we instantiate too many objects. 
- Abstract class type cannot be instantiated, but pointers and references to it can be generated. So technically, we're not taking up space while still referring to it.

- After more research, that idea is not good. Because abstract class is just a concept class that cannot be instantiated. So you can't set a class Book book1. 
- I've looked into virtual constructor but it's not possible in C++. Because you cannot override the base/parent class constructor and the virtual table in memory (for virtual functions/calls) is not available for constructor.
- All this is part of Polymorphism (an instance that take up many forms: person => father => husband => teacher, etc). It's the run time polymorphism involving virtual functions overriding.

- Pure virtual is when 'virtual void func() = 0;'

17/01/2024
- I'm practicing using map. Looked at vector vs map for my inventory but for larger amount of elements map would be faster in finding elements. Map is also more useful for key lookup to easily find books by ID.

- When using map one value (first) is a key data type and the rest be data type. So when you have 3 variables one is the key type (use to lookup) and the other 2 elements should use std::pair. Then the syntax to pair with that is std::make_pair(e1, e2);

- Cause map stores a key-value pair. Best way is to nest: using std::pair or another std::map nested.

18/01/2024
- I looked into data structure for this project and yeah map is still better than vector but maybe after I can implement linked list data structure instead for learning purpose.
- Also looking into UML Diagram to layout my database to later include SQL to store data.

24/01/2024
- I've been following my UML Diagram which helps a lot 
- But I need to be more patient by testing my classes before creating more methods
- Will be looking into unit testing
- So far it's vvery expanded So i need to simplify it to get it working and work on the main interface
- I've retouch on inheritance with Person and Owner class - The syntax.
- Ooooo I should look into API documentation as well to make it easier to use and remember the classes and methods


## Drafting Area



## Final Area