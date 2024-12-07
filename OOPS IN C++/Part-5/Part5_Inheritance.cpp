// Inheritance -: 

// Single Inheritance -: 



// #include<iostream>
// using namespace std;

// class Scooty{ // parent class 
// public:
//     int topspeed;
//     float mileage;
// };

// // : -> means extend
// // Bike extends all the property of the Scooty class and Bike have their own data members 

// // Bike (:) extends Scooty 
// class Bike : public Scooty{ // derived class / child class 
// public:
//     int gears;
// };

// int main(){

//     Bike b1;
//     b1.topspeed=100;
//     b1.mileage=12.5;
//     b1.gears=6;

// }





// // 1-: Single inheritance -: 
// // Vehicle class -: 

// // one parent multiple childs -: 

// #include<iostream>
// using namespace std; 

// class Vehicle{ // parent class 
// public:
//     int topspeed;
//     float mileage;
//     string fuel;
// };

// class Car : public Vehicle{ // child class / derived class 
// public:
//     bool sunroof;

// };

// class Bike : public Vehicle{
// public:

// };

// class Truct : public Vehicle{
// public:

// };

// int main(){
//     Bike b1;
//     b1.topspeed=100;
//     b1.mileage=12.5;
//     b1.fuel="45 leter";
//     cout<<b1.fuel<<endl;
// }





// // 2-: Multilevel Inheritance -:  

// #include<iostream>
// using namespace std; 

// class Vehicle{ // parent class 
// public:
//     int topspeed;
//     float mileage;
//     string fuel;
// };

// class TwoWheeler : public Vehicle{ // child class / derived class 
// public:

// };

// class FourWheeler : public Vehicle{
// public:

// };



// class Bike : public TwoWheeler{ // grand child class / grand derived class 
// public:

// };

// class Scooty : public TwoWheeler{
// public:

// };

// int main(){
//     Bike b1;
//     b1.topspeed=100;
//     b1.mileage=12.5;
//     b1.fuel="45 leter";
//     cout<<b1.fuel<<endl;
// }




// // 3-: Mutltiple Inheritance -: 


// #include<iostream>
// using namespace std; 

// class Cricketer{ 
// public:
//     int runs;
//     int wickets;
//     string average;
// };

// class Engineer { 
// public: 
//     int experience;
//     string domain; 
// };

// class Shivam : public Cricketer, Engineer{ // Multiple inheritance 
// public:
//     string name;

// };

// int main(){
  

// }


// public access modifier -> ko hm khi bhi access kar skte hai either outside the class or derived or within the class 
// protected access modifier -> ko access hm derived class and within class me kar sakte hai  
// private access modifier -> ko hm only within the class hi access kar sakte hai aur khi nhi 



// Polymorphism (Different Form) -: one name but different form. / several form of the single things 
// compile and run time -: 

// ex-> one person but different forms like friend, mother/father, brother/sister, son/daugther etc. 


// 1-: Compile Time Polymorphism -: using function overloading.


// *** What is Compile Time Polymorphism and Run Time Polymorphism *** -: 

// What is Compile Time Errors -: is a syntactically errors like you miss semicolon (;), you can write Int instead of int. 
// What is Compile Time Errors -: it picked when you run the code not picked at compile time ex-> idx out of bound, -ve idx. -> it gives run time errors 





// // 1-: Constructor Overloading -: 
// // We make a default const. then make a multiple parameterized const. means
// // -> same fun/method name with diff. data types or diff. order. so this is constru. overloading.


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

//     // constru. with 2 parameters but order is diff. like -
//     // in this const. first string receive ho rha hai then float 
//     Student(string s, float p){
//         college=s;
//         percent=p;
//     }

//     // constru. with 2 parameters but these constr. is diff from the above constr. (order is diff.)
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

// int main(){

//     Student s1("Shivam",19,9.5,95.3,"GU"); 
//     Student s2("Aman","NIU",85.9);
//     Student s3("Piyush","SU",89.9);

// }



// // 2-: Function Overloading -: same fun. name with diff. parameter. 
// // Polymorphism -> one name but diff. forms. 


// // ex. of both Function Overloading and Polymorphism -: 
// // IMP -:

// // ex-: sum() fun. 


// #include<iostream>
// using namespace std;

// class Loading{
// public:

//     // same name with diff. parameters. 
//     void sum(int a, int b){
//         cout<<a+b<<endl;
//     }

//     void sum(int a, int b, int c){
//         cout<<a+b+c<<endl;
//     }

//     void sum(string a, string b){
//         cout<<a+b<<endl;
//     }

// };

// int main(){
//     Loading a;
//     a.sum(2,3);
//     a.sum(2,3,4);
//     a.sum("Shivam","Shrivastav");
// }



// // 5
// // 9
// // ShivamShrivastav













// 3-: Operator Overloading -:  

// ex-> cout<<3+8<<endl; R-> 11 (add 2 integers)
// string a ="Shivam";
// string b ="Shrivastav";
// cout<<a+b<<endl; R-> ShivamShrivastav (add 2 strings)

