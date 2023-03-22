#include<iostream>
using namespace std;
void paramtersed(int i,int sum)
{
    if(i<=0){
        cout<<sum<<endl;
        return;
    }
    paramtersed(i-1,sum+i);
}


int functional(int n)
{
    if(n==0){
        return 0;
    }
    return n+functional(n-1);
}
int main()
{
    int n;
    cin>>n; 
    paramtersed(n,0);
    cout<<functional(n);
    return 0;
}