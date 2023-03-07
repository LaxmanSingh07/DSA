#include<iostream>
// #include "hero.cpp"
using namespace std;

class Hero{
    // properites of class
    
    private: 
    
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h,char name){
        health=h;
    }
    void setlevel(char ch ){
        level= ch;
    }
};

int main(){
// object of the class
Hero paul; 
cout<<"Ramesh health is"<<paul.gethealth()<<endl;
paul.sethealth(70);
// paul.health=23;
paul.level='a';
cout<<"Health is  "<<paul.gethealth()<<endl;
l
cout<<"size of Ramesh is "<<sizeof(pau);
// cout<<"level is  "<<paul.level;

    return 0;
}