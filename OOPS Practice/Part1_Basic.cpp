// OOPS -> Object Oriented Programming System -: 
// now i am starting real life programming. 

// What is OOP ? 
// Object Oriented Programming is a methodology or paradigm to design
// a program using classes and objects. 

// OOPs -: programming karne ka method hai jisme hm objects ka use karenge 

// Two types -: programming 
// 1-: Procedural programming -: main focus on "procedure" -> ki hmara program jo kaam karna hai 
// use effectively kar pa rha h, focus on efficiency, performance, how much program is fast (program kitna fast hai), accuracy -> kitna accurate ans de rha h
// i am using Procedural programming, when we want to write some specific code 

// 2-: Object Oriented Programming -: but when we want to design a large application like making a large web app, mobile app or software(set of rules, actions, programs to perform some specific tasks).
// so that those code is easily readable becoz at that code thousands of lines is written, thousands of functions is written 
// different function for different purpose 

// main focus on scalability -> means handle large no. of users like 1 Million, add new features without changing the previous efficient code 


// In OOPs, mainly i am using classes and objects 

// Main concepts in OOPS -: 

// 1. Data Abstraction -> hides un-necessary/crucial information, show only essential info.  
// ex-: icloud -> you can seen/read your info. like attendence, marks but you can't mark present/edit/write anything 
// backend is not showed, actual code is not showed, hide actual code. 
// Imp. reason of data abstraction -: Security, customer experience, 


// 2. Data Encapsulation -> encapsulate multiple things into a single unit 
// ex. using class -: 
// class -> class is a user defined data type. 
// It is used to store values of different data types like it can store arrays, characters, intergers, boolean values etc. at a single place.
// and by making a constructor, i am accessing all the values. 
// int, float, char, double, bool -> it is a default data types 
// int -> stores integers/no.s, char -> stores characters/ascii values, string -> stores set of char.s
// like map data structure stores pairs(2 values) (<int,int>), (<char,int>), linked list data structure store nodes 
// like class -> class is a user defined data type. hm class me different-2 data structures,values of diff-2 datatypes ko add kar skte hai 

// ex-: stores values of different data types in a single place 
// class Player{
//     int health; // store integers 
//     int score[100]; // store arrays of size 100
//     string name; // store strings 
//     bool live; // store boolean also store many more data types 
// };
// here, we can encapsulate all the data and put it into a single unit (class)


// 3. Inheritance -> Inherit things from different class. 
// ex-: child class inherits property and characteristics of parent class and add some new things/features in it. 

// 4. Polymorphism -> one name but different forms like we make 1st sum() fun. and send 2 arguments/parameters of floating type 
// and then make 2nd sum() fun and send 3 parameters of integer type and again make a 3rd sum9 fun and send 2 parameters of string type 
// and add all the things 

// Polymorphism -> many forms, we achieve different functionality from the similar code
// IMP -> two types -: overloading, overriding 



// What are Classes ? 
// encapsulate the data and put into the class 
// class is a user-defined data type 
// class is a blue-print(structure)
// class ki koi size nhi hoti hai, jb hm class ki variable banate hai to usse hm object kahte hai 

// ex-: class is a user defined data type 
// class Player{ // Here, Player is a user defined data type 
//     int health;
//     int score;
//     string name;
// };

// What are Objects ?
// Object is an instance(perchhai) of the class. 

// ex-: 
// class Player{
//     int health;
//     int score;
//     string name;
// };
// Player shivam;

// shivam is a object

// overall ex-: class and object -: 
// class ke ander hm kuch bhi define nhi kar skte class is a blueprint 
// jb class implement hota hai to uska object bnta hai 


// #include<iostream>
// using namespace std;
// class Player{ // class-> blueprint, Player -> user defined datatype 
// public: 
// // these are called data members -: 
//     int health; // integer datatype 
//     int score; // integer datatype 
//     string name; // string datatype 
// };
// int main(){
//     // we can make many obj.s -: 

//     // this is 1st obj. 
//     Player shivam; // we make obj. shivam
//     // by using (.) symbol i am accessing all the values/datatypes of Player class.
    
//     // set values of shivam object -: setter
//     shivam.health=100;
//     shivam.score=95;
//     shivam.name="Shivam";

//     // printing -: getter
//     cout<<shivam.health<<endl;
//     cout<<shivam.score<<endl;
//     cout<<shivam.name<<endl;

//     // this is 2nd obj. -: 
//     Player aman;
//     // set values -: 
//     aman.health=98;
//     aman.name="Aman";
//     aman.score=89;

//     // get values -: 
//     cout<<aman.health<<endl;
//     cout<<aman.score<<endl;
//     cout<<aman.name<<endl;

// }
// // 98
// // 89
// // Aman




// OOPs is used for real-world programming.

// access modifiers -: public, private, protected 
// i am set data members in the class as public, private or protected 
// we study "protected" while studing inheritance 




// Array approach v/s class approach -: 
// i am using classes more 


// class variables -:
// declaration, initialization and accessing(public,private,protected) -: 

// 1-: data members -> all the variables inside the class are called data members
// also call variables, class variables, data members.

// 2-: member functions -> all the functions inside the class are called member functions 




// // ex-: 1

// #include<iostream>
// using namespace std;

// class is a user defined data type 
// class Player{ // Here, Player is a user defined data type 
// public: 
//     // these are data members -> variables inside the class is called D.M.
//     int score;
//     int health;
//     string name;

