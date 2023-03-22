#include<iostream>
using namespace std;
void printNum(int n)
{
    if(n==0)
        return;
    printNum(n-1);
    cout<<n<<endl;

}

void printNto1(int n)
{
    if(n==0)
        return;
    cout<<n<<endl;
    printNto1(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Print from 1 to n: "<<endl;
    printNum(n);
    cout<<"Print from n to 1: "<<endl;
    printNto1(n);
    return 0;
}