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
    cout<<n<<" "<<endl;
    print(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing in Decreasing order: "<<endl;
    print(n);
}