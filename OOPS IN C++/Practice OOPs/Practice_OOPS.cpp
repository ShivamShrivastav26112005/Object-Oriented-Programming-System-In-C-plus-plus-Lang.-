// Make a class and object and display the all details of the class by making a fun.


// object is "pass by value" by "default" to a function -: 


// #include<iostream>
// using namespace std;
// class Person{
// public:
//     string name;
//     int age;
//     float cgpa;
//     string college;
//     int year;

//     // Making a constructor -:
//     Person(string name, int age, float cgpa, string college, int year){
//         this->name=name;
//         this->age=age;
//         this->cgpa=cgpa;
//         this->college=college;
//         this->year=year;
//     }

//     void display(){
//         cout<<name<<" , "<<college<<" , "<<age<<" , "<<year<<" , "<<cgpa<<endl;
//     }

// };


// // object is pass by value by default -: 
// void change(Person p){
//     p.name="Ram";
//     p.age=1000;
// }

// // pass by reference by using (&) symbol -: 
// void change2(Person& p){
//     p.name="Ram";
//     p.age=1000;
// }


// int main(){
//     Person p1("Shivam",19,9.45,"GU",2);
//     Person p2("Shiv",18,8.45,"SU",3);
//     Person p3("Shiva",20,8.9,"DU",4);

//     p1.display();
//     p2.display();
//     p3.display();

//     // after display the details i am checking either object is pass by value or pass by reference.
//     // to verify this i am making a separte function chnage(), where we can change some details of the 
//     // Person p1 object, we pass obj. to a fun. if details is changed 
//     // then it is pass by reference otherwise it is pass by value. 

//     change(p1);

//     p1.display();

//     change2(p1);

//     p1.display();

// }

// // Shivam , GU , 19 , 2 , 9.45
// // Shiv , SU , 18 , 3 , 8.45
// // Shiva , DU , 20 , 4 , 8.9
// // Shivam , GU , 19 , 2 , 9.45
// // Ram , GU , 1000 , 2 , 9.45





// // Multiple Constructors -: 1-> default constru, 2-> parameterized constru. with diff. parameters 
// // and diff. orders -:



// #include<iostream>
// using namespace std;
// class School{
// public:
//     string name;
//     int strength;
//     float area;
//     int field;

//     // s4 obj. is accessed by making a default constru. 
//     School(){

//     }

//     School(string name, int strength, float area, int field){
//         this->area=area;
//         this->field=field;
//         this->name=name;
//         this->strength=strength;
//     }

//     School(int strength, float area, string name,  int field){
//         this->area=area;
//         this->field=field;
//         this->name=name;
//         this->strength=strength;
//     }

//     void display(){
//         cout<<name<<","<<strength<<","<<area<<","<<field<<endl;
//     }


// };
// int main(){
//     School s1("Sarla",1500,5,2);
//     School s2("Aditya",2500,3,3);
//     School s3("Sumitra",2000,6,1);

//     // this s4 obj. is accessed by making a default constru. 
//     School s4;
//     s4.name="SMS";
//     s4.area=10;
//     s4.strength=8000;
//     s4.field=3;

//     s1.display();
//     s2.display();
//     s3.display();


//     s4.display();


//     // store all the details of the s4 obj. to s5 obj. and then print s5 obj.
//     School s5(s4);
//     s5.display();



//     School s6(2000,6,"GU",1);
//     cout<<s6.area<<","<<s6.field<<","<<s6.name<<","<<s6.strength<<endl;
    
    
//     // this is obj. pointer, which stores the add. of the object and for printing the details use (->) arrow keywords. 
//     School* s7=&s6;
//     cout<<s7->area<<","<<s7->field<<","<<s7->name<<","<<s7->strength<<endl;


// }

// // Sarla,1500,5,2
// // Aditya,2500,3,3
// // Sumitra,2000,6,1
// // SMS,8000,10,3
// // SMS,8000,10,3
// // 6,1,GU,2000
// // 6,1,GU,2000





