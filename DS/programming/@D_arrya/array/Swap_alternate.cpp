#include<iostream>
using namespace std;

void take_input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void swap_element(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){

int n;
cin>>n;
int arr[100];
take_input(arr,n);
swap_element(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}