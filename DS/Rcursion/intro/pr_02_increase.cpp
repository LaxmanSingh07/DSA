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
    print(n-1);
    cout<<n<<" "<<endl;
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing in increasing order: "<<endl;
    print(n);
}