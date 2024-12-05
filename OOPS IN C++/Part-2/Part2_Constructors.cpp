// Constructors -: 
// Constructor is a function, Constructor is the same name as the class,
// Constructor does not have return type, by using/making Constructor i am initialising all the things
// at a time/ in one time. 






// // Q-> make a class car and object c1.

// #include<iostream>
// using namespace std;

// class Car{ // user defined data type 
// public:
//     string name;
//     int price;
//     int seats;
// };

// void display(Car c){
//     cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
// }
// int main(){
//     // declaration -: 
//     Car c1; // object c1 

//     // initialization -: me problem ho rhi hai jada line write karni hoo rhi hai 
//     // then i am using constructor -: 
//     c1.name="Tata";
//     c1.price=500000;
//     c1.seats=8;

//     display(c1); // Tata 500000 8

// }


// #include<iostream>
// using namespace std;

// class Student{
// public:
//     string name;
//     int age;
//     float cgpa;
//     string college;

//     // constructor -: parameterised constr. 
//     Student(string n, int a, float gpa, string clg){ // these 4 boxes is also diff. from the boxes of the s1 objects. 
//         name=n;
//         age=a;
//         cgpa=gpa;
//         college=clg;
//     }

// };

// void display(Student s){
//     cout<<s.name<<" "<<s.age<<" "<<s.cgpa<<" "<<s.college<<endl;
// }

// int main(){
//     // declaration with initialization -: 
//     // class-> Student, object-> s1 


//     // after writing Student s1 constr. is called and pass 4 parameter then one constr.
//     // is present inside my class with 4 parameter in right order first string then int then float and at last string.


//     Student s1("Shivam", 19, 9.1, "GU"); // these 4 boxes is diff. from the boxes of the constr. 
//     display(s1);

// }

// // Shivam 19 9.1 GU











// you can make constru. with one, two or three parameters. 

// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     // 3 attributes present 
//     string name;
//     int price;
//     int seats;

//     // constructor -:
//     Car(int p, string n, int s){ // parameterised constr. with parameters
//         name=n;
//         price=p;
//         seats=s;
//     }

//     // i am giveing two attributes. 
//     Car(int p, string n){ // parameterised constr.
//         name=n;
//         price=p;
//     }

//     // default constr. is present already -: either we make a constr. or not. 
//     Car(){ // default constr. with no parameter 

//     }

// };

// void display(Car c){
//     cout<<c.name<<" "<<c.seats<<" "<<c.price<<endl;
// }


// int main(){
    
//     // 1-> initialization with parameter 
//     Car c1(1500000,"Tata",8);
//     display(c1); // Tata 8 1500000


//     // 2-> normal initialization 
//     Car c2;
//     c2.name="Maruti";
//     c2.seats=4;
//     c2.price=500000;

//     // 3-> i am passing only 2 parameters also -: 
//     Car c3(1500000,"Tata"); // gives two parameter/arguments 
//     c3.seats=10;
//     c3.name="Override name tata"; // override name 
//     display(c3);

// // Tata 8 1500000
// // Tata 10 1500000


//     Car c4;
//     display(c4);
//     // -636386691 8923824 -> print garbage value


// }





//  // Multiple Constructors -: i am making constr. with 2,3,4 or any parameters. 

// #include<iostream>
// using namespace std;
// class Student{
// public:
//     string name;
//     int age;
//     float cgpa;
//     float percent;
//     string college;

//     Student(){ // default constru. 
    
//     }



//     // constru. with 2 parameters 
//     // in this const. first string receive ho rha hai then float 
//     Student(string s, float p){
//         college=s;
//         percent=p;
//     }

//     // constru. with 2 parameters but these constr. is diff from the above 2 parameters constr
//     // in this const. first float receive ho rha hai then string 
//     Student(float p,string s){
//         college=s;
//         percent=p;
//     }






//     // constru. with 3 parameters 
//     Student(string n, string s, float p){
//         name=n;
//         college=s;
//         percent=p;
//     }


//     // constructor-: 
//     // constru. with 5 parameters 
//     Student(string n, int a, float gpa, float p, string c){
//         name=n;
//         age=a;
//         cgpa=gpa;
//         percent=p;
//         college=c;
//     }



// };

// void display(Student s){
//     cout<<s.age<<" "<<s.cgpa<<" "<<s.college<<" "<<s.name<<" "<<s.percent<<endl;
// }

// void display2(Student s){
//     cout<<s.college<<" "<<s.name<<" "<<s.percent<<endl;
// }

// int main(){

//     Student s1("Shivam",19,9.5,95.3,"GU"); // create with the help of parameterised const. 
//     // display(s1); // 19 9.5 GU Shivam 95.3

// //     Student s2("Aman","NIU",85.9);
// //     display2(s2);

// //     Student s3("Piyush","SU",89.9);
// //     s3.age=21;
// //     s3.cgpa=9.5;
// //     display2(s3);
// //     display(s3);


// // // output -: 
// // // 19 9.5 GU Shivam 95.3
// // // NIU Aman 85.9
// // // SU Piyush 89.9
// // // 21 9.5 SU Piyush 89.9



// //     Student s4; // create with the help of default const. 
// //     s4.name="Ram";
// //     s4.cgpa=8.8;
// //     s4.percent=85.9;
// //     s4.age=20;
// //     s4.college="DU";
// //     display(s4); // 20 8.8 DU Ram 85.9



// //     Student s6("DU",99.7); // constru. with 2 parameters 
// //     cout<<s6.college<<" "<<s6.percent<<endl; // DU 99.7

// //     Student s7(96.7,"NU"); // constru. with 2 parameters but it is diff. from the above constr. 
// //     cout<<s7.college<<" "<<s7.percent<<endl; // NU 96.7


//     // ****** copy constr. ****** -:
//     // insert all the details of s1 obj. to s10 obj. 

//     // 1-> synatx -: 
//     Student s10=s1;
//     display(s10);
//     // 19 9.5 GU Shivam 95.3
//     // 19 9.5 GU Shivam 95.3

//     // ---> now check it is "deep copy" or "shallow copy". 

//     // by change something in the data.
//     s10.name="Shiva";
//     display(s10);
//     // 19 9.5 GU Shivam 95.3
//     // 19 9.5 GU Shiva 95.3 -> yes it is changed -> "deep copy"


//     // shallow copy -> another name of the same object. like obj name -> s10 and pass the obj. s10 to a fun. and fun. receive only (s10) then it is 
//     // deep copy and if fun. receive (&s10) then it is shallow copy. 
    

//     // ****** copy constr. ****** -:
//     // 2-> synatx -: 
//     Student s11(s1);
//     display(s11); // copy constr. 
//     // 19 9.5 GU Shivam 95.3 -> all data of s1 obj. is inserted in s11 obj. 


//     s11.name="Ram";
//     display(s11);
//     // 19 9.5 GU Ram 95.3 -> name is not changed in s1 obj. -> it is also a "deep copy" 
// }





// // "This keyword" -: is used when constr.'s variable name is same as class variable then we use this keyword 


#include<iostream>
using namespace std;

class Cricketer{ // user defined data type 
public:
// these are the data members of the class -:
    string name;
    int runs;
// this is constructor -: 
    Cricketer(string name,int runs){
        this->name=name;
        this->runs=runs;
    }

};

int main(){
    Cricketer c1("Rohit",15000);
    cout<<c1.name<<" "<<c1.runs<<endl; // Rohit 15000
}