// here, '+' is an operator which performs differently based on operands. 





// #include<iostream>
// using namespace std;

// class Fraction{
// public:
//     int num;
//     int deno;

//     Fraction(int num, int deno){
//         this->num=num;
//         this->deno=deno;
//     }

//     void display(){
//         cout<<num<<" / "<<deno<<endl;
//     }

//     // fun. for add two Fractions and return type is Fraction -: 
//     Fraction add(Fraction f){
//         int newNum=this->num * f.deno + this->deno * f.num;
//         int newDeno=this->deno * f.deno;
//         Fraction ans(newNum,newDeno);
//         return ans;
//     }


//     // OR -: use -> "operator+()" as a fun. name then it works, it directly add two fractions -> Fraction f4=f1+f2;


//     Fraction operator+(Fraction f){
//         int newNum=this->num * f.deno + this->deno * f.num;
//         int newDeno=this->deno * f.deno;
//         Fraction ans(newNum,newDeno);
//         return ans;
//     }


//     Fraction operator-(Fraction f){
//         int newNum=this->num * f.deno - this->deno * f.num;
//         int newDeno=this->deno * f.deno;
//         Fraction ans(newNum,newDeno);
//         return ans;
//     }

//     Fraction operator*(Fraction f){
//         int newNum=this->num * f.num;
//         int newDeno=this->deno * f.deno;
//         Fraction ans(newNum,newDeno);
//         return ans;
//     }

// };
// int main(){
//     Fraction f1(1,2);
//     Fraction f2(1,3);
//     f1.display();
//     f2.display();

//     // add two fractions

//     // add fraction f2 to f1 and store in f3. 
//     Fraction f3=f1.add(f2);
//     f3.display();

//     // OR -: using operator overloading function -:  
//     Fraction f4=f1+f2; // f1 me f2 add kar do, f1 ko call lga hai 
//     f4.display();

//     Fraction f5=f1-f2; // f1 me f2 add kar do, f1 ko call lga hai 
//     f5.display();
// }


// // 1 / 2
// // 1 / 3
// // 5 / 6
// // 5 / 6
// // 1 / 6


// // Fraction addition -> 
// // ex-: f1=a/b, f2=c/d 
// // f1+f2 = a/b+c/d = ad+bc/bd 



// #include<iostream>
// using namespace std;

// class College{
// public:
//     string name;
//     int area;
//     string location;
//     int no_of_stud;

//     College(string name, int area, string location, int no_of_stud){
//         this->name=name;
//         this->area=area;
//         this->location=location;
//         this->no_of_stud=no_of_stud;
//     }

//     College(string name, string location, int area, int no_of_stud){
//         this->name=name;
//         this->area=area;
//         this->location=location;
//         this->no_of_stud=no_of_stud;
//     }

//     College(int area, int no_of_stud, string name, string location){
//         this->name=name;
//         this->area=area;
//         this->location=location;
//         this->no_of_stud=no_of_stud;
//     }

//     void display(){
//         cout<<name<<" "<<area<<" "<<location<<" "<<no_of_stud<<endl;
//     }

// };
// int main(){
//     College c("DU","Greater Noida",5200, 35000);
//     c.display();

//     College c2(540000, 65000, "GU", "Noida");
//     c2.display();
// }

// // DU 5200 Greater Noida 35000
// // GU 540000 Noida 65000





// Virtual Function And Overriding -:

// Run Time Polymorphism -: 


// fun. overloading -: same name ke multiple fun.s but type/arguments of parameters is diiff.
// one name multiple works , one name many forms. 


#include<iostream>
using namespace std;

class Scooty{ // parent class 
public:
    float mileage;

    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

private:
    int bootspace;
};

class Bike : public Scooty{ // child class 
public:
    int gears;

    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }

};

int main(){

//    // this is static allocation -:  

//     Bike b;
//     b.sound();
//     Scooty s;
//     s.sound();

// // Dhroom Dhroom
// // Vroom Vroom


        // OR -:


//    // pointer allocation -: 

    // Bike *b=new Bike(); // obj. ka pointer 
    // b->sound();
    // // when i am making pointer then we can access anything using (->) arrow operator -: 

    // Scooty *s=new Scooty(); // obj. ka pointer 
    // s->sound();
// Dhroom Dhroom
// Vroom Vroom

    // // parent class ka ek obj. pointer bna ke child class ke add ko store kar sakte hai 
    // Scooty *s=new Bike(); // ye scooty ka pointer hai -> Scooty *s
    // // scooty ke pointer se bike ki chijo ko store kar rha hai scooty ke hi address me 
    // s->sound();


    // Dhroom Dhroom
    // Vroom Vroom

    // if you want to print "Dhroom Dhroom" then use virtual keyword before function sound()

    Scooty *s=new Bike(); 
    s->sound();

    // Dhroom Dhroom -> when you write virtual before fun. 

    // Vroom Vroom -> when you not write virtual before fun. 
    
}