// // user defined data structure -: 

// // i am making vector of our own and work on those vectors 
// // making some function of the vector -: 


// #include<iostream>
// using namespace std;

// class Vector{
// public:
//     int size;
//     int capacity;
//     int *arr; // array pointer -> i am making dynamic array 

//     // constructor -: 
//     Vector(){
//         size=0;
//         capacity=1;
//         arr=new int[1];
//     }

//     // push ele. to a vector -: 
//     void push(int ele){
//         if(size==capacity){
//             int *arr2=new int[capacity*=2];
//             // then copying preivous ele. of a vector to a new vector
//             for(int i=0; i<size; i++){
//                 arr2[i]=arr[i];
//             } 
//             arr=arr2;
//         }
//         arr[size]=ele;
//         size++;
//     }


//     // display the array's ele. by using for loop -:
//     void display(){
//         for(int i=0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }


//     // remove the array's ele.
//     void remove(){
//         if(size==0){
//             cout<<"Array is empty ! ";
//             return;
//         }
//         size--;
//     }

//     int get(int idx){
//         if(size==0){
//             cout<<"Array is empty ! ";
//             return -1;
//         }
//         if(idx<0 || idx>=size){
//             cout<<"Index is out of bound ";
//             return -1;
//         }
//         return arr[idx];
//     }

// };

// int main(){
//     Vector v;
//     v.push(10);
//     v.push(20);
//     v.push(30);

//     cout<<v.size<<" "<<v.capacity<<endl;

//     v.push(40);
//     v.push(50);

//     v.display();

//     // size and capacity is a normal variable 
//     cout<<v.size<<" "<<v.capacity<<endl;

//     v.remove();
//     v.remove();

//     cout<<v.size<<" "<<v.capacity<<endl;


// }

// // 3 4
// // 10 20 30 40 50
// // 5 8
// // 3 8




// // Inheritance -: 

// // 1-> Multilevel Inheritance -: 

// #include<iostream>
// using namespace std;

// class Vehicle{
// public:
//     string name;
//     int mileage;
//     float speed;
// };


// class Bike : public Vehicle{
// public:
//     bool issunroof;
//     bool petrol;
//     int topspeed;
// };


// class Scooty : public Bike{
// public:
//     string brand="Indian";
//     float price=360000;
// };


// int main(){
//     Vehicle v;
//     v.mileage=456;
//     v.name="Bus";
//     v.speed=60;
//     cout<<v.mileage<<endl; // 456
//     cout<<endl;

//     Scooty s;
//     cout<<s.brand<<endl; 
//     cout<<s.price<<endl; 
//     s.name="Car";
//     cout<<s.name<<endl;
//     cout<<endl;

//     Bike b;
//     b.issunroof="false";
//     b.speed=100;
//     cout<<b.issunroof<<" "<<b.speed<<endl;

// }

// // 456

// // Indian
// // 360000
// // Car

// // 1 100



// Function Overloading and Polymorphism -:
// by making sum() function we can defined both .

// Polymorphism means -> same name with diff. forms. 


#include<iostream>
using namespace std;

void sum(int a, int b){
    cout<<a+b<<endl;
}

int sum(int a, int b, int c){
    return a+b+c;
}

void sum(string a, string b){
    cout<<a+b<<endl;
}

void sum(int a, int b, string c, string d){
    cout<<a+b<<endl;
    string e=c+d;
    cout<<e<<endl;
}

void sum(int arr[], int idx, int size){
    for(int i=0; i<size; i++){
        cout<<arr[idx]<<" ";
        idx++;
    }
    cout<<endl;
}

int main(){

    sum(2,3);
    cout<<sum(2,3,4)<<endl;
    sum("Shivam","Shrivastav");
    sum(1,2,"Shivam","Shri");

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,0,n);

}

// 5
// 9
// ShivamShrivastav
// 3
// ShivamShri
// 1 2 3 4 5








