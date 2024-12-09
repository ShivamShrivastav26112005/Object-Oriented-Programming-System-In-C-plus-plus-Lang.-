// // 1-: Passing class , objects to functions -: 

// // OOPs says that all the variables/data members of the class is private 
// // and all the member functions of the class is public.
// // to fill/set the values of the data members, i am using "setter" fun. and for getting/accessing the values, i am making "getter" fun. 


// #include<iostream>
// using namespace std;

// // it is a class -> blueprint. 
// class Player{ 

// // all the data members is "private" A/T OOPs 
// private:
//     int health;
//     int age;
//     int score;
//     bool alive;

// // all the member functions is "public" A/C OOPs
// public:
// // to access private data members i am using setter and getter fun. 

// // to set the values -> setter fun. is used -: 
//     void setHealth(int h){
//         health=h;
//     }

//     // void setScore(int score){
//     //     Player::score=score; // :: -> scope re-solution operator 
//     // }
//     // // Player:: -> it tells Player wala score
//     // // Player::score=score; -> means Player wale score me apna ye score dal do. 


//     // OR -: you can use this keyword. means es wale class ka 
//     // either you can use scope re-solution operator (::) or this keyword, syntax -> (this -> data_member name). ex-> this->score=score;
//     // syntax -: scope re-solution operator (::) -> class_name :: data_member name/variable name. ex-> Player::score=score;


//     void setScore(int score){
//         this->score=score; // means private wale score me ye score dal do 
//     }

//     void setAge(int age){
//         this->age=age;
//     }

//     // setAlive() fun. takes 1 parameter of type boolean or (bool)
//     void setAlive(bool A){
//         alive=A;
//     }




// // to get the values -> getter fun. is used -: 
//     int getHealth(){
//         return health;
//     }

//     // int getAge(){
//     //     return age;
//     // }

//     // OR -: you can make fun. either int type or void type -: 

//     void getAge(){
//         cout<<age<<endl;
//     }

//     int getScore(){
//         return score;
//     }
    
//     int getAlive(){
//         return alive;
//     }

// };

// // basic fun. ->  sum() hai. 
// // void sum(int a, int b){
// //     cout<<a+b<<endl;
// // }

// // Or -: 

// // we make a function named sum() which takes 2 parameters of type int (integers)
// int sum(int a, int b){
//     return a+b;
// }

// // now hm fun. me kuch bhi pass kara sakte hai and kuch bhi print kara sakte hai 
// // hm fun. me 10,20,100 parameters de sakte hai of any type like string, int, float, boolean etc, 
// // similarly hm kuch bhi return kara sakte hai like int, float, or void(void -> kuch bhi nhi)
// // pass any data type or return any data type. so, class is also a data type then we can pass class also into a function. 
// // and also return the class. 


// // ex-: passing object to a function -: 
// // or passing class to a function -: 

// // class or Player is a user defined data type which stores objects. 
// // 1st obj. name is "a" and 2nd is "b".  
// // we make a function named addScore() which takes 2 parameters of type Player(class)
// // Player type means Player ke objects lega 

// int addScore(Player a, Player b){ // a obj. me shiv and b obj. me sita aa gye or a=shiv, b=sita 
//     return a.getScore()+b.getScore(); // shiv ka score->95 and sita ka score->94 add hua and return hua 189
// }


// // returning class -:
// // we have to return class -> Player type ke obj.s ko return karega 
// // it takes 2 parameters/Players and return those player which have maximum score.
// // getMaxScore() returns a Player then we can store those Player into a Player's object. 

// Player getMaxScore(Player a, Player b){
//     if(a.getScore()>b.getScore()) return a;
//     else return b; // returns players -> store it into a player's object, make a player's obj. 
// }


// int main(){
//     // obj. creation statically. 
//     Player shiv; // obj. is shiv 

//     // setting/assigning values -: 
//     shiv.setAge(22);
//     shiv.setAlive(true);
//     shiv.setHealth(197);
//     shiv.setScore(95);

//     // getting/printing values -: 
//     shiv.getAge();
//     cout<<shiv.getScore()<<endl;
//     cout<<shiv.getHealth()<<endl;
//     cout<<shiv.getAlive()<<endl;
//     cout<<endl;



//     Player sita; // 2nd obj. is sita  

//     // set the values -: 
//     sita.setAge(21);
//     sita.setAlive(true);
//     sita.setHealth(198);
//     sita.setScore(94);

//     // get the values -: 
//     sita.getAge();
//     cout<<sita.getScore()<<endl;
//     cout<<sita.getHealth()<<endl;
//     cout<<sita.getAlive()<<endl;
//     cout<<endl;

