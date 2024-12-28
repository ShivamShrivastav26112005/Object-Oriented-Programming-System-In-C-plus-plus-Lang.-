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




// 4. Encapsulation -: 
// Definition: Encapsulation is the process of bundling data (variables) and methods that operate on the data into a 
// single unit (class), while restricting direct access to some of the object’s components.

// Key Features:
// Access modifiers (private, public, protected) control access to class members.
// Provides getter and setter methods for controlled access.
// Enhances security and data integrity.


    
4. Create and Use a Class with Encapsulation -: 


#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int id;

public:
    void setName(string empName) {
        name = empName;
    }
    void setId(int empId) {
        id = empId;
    }
    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee emp;
    emp.setName("John Doe");
    emp.setId(101);
    emp.display();
}



// 5. Operator Overloading -: 
// Definition: Operator overloading allows defining or modifying the behaviorof operators (e.g., +, -, *) for user-defined data types.

// Key Features:
// Adds custom behavior for operators to work with objects.
// Syntax remains intuitive (e.g., obj1 + obj2).
// Does not change the original meaning of the operator.



5. Operator Overloading Example -: 

#include <iostream>
using namespace std;
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2; // Using overloaded operator
    c3.display();
}


// Summary of OOP Principles -: These concepts demonstrate core OOP principles:

// Abstraction: Hiding implementation details (e.g., encapsulation and inheritance).
// Encapsulation: Restricting access to data.
// Inheritance: Code reuse and hierarchical relationships.
// Polymorphism: Flexibility and dynamic behavior.

Date - 29-12-2024, Time - 12:30 PM
