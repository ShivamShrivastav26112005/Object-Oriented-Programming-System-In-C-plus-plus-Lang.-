// OOPS IN C++ -:



// IMP -: 
// check anything either it is pass by value or pass by reference 
// change something from those contained, print before changing and print after changing
// if contained is changed then it is pass by reference (&) otherwise pass by value.
// make 3 fun.s 1-> display(), 2-> change(), 3-> display() and checked. 




// oops is used in linked list, when you implement stacks and queues,
// binary trees, binary search trees, priority queues(heaps), maps and graphs.

// checklist -: 

// 1-: class as user defined data type, classes and objects
// 2-: Constructors (parameterised , default , copy)
// 3-: class functions (create fraction class)
// 4-: passing objects to functions
// 5-: object pointer (-> thing), dynamic allocation
// 6-: this keyword
// 7-: user defined data structure (create a vector), vector -> it is basically a dynamic array and the size of vector is growing 2 times when vector is full. 
// 8-: access modifiers 



// 1-: User Defined Data Type -: 

// #include<iostream>
// using namespace std;
// // this is a particular student -> es stud. ke name, rno, gpa, and diff-diff things we store 
// class Student{ // Student is a new data type(user defined) 
// public: // access modifier
// // here we create any data type like int,float,char, also create an array etc.
//     string name;
//     int rno; 
//     float gpa;
// };
// int main(){
//     Student s; // declaration
//     // initialization by using (.) dot operator 
//     s.name="Shivam";
//     s.rno=56;
//     s.gpa=8.62;
// }


// #include<iostream>
// using namespace std;
// // normal class -> blueprint 
// class Student{  
// public: 
//     string name;
//     int rno; 
//     float gpa;
// };

// int main(){ 
//     // Student-> class which is data type and s1-> object 
//     Student s1; // declaration 
//     s1.name="Shivam"; // initialization 
//     s1.rno=56; 
//     // s1.gpa=9.4;

//     // input gpa -:
//     cin>>s1.gpa;


//     Student s2; 
//     s2.name="Ram"; // s2.name -> (.) -> dot operator 
//     s2.rno=46; 
//     s2.gpa=9.2;

//     // output -: 
//     cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;

//     cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
// }



// #include<iostream>
// using namespace std;
// class Car{
// public:
//     string name;
//     int price;
//     int seats;
//     string type;
// };
// int main(){
//     Car c1;
//     c1.name="Honda City";
//     c1.price=1500000;
//     c1.seats=5;
//     c1.type="Sedan";

//     Car c2;
//     c2.name="Maruti Swift";
//     c2.price=707000;
//     c2.seats=5;
//     c2.type="Hatchback"; // maens esme diggi nghi hoti

//     Car c3;
//     c3.name="Fortuner";
//     c3.price=3600000;
//     c3.seats=8;
//     c3.type="SUV";


//     // // print details of car c1.
//     // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl; // Honda City 1500000 5 Sedan

// // but this is not a right method to print the details
// // make a function and pass the objects to a function just like a display() fun. for printing array's ele.s 

//     // print details of all cars c1,c2 and c3-: 
//     cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl; 
//     cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
//     cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl; 

// // Honda City 1500000 5 Sedan
// // Maruti Swift 707000 5 Hatchback
// // Fortuner 3600000 8 SUV

// }




// // Passing objects to functions -: by default -> pass by value hota hai, apply -> (&) symbol -> se pass by reference ho jata hai 

// #include<iostream>
// using namespace std;
// class Car{
// public:
//     string name;
//     int price;
//     int seats;
// };

// void display(Car c){
//     cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
// }
// int main(){

//     // we make 3 objects -: c1,c2,c3.
//     Car c1;
//     c1.name="Maruti";
//     c1.price=700000;
//     c1.seats=5;

//     Car c2;
//     c2.name="Tata";
//     c2.price=7000000;
//     c2.seats=8;

//     Car c3;
//     c3.name="Auto";
//     c3.price=200000;
//     c3.seats=6;

//     // pass our objects to a function. -: c1,c2 and c3.
//     display(c1);
//     display(c2);
//     display(c3);

// // Maruti 700000 5
// // Tata 7000000 8
// // Auto 200000 6


// }



// // normally objects is "pass by value" to a function use (&) symbol to "pass by reference" to a function and change anythig a/t you 


// // now we check our object is pass by value or reference 
// // Passing objects to functions -: 

// #include<iostream>
// using namespace std;
// class Car{
// public:
//     string name;
//     int price;
//     int seats;
// };

// void display(Car c){
//     cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
// }

// // pass by value - : no change 
// void change(Car c){
//     c.name="Ram";
// }

// // pass by reference - : change 
// void convert(Car &c){
//     c.name="Fourtuner";
// }

// int main(){

//     Car c1;
//     c1.name="Maruti";
//     c1.price=500000;
//     c1.seats=5;

//     display(c1);
//     change(c1);
//     display(c1);

// // no change in name -: means object is "pass by value" not "reference" to a function.
// // Maruti 700000 5
// // Maruti 700000 5
   

//     Car c2;
//     c2.name="Tata";
//     c2.price=7000000;
//     c2.seats=8;

//     display(c2);
//     convert(c2);
//     display(c2);

// // change in name -> means object is pass by reference.
// // Tata 7000000 8
// // Fourtuner 7000000 8

// }


// " Student is a user defined data type which stores values of diff data types. " 

// classes and objects -: 

#include<iostream>
using namespace std;

// Student is a user defined data type like int, float, char etc. 
// int stores only integer values not any other value it can be store but class Student is store values of diff data types
// either it is int, float,char or array etc. 

class Student{
public:
    string name;
    int age;
    float cgpa;
    string college;
};

void display(Student s){
    cout<<s.name<<" "<<s.age<<" "<<s.cgpa<<" "<<s.college<<endl;
}

int main(){
    Student s1;
    s1.name="Shivam";
    s1.age=19;
    s1.cgpa=9.8;
    s1.college="GU";

    Student s2;
    s2.name="Shyam";
    s2.age=20;
    s2.cgpa=8.8;
    s2.college="SU";


    Student s3;
    s3.name="Aman";
    s3.age=21;
    s3.cgpa=8.7;
    s3.college="NIU";


    display(s1);

    display(s2);

    display(s3);

}

// Shivam 19 9.8 GU
// Shyam 20 8.8 SU
// Aman 21 8.7 NIU
