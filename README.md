# Object-Oriented-Programming-System-In-C++
OOPS Concept In C++. 

What is OOPS?
Object-Oriented Programming System (OOPS) is a programming paradigm based on the concept of objects. Objects represent real-world entities and are created using classes as blueprints. OOPS emphasizes organizing code in a way that models the behavior and attributes of real-world entities, making it modular, reusable, and easier to understand.

Key Principles of OOPS
Encapsulation:
Wrapping data (variables) and methods (functions) inside a class.
Access modifiers (public, private, protected) are used to control access.

Inheritance:
Enables one class (child) to inherit properties and behavior from another class (parent).
Promotes code reuse.

Polymorphism:
Allows the same function or operator to behave differently based on the context.
Two types:
Compile-time Polymorphism: Function overloading, operator overloading.
Runtime Polymorphism: Function overriding using virtual functions.

Abstraction:
Hiding implementation details while exposing only the necessary functionality.
Achieved using abstract classes or interfaces.


In this file, we will discuss about Core Concepts -: 

Class as a User-Defined Data Type:
Defined custom data types (Student, Car) to represent real-world entities.
Classes encapsulate multiple properties (e.g., name, age, cgpa in Student).

Objects:
Objects (s1, s2, c1, etc.) are instances of classes.
Each object holds its unique values for the class properties.

Access Modifiers:
The public keyword is used to make class properties accessible from outside the class.
Passing Objects to Functions:

Explored pass-by-value (no changes to the original object) and pass-by-reference (changes reflected in the original object).
Demonstrated using:
Display Function: display() (pass-by-value, for viewing properties).
Change Functions: change() (pass-by-value, no effect) and convert() (pass-by-reference, modifies the object).

Dynamic Allocation (not explicitly shown but alluded to as a concept in comments):
Mentioned concepts like dynamic allocation and this keyword.

Printing Object Details:
Replaced repetitive print statements with a function (display) to promote code reusability.