//     // these are member functions -> functions inside the class is called M.F.
//     void showHealth(){
//         cout<<"Health is : "<<health;
//     }

//     void showScore(){
//         cout<<"Score is : "<<score;
//     }

// };

// int main(){
//     Player shivam; // class name-> Player, object name-> shivam 

//     // set values -:
//     // ***** we can call members (either data members or member functions) using (.) symbol. *****
//     // access data members -: using (.) symbol -: 
//     shivam.name="Shivam";
//     shivam.health=99;
//     shivam.score=97;

//     // get values -:
//     // access member functions -: using (.) symbol -:
//     shivam.showHealth();
//     cout<<endl;
//     shivam.showScore();

// }

// // Health is : 99
// // Score is : 97


// ex-2 -: Make calculator using class and perform some ops. on two no.s (+,-,*,/).

// we can make many more classes inside single code -: 
// we can make many more data members inside the class 
// we can make many more member functions inside the class 




// #include<iostream>
// using namespace std;

// class Calculator{
// public:
//     int a;
//     int b;

//     void sum(){
//         cout<<a+b<<endl;
//     }

//     void diff(){
//         cout<<a-b<<endl;
//     }

//     int multi(){
//         return a*b;
//     }

//     void div(){
//         cout<<a/b<<endl;
//     }

// };
// int main(){
//     Calculator c;
//     c.a=20;
//     c.b=10;
//     c.sum();
//     c.diff();
//     cout<<c.multi()<<endl;
//     c.div();
// }

// 30
// 10
// 200
// 2






// // // // Naming - what terms we use -: 

// #include<iostream>
// using namespace std;

// // we make a class named Calculator -:

// class is a user defined data type 
// class Calculator{ // Here, Calculator is a user defined data type 
// public: // access modifier -: so that obj. access all the data members 
    
//     // these are data members -:

//     // declaration -: 
//     int a;
//     int b;
//     // declaration with initialization(means some values assign karna) -:
//     int c=10;

//     // these are member functions -:
//     void sum(){
//         cout<<a+b+c<<endl;
//     }

//     void diff(){
//         cout<<a-b<<endl;
//     }

//     int multi(){
//         return a*b;
//     }

//     void div(){
//         cout<<a/b<<endl;
//     }

// };

// // this is main function -> excution of the code is starts from the main fun. 
// int main(){

//     // class name -> Calculator, object name -> c 
//     Calculator c; 
//     // set the values of the object and access data members of the class using (.) dot symbol 
//     c.a=20;
//     c.b=10;

//     // call the member functions and access member functions from the class using (.) dot symbol.
//     c.sum();
//     c.diff();
//     cout<<c.multi()<<endl;
//     c.div();

// }


// // 40
// // 10
// // 200
// // 2









// // VVIMP -: 
// // this is only written in all the online coding platforms like leetcode -: 
// // we have to given a class in online coding platforms and we have to complete those class 

// // Ques -: make a calculator. OR make a calculator and implement addition,subtraction,multiplication and division operation.
// // we have to given like this and we have to complete all the fun.s. 
// class Calculator{ 
//     public: 

// };

// class Calculator{ 
// public: // access modifier -: so that obj. access all the data members 
//     // these are data members -:
//     int a;
//     int b;

//     // these are member functions -:
//     void sum(){
//         cout<<a+b<<endl;
//     }

//     void diff(){
//         cout<<a-b<<endl;
//     }

//     int multi(){
//         return a*b;
//     }

//     void div(){
//         cout<<a/b<<endl;
//     }

// };




//                       IMP -:
// *********** Getters and Setters functions -: ***********

// // Standards in OOPS -: 
// 1-: when you make a class then you can put your class as abstracted 
// put all the things as private only functions are public.
// means all the data members are private and all the member functions is public, here use setter and getter.
// then setting the values of data members i am using "setter" and for getting the values of data members i am using "getter". 



// ex-: make data members is private and member functions is public always. 

#include<iostream>
using namespace std;

// class is a user defined data type 
class Player{ // Here, Player is a user defined data type 

    private:
    // data members -: is private. 
    int score;
    int health;

    public:
    // member functions -: is public. 

    // setter function -: to set the values of data members -:
    void setScore(int s){
        score=s;
    }

    void setHealth(int h){
        health=h;
    }

    // getter function -: to get the values of data members -:

    // int getScore(){
    //     return score;
    // }

    // int getHealth(){
    //     return health;
    // }

    // OR -:

    void getScore(){
        cout<<score<<endl;
    }

    void getHealth(){
        cout<<health<<endl;
    }


};
int main(){
    Player shivam; // obj. -> shivam 

    // shivam.score=90; // this gives an error, we can't set the values becoz score is private
    // shivam.health=100; // we can't access
    // so, we make "setter" fun. to access the data members 

    // setter fun. is used -: 
    shivam.setScore(90);
    shivam.setHealth(100);

    // cout<<shivam.score<<endl; // we can't print the score becoz score is private data members 
    // cout<<shivam.health<<endl; // or health is a private data members 
    // so, we make "getter" fun. to access and print 

    // getter fun. is used -: 
    // cout<<shivam.getScore()<<endl;
    // cout<<shivam.getHealth();

    // OR -: 

    shivam.getScore();
    shivam.getHealth();

}

// 90
// 100