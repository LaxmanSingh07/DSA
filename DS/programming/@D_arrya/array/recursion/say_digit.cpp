#include<iostream>
using namespace std;

void SayDigit(int n, string arr[]){
    // base case 

    if(n==0){
        return;
    }
    // processing 
    int digit =n%10;
    n/=10;
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";
    // revursive call
}
int main(){
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int n;
cin>>n;

SayDigit(n, arr );
    return 0;
}