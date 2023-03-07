#include<iostream>
using namespace std;


//Recursion wala function 

void print(int n)
{
    //Base case

    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing in both order: "<<endl;
    print(n);
}