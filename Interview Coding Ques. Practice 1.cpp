// 1. Singleton Design Pattern. 
// Definition: The Singleton pattern ensures a class has only one instance and provides a global point of access to it.

// Key Features -: 
// A private constructor prevents direct instantiation.
// A static method (getInstance) provides access to the single instance.
// A static variable holds the single instance of the class.



1. Implement a Singleton Design Pattern -: 

#include <iostream>
using namespace std;
class Singleton {
private:
    static Singleton* instance; // Static instance pointer
    Singleton() {} // Private constructor to prevent instantiation
public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }
    void showMessage() {
        cout<<"Singleton Instance Accessed!"<<endl;
    }
};

Singleton* Singleton::instance = nullptr; // Initialize static member
int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();
    return 0;
}


// 2. Inheritance -: 
// Definition: Inheritance allows a class (child/derived) to inherit the properties and behaviors of another class (parent/base).

// Key Features:
// Promotes code reuse by extending the functionality of the base class.
// Supports multiple types of inheritance (single, multilevel, multiple, etc.).
// Derived classes can override or extend base class methods.



2. Implement a Basic Inheritance Example -: 

#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Base Class Display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Class Display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;
    basePtr = &d;
    basePtr->display(); // Shows Base Class Display (No polymorphism)
    return 0;
}


// 3. Polymorphism -: 
// Definition: Polymorphism means "many forms" and allows objects to be treated as 
// instances of their base type, enabling behavior to be dynamically overridden.

// Key Features:
// Achieved using virtual functions in C++.
// Enables dynamic dispatch (method resolution at runtime).
// Base class pointers or references can call derived class methods.



3. Demonstrate Polymorphism Using Virtual Functions -: 

#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound(); // Dog barks (Polymorphism in action)
    delete animal;
    return 0;
}





