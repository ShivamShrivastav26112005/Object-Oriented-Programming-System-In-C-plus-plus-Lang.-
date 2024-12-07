// User Defined Data Structures -: 
// Create your own vector -: 

// vector -> is basically an array which double its size when previous size of the array/vector is full 
// or (capacity and size of the vector is same) then vector double its size and copy paste its previous ele. in it and then add new ele.  


// inside vector there are two things are present 1-> size, 2-> capacity. 



// normal array -> size is fixed. 
// dynamic array -> size is not fixed, size can be vary. 
// vector is also a dynamic array -: 


// // *** make a dynamic array -: ***

// #include<iostream>
// using namespace std;
// int main(){
//     // create dynamic array -: 
//     int *arr=new int[5];
//     // insert values -: 
//     arr[0]=1;
//     arr[1]=2;
//     // print the values -: 
//     cout<<arr[0]<<endl; // 1
// }



// // // Create your own vector -: 

// #include<iostream>
// using namespace std;
// class Vector{
// public:

// // three data member -: 
//     int size;
//     int capacity;
//     int *arr; // pointer variable 

//     // constructor -: 
//     // these 3 above variable is initialised by using default constr. 
//     Vector(){
//         size=0;
//         capacity=1;
//         arr=new int[1]; // array with 1 size. -> dynamic array 
//         // int* pointer me ek size ke array ka address send kar diya -> arr=new int[1];
//     }

//     // push_back ele. to vector -: insert ele.s 
//     void push(int ele){
//         if(size==capacity){
//             // double the capacity 
//             capacity*=2;
//             // create a new array
//             int* arr2=new int[capacity];
//             // copy paste ele. of old array to new array 
//             for(int i=0; i<size; i++){
//                 arr2[i]=arr[i];
//             }
//             // now new array became old array 
//             arr=arr2; // i am sending the address of the arr2 to arr me. 
//         }
//         arr[size]=ele;
//         size++;
//     }

//     // print the vector's ele.
//     void print(){
//         for(int i=0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     // pop_back ele. from the vector -> remove ele.s 
//     void remove(){
//         if(size==0){
//             cout<<"Array is empty! "<<endl;
//         }
//         size--;
//     }

//     // find the vector's ele. 
//     int get(int idx){
//         if(size==0){
//             cout<<"Array is empty! "<<endl;
//             return -1;
//         }
//         if(idx<0 || idx>=size){
//             cout<<"Invalid idx"<<endl;
//             return -1;
//         }
//         return arr[idx];
//     }

// };
// int main(){
//     Vector v;
//     cout<<v.size<<" "<<v.capacity<<endl;
//     v.push(10);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;
//     v.push(15);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;
//     v.push(7);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;
//     cout<<v.get(10)<<endl;

//     v.remove();
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;

// }


// // 0 1
// // 10 
// // 1 1
// // 10 15 
// // 2 2
// // 10 15 7 
// // 3 4
// // Invalid idx
// // -1
// // 10 15
// // 2 4





// // // create our own vector with the help of user defined data structure -: 

// // // IMP -: capacity increased by double to its previous size. 
// // // capacity badhata hai double size se, apne pichhale size ke and then insert ele. 


// // #include<iostream>
// // using namespace std;

// // // user defined data structure -:
// // class Vector{
// // public:
// //     int size;
// //     int capacity;
// //     int* arr;

// //     // default constructor -: 
// //     Vector(){
// //         size=0;
// //         capacity=1;
// //         arr=new int[1]; // dynamic array 
// //     }

// //     // push ele. to a vetcor -: 
// //     void push(int ele){
// //         if(size==capacity){
// //             int *arr2=new int[capacity*=2];
// //             for(int i=0; i<size; i++){
// //                 arr2[i]=arr[i];
// //             }
// //             arr=arr2;
// //         }
// //         // else condition -: if size is not equal to capacity of the vector 
// //         arr[size]=ele;
// //         size++;
// //     }


// //     // print the vector's ele.
// //     void display(){
// //         for(int i=0; i<size; i++){
// //             cout<<arr[i]<<" "; // old vector is displayed always not new vector 
// //         }
// //         cout<<endl;
// //     }

// //     // find the vector's ele.
// //     int get(int idx){
// //         if(size==0){
// //             cout<<"Array is empty !"<<endl;
// //             return -1;
// //         }
// //         if(idx<0 || idx>=size){
// //             cout<<"Invalid index !"<<endl;
// //             return -1;
// //         }
// //         return arr[idx];
// //     } 