//     // making a function sum() which takes 2 parameters add them and print -: 

//     // sum(10,20); // -> for void type fun. 
//     // OR -:
//     cout<<sum(10,20)<<endl; // -> for return type fun. here return type is int 

//     cout<<addScore(shiv,sita)<<endl;// passing objects to a function 


//     // getMaxScore() returns a Player then we can store those Player into a Player's object, Player name is ram 
//     Player ram=getMaxScore(shiv,sita);
//     cout<<ram.getScore()<<endl;
// }

// // 22
// // 95
// // 197
// // 1

// // 21
// // 94
// // 198
// // 1

// // 30
// // 189 
// // 95 

// // so, we can pass class as a parameter or as a return type into a function. 





// 2-: Static Allocation v/s Dynamic Allocation -: 
// firstly we understand lifestyle / lifecycle of the program.
// program -> some written code 
// we compile the program, then compile do-: 1->detect compilation errors(miss ; or brackets).
// 2-> memory allocation -> where -> in RAM -> RAM is a primary memory 

// Static Allocation -> pahle hi memory ko allocate kar dena. ex-: Player shivam 
// memory is allocated before starting the program, also called stack memory. 

// Dynamic Allocation -> at a time of program we need some memory, also called heap memory. 
// stack memory is a compile time memory and heap memory is a real time memory. 


// 1-: ex-> compile time -: 
// int a=10;
// Player shivam; 


// 2-: ex-> run time -: used pointers -> pointers(*) is a type of variable which is used to store the address. 

// // ex. of pointers -: used to store "address" of the variables.  
// int a; // a variable stores integer data type value 
// int *p; // *p variable stores "address" of the "variable" of integer type 

// char ch='b'; // ch variable stores characters data type value
// char *chh; // *chh stores "address" of the "variable" of character data type 
// char *chh=&ch; // *chh stores address of the ch variable. 



// 1-: compile time memory allocation or static memory allocation -> allocate memory before starting the compilation, stack memory is used. 
// 2-: run time memory allocation or dynamic memory allocation -> allocate memory while compiling the program, heap memory is used. 





// // 1-: ex-> compile time memory.

// #include<iostream>
// using namespace std;
// // class name is Player. 
// class Player{ // class is a user defined data type, we can store values of different data type in the class A/T me. 

// private:
//     int health;
//     int score;
//     int age;
//     bool alive;

// public:
//     // setter fun is uesd to set the values becoz data members is private.
//     void setAge(int age){
//         this->age=age;
//     }

//     void setScore(int score){
//         this->score=score;
//     }

//     void setAlive(int alive){
//         this->alive=alive;
//     }

//     void setHealth(int health){
//         this->health=health;
//     }

//     // getter fun is used to get the values becoz data members is private.
//     int getScore(){
//         return score;
//     }

//     int getAlive(){
//         return alive;
//     }

//     int getHealth(){
//         return health;
//     }

//     int getAge(){
//         return age;
//     }

// };

// int main(){


//     // // 1-: Compile time memory allocation or static memory allocation -: 

//     // // we make 2 objects named -: shivam and shivani
//     // // compile ke time per hi shivam and shivani obj. ke liye memory allocate ho jata hai 
//     // // and then uske ander setter fun. se sari values store hone lagti hai 



//     // Player shivam; // class name -: Player, object name -: shivam. 
//     // Player shivani;

//     // // setting the values -: 
//     // shivam.setAge(19);
//     // shivam.setAlive(1);
//     // shivam.setScore(97);
//     // shivam.setHealth(96);

//     // shivani.setAge(18);
//     // shivani.setAlive(1);
//     // shivani.setScore(98);
//     // shivani.setHealth(95);

//     // // getting the values -: 
//     // cout<<shivam.getAge()<<endl;
//     // cout<<shivam.getHealth()<<endl;
//     // cout<<shivam.getScore()<<endl;
//     // cout<<shivam.getAlive()<<endl;

//     // cout<<endl;

//     // cout<<shivani.getAge()<<endl;
//     // cout<<shivani.getHealth()<<endl;
//     // cout<<shivani.getScore()<<endl;
//     // cout<<shivani.getAlive()<<endl;

//     // cout<<endl;







//     // 2-: Run time memory allocation or dynamic memory allocation -: 
//     // to allocate memory at run time, we need a pointer then int ka pointer int* se banata hai,
//     // char ka pointer char* se banata hai, similarly, Player ka pointer Player* se banega. 


