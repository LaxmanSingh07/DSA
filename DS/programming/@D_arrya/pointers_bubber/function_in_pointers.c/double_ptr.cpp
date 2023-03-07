#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;
    // will it change --> no

    // *p=*p+1; 
    // will it change  --> yes
    **p=**p+1;
    // will it change 
}
int main(){

    int i=4;
    int *p=&i;
    int **p2=&p;

    // cout<<endl<<endl<<"San sahi chal rha hai"<<endl<<endl;
    // cout<<"printing p"<<p<<endl;

    // cout<<"address of p"<< &p<<endl;
    // cout<<"address of p"<< p2<<endl;

    // cout<<*p2<<endl;
    // cout<<"printing the value of i in different styel";
    // cout<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;


    // cout<<"Address of the i"<<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    cout<<endl<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

update(p2);
    cout<<endl<<endl;
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;

return 0;

}