// //     // remove the ele. from the vector -:
// //     void remove(){
// //         if(size==0){
// //             cout<<"Array is empty !";
// //         }
// //         size--;
// //     }

// // };
// // int main(){
// //     Vector v; // class name is -> Vector, object name is -> v.
// //     v.push(10);
// //     v.push(20);
// //     cout<<v.size<<" "<<v.capacity<<endl;
// //     v.push(30);
// //     v.display();
// //     cout<<v.size<<" "<<v.capacity<<endl;
// //     v.remove();
// //     v.display();
// //     cout<<v.size<<" "<<v.capacity<<endl;
// // }





// #include<iostream>
// using namespace std;

// class Vector{

// public:

//     // public data member of the class -:
//     int size;
//     int capacity;
//     int* arr;

//     // default constructor -: 
//     Vector(){
//         size=0;
//         capacity=1;
//         arr=new int[1];
//     }

//     // public fun.s of the class -: 
// // ******* these are fun.s/methods inside the class ******* 

//     // push function -:
//     void push(int ele){
//         if(size==capacity){
//             int* arr2=new int[capacity*=2];
//             for(int i=0; i<size; i++){
//                 arr2[i]=arr[i];
//             }
//             arr=arr2;
//         }
//         arr[size]=ele;
//         size++;
//     }

//     // display function -: 
//     void display(){
//         for(int i=0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     // get function -:
//     int get(int idx){
//         if(size==0){
//             cout<<"Invalid idx ! "<<endl;
//             return -1;
//         }
//         if(idx<0 || idx>=size){
//             cout<<"Invalid idx ! "<<endl;
//             return -1;
//         }
//         return arr[idx];
//     }

//     // remove the ele. from the vector -: 
//     void remove(){
//         if(size==0){
//             cout<<"Invalid idx ! "<<endl;
//         }
//         size--;
//     }


// };
// int main(){
//     Vector v;
//     v.push(10);
//     v.push(20);
//     v.push(30);
//     v.push(40);
//     v.push(50);
//     v.push(60);
//     v.push(70);
//     v.display();
//     cout<<v.size<<" "<<v.capacity<<endl;
//     v.remove();
//     cout<<v.get(3)<<endl;
//     cout<<v.get(7)<<endl;
//     v.display();
//     cout<<v.size<<" "<<v.capacity<<endl;
// }



// // 10 20 30 40 50 60 70 
// // 7 8
// // 40
// // Invalid idx !
// // -1
// // 10 20 30 40 50 60
// // 6 8



// // Access Modifiers -: 3 types -> public, private, protected. 

// // setter -> set the things like marks, rollno etc.
// // getter -> is like print something, store, update etc.


// #include<iostream>
// using namespace std;
// class Student{

// public:
//     string name;
//     int rno;

//     // fun/method inside the class -: 
//     void display(){
//         cout<<name<<" "<<rno<<endl;
//     }

// // we can't changed. 
// private:
//     float marks;


// };

// int main(){
//     Student s1;
//     s1.rno=34;
//     s1.name="Shivam";

//     // cout<<s1.marks<<endl; // it is inaccessible -> i.e. not accessed -> give access modifier -> public: 
//     s1.display();

// }

// // IMP -> 
// // private access modifier -> we can't changed. 
// // private -: i am not use, print or change private members.






// Q-> we do not want the user to change a particular class member but 
// we want that user can "atleast print" it. -: 

// IMP -: 
// to print it -> i am using "getter()" fun. 
// make getter fun. inside the class and then you can access the private data member.




#include<iostream>
using namespace std;
class Student{

public:
    string name;
    int rno;

    Student(){

    }

    Student(string n, int r, float m){
        name=n;
        rno=r;
        marks=m;
    }

// print only marks then make a separte fun. named getmarks(). 
// getter fun. -: 
    float getmarks(){
        return marks;
    }


// now we can change the marks by using setter() fun.
// setter fun. -: 
void setmarks(float m){
    marks=m;
}


// i am access private data member within the class using "const". or by making fun/method inside the class -> getter fun().  
private: // i am using internally private data members using constr. 
    float marks;

};


int main(){

    Student s2("Aman",87,98.9); // constr. calling -: 

    // print marks -> private data member 
    cout<<s2.getmarks()<<endl; // we can access 

    // change the marks -: private data member 
    s2.setmarks(97.9);
    cout<<s2.getmarks()<<endl;

}

// 98.9
// 97.9




