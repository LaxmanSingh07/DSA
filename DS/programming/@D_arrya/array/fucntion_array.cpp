#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
int n;
cin>>n;
int arr[n];
// int k=12;
// int cute[12];
// input_array(arr,n);
// input_array(cute,12);
// printArray(arr,n);
// printArray(cute,k);

cout<<sizeof(arr);
    return 0;
}
