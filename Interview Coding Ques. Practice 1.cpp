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


// Date - 29-12-2024, Time - 12:30 PM




    

// Important OOPs Related Questions And Their Code. 
    
// Summary of OOP Principles -: These concepts demonstrate core OOP principles:

1. Explain the four pillars of OOP and provide examples in C++.

// Abstraction: Hiding implementation details, Hiding complexities and showing only essential features.
// Encapsulation: Bundling data and methods together, hiding implementation details.
// Inheritance: Code reuse and hierarchical relationships, Deriving new classes from existing ones.
// Polymorphism: One interface, multiple implementations (e.g., function overloading and overridiExample (Inheritance and Polymorphism):


Example (Inheritance and Polymorphism) -: 

#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() { 
        cout << "Base class\n"; 
    } // Polymorphism
};
class Derived : public Base {
public:
    void display() override { 
        cout << "Derived class\n";
    }
};
int main() {
    Base* obj = new Derived(); // Polymorphism
    obj->display(); // Outputs: Derived class
    delete obj;
}



2. What is the difference between virtual and pure virtual functions in C++?
Virtual Function: Allows runtime polymorphism; provides a base implementation.
Pure Virtual Function: Forces derived classes to provide their own implementation. Declared as = 0.



#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() { 
        cout << "Base class\n"; 
    } // Virtual Function
    virtual void pureShow() = 0; // Pure Virtual Function
};
class Derived : public Base {
public:
    void show() override { 
        cout << "Derived class\n"; 
    }
    void pureShow() override { 
        cout << "Pure Virtual Function in Derived\n"; 
    }
};
int main() {
    Derived obj;
    obj.show();
    obj.pureShow();
}




3. What is the difference between deep copy and shallow copy in C++?
Shallow Copy: Copies only the memory address; both objects share the same memory.
Deep Copy: Allocates new memory and copies actual data.


#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    // Deep Copy Constructor
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    void display() { 
        cout << str << endl; 
    }
    ~String() { 
        delete[] str; 
    }
};
int main() {
    String s1("Hello");
    String s2 = s1; // Deep Copy
    s2.display(); // Outputs: Hello
}



