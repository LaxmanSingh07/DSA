#include<iostream>
using namespace std;

class Hero{
    // properites of class
    
    private: 
    
    int health;

    public:
    char level;

    Hero(){
        cout<<"contructor caleed ";
    }
    // contructor with no arguments 
    void print(){
        cout<<level<<endl;
    }

    // parametersied Constructor 

    Hero(int health{
    
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
};


int main(){
// cout<<"HI"<<endl;
// Hero a;
// // cout<<"hello"<<endl;
// a.setlevel('B');
// a.sethealth(700);
// cout<<"level is "<<a.level<<endl;
// cout<<"health is "<<a.ge  thealth()<<endl;
// Hero *b=new Hero;
// b->setlevel('A');
// b->sethealth(70);


// cout<<"level is "<<(*b).level<<endl;
// cout<<"health is "<<(*b).gethealth()<<endl;

// cout<<"level is "<<(b)->level<<endl;
// cout<<"health is "<<(b)->gethealth()<<endl;

// Hero*h=new Hero();
// Hero*h1=new Hero;


// constructor 

// object createedd staticalaly
// Hero ramesh;

//dynamically
//  Hero *h=new Hero(); 
    return 0;


}