// Functions inside the class -: 



// // print all the details of a given objects. 

// #include<iostream>
// using namespace std;

// class Cricketer{ // user defined data type 
// public:
// // these are the data members of the class -:
//     string name;
//     int runs;

// // this is constructor -: 
//     Cricketer(string name,int runs){
//         this->name=name;
//         this->runs=runs;
//     }

// // this(print) is a function -: 
//     void print(int a){ // you can also write int a 
//         // cout<<name<<" "<<runs<<endl; // Rohit 15000
//         // OR -: wala IMP hai/ always write this keyword. 
//         cout<<this->name<<" "<<this->runs<<endl; // Rohit 15000
//         cout<<a<<endl; 
//     }
 
//     // another fun inside the class 
//     int avg(){
//         return runs/50;
//     }

//     // we can make many functions inside the class of diff. data types like int, void, float etc. 
//     // and for calling those fun.s take a obj name and apply (.) operator. ex-: c1.print(7);

// };

// int main(){
//     Cricketer c1("Rohit",15000);
//     // cout<<c1.name<<" "<<c1.runs<<endl; // Rohit 15000
//     // c1.print(); // Rohit 15000
//     c1.print(7); // 7

//     cout<<c1.avg()<<endl; // 300
// }




// Object Pointer -: IMP Topic -: 

// data type of pointer is (int*).


// // Basic Pointers -: (*) -> dereference operator.
// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     cout<<&x<<endl; // address of x variable -> &x
//     int* p=&x; // pointer is used to store address of the variable. int* p
//     cout<<p<<endl;
//     cout<<*p<<endl; // 4
//     // modifie value of x -: by using pointer 
//     *p=8;
//     cout<<*p<<endl; // 8
// } 

// // 0x61ff08
// // 0x61ff08
// // 4
// // 8




// // Pointers in obj.s. -: 

// #include<iostream>
// using namespace std;

// class Cricketer{ 
// public:
//     string name;
//     int runs;

//     Cricketer(string name,int runs){
//         this->name=name;
//         this->runs=runs;
//     }

//     void print(){ 
//         cout<<this->name<<" "<<this->runs<<endl; 
//     }
 

// };

// int main(){
//     Cricketer c1("Rohit",15000);
//     Cricketer c2("Virat",10000);

// //    // interger pointer -: 
// //    int a=5;
// //    int *p1=&a; // integer ka pointer 

// //    // obj. pointer -: 
//    Cricketer* p1=&c1;
// //    // normal print using obj. c1
// //    cout<<c1.runs<<endl; // 15000
// //    // print runs using pointer -> is it possible. -> YES 
// //    cout<<(*p1).runs<<endl; // 15000


//     cout<<(*p1).runs<<endl; // 15000
//     // modifie runs -: by using pointers  
//     (*p1).runs=200000;



//     cout<<(*p1).runs<<endl; // 200000
//     // OR -: both are same -> (*p1). == p1->
//     cout<<p1->runs<<endl; // 200000


// }





#include<iostream>
using namespace std;

class Cricketer{ 
public:
    string name;
    int runs;

    Cricketer(string name,int runs){
        this->name=name;
        this->runs=runs;
    }
};


//     void change(Cricketer c){
//         c.runs=3000;
//     }
// not changed -> becoz it is pass by value.
// // 15000
// // 15000


//     void change(Cricketer &c){
//         c.runs=3000;
//     }
// // value changed -> becoz it is pass by reference (&). 
// // 15000
// // 3000


// value changed by using pointers -: 
void change(Cricketer *c){

    // (*c).runs=5000; // use dereference operator ( * ) to change the value 
    // OR -: use (->) arrow symbol -> IMP -: for change the value 
    c->runs=5000;

    // i.e. -> (*c).runs == c->runs

}

// value changed by using pointers 
// 15000
// 5000

int main(){

    Cricketer c1("Rohit",15000);
    // OR -: 
    Cricketer* c2=new Cricketer("Virat",10000);


    // cout<<c1.runs<<endl; 
    // change(c1);
    // cout<<c1.runs<<endl;


    // value changed by using pointers -: 
    cout<<c1.runs<<endl; 
    change(&c1);
    cout<<c1.runs<<endl;

    // print details of c2 obj.s. using pointers 
    cout<<(*c2).runs<<endl;
    cout<<(*c2).name<<endl;
    // OR -: 
    cout<<c2->name<<" "<<c2->runs<<endl;

    // 10000
    // Virat
    // Virat 10000
}





// // Dynamic allocation -: 


// #include<iostream>
// using namespace std;
// int main(){

//     // normal -: memory compile time me allocate hoti hai 
//     int x=4;
//     cout<<&x<<endl; 
//     int* p=&x; 
//     cout<<p<<endl;
//     cout<<*p<<endl;


//     // Dynamic allocation -: runtime me memory allocation hota hai 
//     int* ptr=new int(5675); // esme runtime me memory allocate hoti hai 
//     cout<<*ptr<<endl;
// }

// // 0x61ff04
// // 0x61ff04
// // 4
// // 5675