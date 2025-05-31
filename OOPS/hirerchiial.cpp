#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat is meowing." << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat();  // Inherited from Animal
    dog.bark(); // Specific to Dog

    cat.eat();  // Inherited from Animal
    cat.meow(); // Specific to Cat

    return 0;
}