//     // now, we make an object which allocate at run-time. 
//     // ***** Player *tanu=new Player; ***** // it is used to store "address" of the objects, 
//     // new is used to allocate the memory for the Player tanu at real-time/run-time in heap memory.



//     // difference -: 
//     // shivam and shivani is objects and *tanu is a object pointer or pointer to object
//     // shivam and shivani me memory allocate hogi compile time me or static allocation
//     // *tanu me memory alloacte hogi at run-time me or dynamic alloaction 




//     // // ex-: Pointers -> 
//     // int a=10; // variable name is "a"
//     // int *b=&a; // store the address of the variable "a" into a pointer b or *b
//     // cout<<b<<endl; // 0x61fef4 // print address 
//     // cout<<*b<<endl; // 10 // print values or *b means b per jao, b ke ander jo address pda hai us address per jao, aur vha jo value hai use print kar do 




//     //                      IMP -: 
//     // while compiling or running the program then memory is allocated to tanu object 
//     // and before running the program or before starting the program memory is allocated to shivam and shivani objects. 

//     Player *tanu=new Player;
//     Player newTanuObj=*tanu; // newTanuObj is a new object which stores the pointer tanu object
//     // *tanu means tanu ke ander ka object ko store kara diya newTanuObj object name me 



//     // setting the values of tanu. 
//     newTanuObj.setAge(10);
//     newTanuObj.setAlive(1);
//     newTanuObj.setHealth(1000);
//     newTanuObj.setScore(500);

//     // getting the values of tanu.
//     cout<<newTanuObj.getAge()<<endl;
//     cout<<newTanuObj.getHealth()<<endl;
//     cout<<newTanuObj.getScore()<<endl;
//     cout<<newTanuObj.getAlive()<<endl;

//     cout<<endl;

//     // OR -:

//     // update the value -: 
//     (*tanu).setHealth(10000);
//     cout<<(*tanu).getHealth()<<endl;

//     // OR -: using arrow (->) symbol. 

//     // update the value fro 10000 to 20000 
//     tanu->setHealth(20000);
//     cout<<tanu->getHealth()<<endl;

//     // means both are same -: (*tanu). == tanu-> or (*tanu).setHealth(100); == tanu->setHealth(100);

// }

// // 19
// // 96
// // 97
// // 1

// // 18
// // 95
// // 98
// // 1

// // 10
// // 1000
// // 500
// // 1

// // 10000
// // 20000





// // 3-: Class in Class or Nested Class. -> one class inside another class. 
// // class ke ander hm kuch bhi dal skte hai, class ke ander hm class ko bhi dal skte hai 


// #include<iostream>
// using namespace std;

// // 1st class -: 
// // class nmae is Gun. 
// class Gun{ // Gun is a data type (user-defined data type)
// public:
//     int damage;
//     int scope;
// };

// // 2nd class -: 
// // class name is Player. 
// class Player{ // class is a user defined data type, we can store values of different data type in the class A/T me. 

// private:

//     // class inside another class -: new class
//     class Helmet{
//         // hp and level is a property of Helmet. 
//         int hp;
//         int level;

//     public:
//         // set the value -: setter 
//         void setHp(int hp){
//             this->hp=hp;
//         }

//         void setLevel(int level){
//             this->level=level;
//         }

//         // get the value -: getter 
//         int getHp(){
//             return hp;
//         }

//         int getLevel(){
//             return level;
//         }
//     };

//     int health;
//     int score;
//     int age; // data type name int, variable name age 
//     bool alive; 

//     // class Gun bahar hai uska obj. yha liya hai -:
//     Gun gun; // data type name Gun, variable name gun 
//     Helmet helmet;


// public:
//     // getter fun is used to get the values becoz data members is private.
//     int getScore(){
//         return score;
//     }

//     int getAlive(){
//         return alive;
//     }

//     int getHealth(){
//         return health;
//     }

//     int getAge(){
//         return age;
//     }

//     Gun getGun(){
//         return gun;
//     }

//     // setter fun is uesd to set the values becoz data members is private.
//     void setAge(int age){
//         this->age=age;
//     }

//     void setScore(int score){
//         this->score=score;
//     }

//     void setAlive(bool alive){
//         this->alive=alive;
//     }

//     void setHealth(int health){
//         this->health=health;
//     }

//     void setGun(Gun gun){
//         this->gun=gun;
//     }

//     void setHelmet(int level){
//         // make a new helmet 
//         Helmet *helmet=new Helmet;
//         helmet->setLevel(level);
        

//         int health=0;
//         if(level==1) health=25;
//         else if(level==2) health=50;
//         else if(level==3) health=100;
//         else{
//             cout<<"Error! Invalid Level!";
//             return; 
//         }

