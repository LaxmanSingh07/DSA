#include<iostream>
using namespace std;

void triangle(int r,int c)
{
    if(r==0){
        return ;
    }
    if(c<r){
        cout<<"*";
        triangle(r,c+1);
    }
    else{
        cout<<endl;
        triangle(r-1,c);
    }
}


void NormalTriangle(int r,int c)
{
     if(r==0){
        return ;
    }
    if(c<r){
        triangle(r,c+1);
        cout<<"*";
    }
    else{
        triangle(r-1,c);
        cout<<endl;
    }
}

int main()
{
    int n,m;
    cout<<"Enter the value of the n and m"<<endl;
    cin>>n>>m;
    triangle(4,4);
}