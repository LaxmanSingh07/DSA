#include<iostream>
using namespace std;

void take_input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int check(int arr[],int n){
    int ans=0;
    // XORING ALL ELEMENT 
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    // xor(1,n-1);
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
int n;
cin>>n;
int arr[1000];
take_input(arr,n);
cout<<check(arr,n);
    return 0;
}