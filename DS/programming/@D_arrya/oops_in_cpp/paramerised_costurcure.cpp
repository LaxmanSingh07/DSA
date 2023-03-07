#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    //properties 

     private: 
    
    int health;

    public:
    char *name;
    char level;

    Hero(){
        cout<<"contructor caleed ";
        name= new char [100];
    }
    

    // contructor with no arguments 


    
    // paramerterised constructor

    Hero(int health){
        // cout<<"This"<<this<<endl;
        this -> health=health;
    }
    Hero(int health,char level){
         
        // cout<<"This"<<this<<endl;
        this ->level=level;
        this -> health=health;

    }

    
    void print(){
        cout<<"health"<<this->health<<endl;
        cout<<this->level<<endl;
        cout<<"Name"<<this->name<<" ";
        cout<<endl;
    }
    // copy constrcutore
    Hero(Hero& temp){
        char *ch=new char [strlen(temp.name)+1];
        strcpy(ch,temp.name);
        // cout<<"Copu constructure called"<<endl;
        this->health =temp.health;
        this->level=temp.level; 
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

  
};

int main(){

//     Hero Laxman(19);
    
//     cout<<"Address of ramesh "<<&Laxman;
//     Laxman.gethealth();
//     //objected created stracticly



// Hero *h=new Hero(11);
// h->print();

// Hero temp(22,'B');
// temp.print();



// copu constructor 
// Hero Suresh(70,'c');
// Suresh.print();

// Hero Ritesh(Suresh);
// Ritesh.print();

Hero hero1;
hero1.sethealth(12);
hero1.setlevel('d');
char name[7]="laxman";
hero1.setName(name);
// hero1.print();


// Ritesh.health=Suresh.health;
// Ritesh.level=Suresh.level



// use default copy constructor 

Hero hero2(hero1);
// hero2.print();


hero1.name[0]='A';
hero1.print();


hero2.print();

hero1=hero2;
hero1.print();
hero2.print();
    return 0;
}
