#include<iostream>
using namespace std;

int main()
{
    //Right most set bit mask can be given as 
    // x^(2's complement of x)


    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;

    //Right most set bit mask 

    int y=(x&-x);
    cout<<y<<endl;
    return 0;
}