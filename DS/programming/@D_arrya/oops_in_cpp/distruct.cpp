#include<iostream>
using namespace std;

class Hero{

        
    private: 
    
    int health;

    public:
    char level;
   static int timeToComplete;

    Hero(){
        cout<<"contructor caleed\n ";
    }
    // contructor with no arguments 
    void print(){
        cout<<level<<endl;
    }

    // parametersied Constructor 

    Hero(int health){
    
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch ){
        level= ch;
    }

    static int random(){
        // cout<<this -> heath<<endl; not will work

        return timeToComplete;
            }
// Destructor 
~Hero(){
    cout<<"Destructor bhai called "<<endl;
}
};

//     int Hero::timeToComplete =5;
int main(){



    cout<<Hero::random()<<endl;

// // cout<<Hero::timeToComplete<<endl;

// Hero a;
// cout<<a.timeToComplete<<endl;


// Hero b; 
// b.timeToComplete=10;
// cout<<a.timeToComplete<<endl;
// cout<<b.timeToComplete<<endl;













// static



// Hero a;


// // dynamic 
// Hero*b=new Hero();
// delete b;



    return 0;
}