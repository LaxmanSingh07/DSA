#include<iostream>
using namespace std;
void take_input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int find_max(int arr[],int n){
    int maxa=INT_MIN;
    for(int i=0;i<n;i++){
        maxa=max(arr[i],maxa);
        // if(max<arr[i]){
        //     max=arr[i];
        // }
    }
    return maxa;
}
int find_min(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        // if(min>arr[i]){
        //     min=arr[i];
        // }

        mini=min(mini,arr[i]);
    }
    return mini;
}
int main(){
int n;
cin>>n;
int arr[100]; // this is not a good practice I DON'T KNOW WHY 
take_input(arr, n);
cout<<"max and min of the array is "<<" "<<  find_max(arr,n)<<" "<<find_min(arr,n);


    return 0;
}