//         helmet->setHp(health);
//         this->helmet=*helmet;

//     }

//     void getHelmet(){
//         cout<<helmet.getHp()<<endl;
//         cout<<helmet.getLevel()<<endl;
//     }
// };

// int main(){


//     // // // 1-: Compile time memory allocation or static memory allocation -: 
    
//     Player shivam; // class name -: Player, object name -: shivam. 
//     Player shivani;
    
//     // // setting the values -: 
//     // shivam.setAge(19);
//     // shivam.setAlive(1);
//     // shivam.setScore(97);
//     // shivam.setHealth(96);

//     // shivani.setAge(18);
//     // shivani.setAlive(1);
//     // shivani.setScore(98);
//     // shivani.setHealth(95);

//     // // getting the values -: 
//     // cout<<shivam.getAge()<<endl;
//     // cout<<shivam.getHealth()<<endl;
//     // cout<<shivam.getScore()<<endl;
//     // cout<<shivam.getAlive()<<endl;

//     // cout<<endl;

//     // cout<<shivani.getAge()<<endl;
//     // cout<<shivani.getHealth()<<endl;
//     // cout<<shivani.getScore()<<endl;
//     // cout<<shivani.getAlive()<<endl;

//     // cout<<endl;


//     Gun akm;
//     akm.damage=50;
//     akm.scope=90;

//     Gun awm;
//     awm.damage=60;
//     awm.scope=90;

//     shivam.setGun(akm);
//     shivani.setGun(awm);

//     shivam.setHelmet(2);
//     shivani.setHelmet(3);

//     Gun gun123=shivam.getGun();
//     cout<<gun123.damage<<endl;
//     cout<<gun123.scope<<endl;
//     cout<<endl;

//     Gun gun124=shivani.getGun();
//     cout<<gun123.damage<<endl;
//     cout<<gun123.scope<<endl;
//     cout<<endl;

//     shivam.getHelmet();
//     cout<<endl;
//     shivani.getHelmet();
     
// }


// // 50
// // 90

// // 50
// // 90

// // 50
// // 2

// // 100
// // 3



// 4-: Array of Classes or Array of Objects -: 
// jaise hm array of integers,array of char.s banate hai vaise hi array of objects banata hai 




#include<iostream>
using namespace std;

class Gun{ 
public:
    int damage;
    int scope;
};


class Player{
private:

    class Helmet{
        int hp;
        int level;

    public:

        void setHp(int hp){
            this->hp=hp;
        }

        void setLevel(int level){
            this->level=level;
        }

        int getHp(){
            return hp;
        }

        int getLevel(){
            return level;
        }
    };

    int health;
    int score;
    int age;
    bool alive;
   
    Gun gun; 
    Helmet helmet;


public:

    int getScore(){
        return score;
    }

    int getAlive(){
        return alive;
    }

    int getHealth(){
        return health;
    }

    int getAge(){
        return age;
    }

    Gun getGun(){
        return gun;
    }

    void setAge(int age){
        this->age=age;
    }

    void setScore(int score){
        this->score=score;
    }

    void setAlive(bool alive){
        this->alive=alive;
    }

    void setHealth(int health){
        this->health=health;
    }

    void setGun(Gun gun){
        this->gun=gun;
    }

    void setHelmet(int level){

        Helmet *helmet=new Helmet;
        helmet->setLevel(level);
        

        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else{
            cout<<"Error! Invalid Level!";
            return; 
        }

        helmet->setHp(health);
        this->helmet=*helmet;

    }

    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }
};

int main(){

    Player shivam;
    Player shivani; 

    // Gun akm;
    // akm.damage=50;
    // akm.scope=90;

    // Gun awm;
    // awm.damage=60;
    // awm.scope=90;

    // shivam.setGun(akm);
    // shivani.setGun(awm);

    // shivam.setHelmet(2);
    // shivani.setHelmet(3);

    // Gun gun123=shivam.getGun();
    // cout<<gun123.damage<<endl;
    // cout<<gun123.scope<<endl;
    // cout<<endl;

    // Gun gun124=shivani.getGun();
    // cout<<gun123.damage<<endl;
    // cout<<gun123.scope<<endl;
    // cout<<endl;

    // shivam.getHelmet();
    // cout<<endl;
    // shivani.getHelmet();

    shivam.setAge(25);

    // array of objects -: we make an array named player which stores 2 players or objects shivam and shivani. 
    Player player[3]={shivam,shivani};
    cout<<player[0].getAge()<<endl; // 25 

}

// Done 
