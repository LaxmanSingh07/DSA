#include<iostream>
using namespace std;
void take_input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int occurence (int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
int n;
cin>>n;
int arr[1000];

take_input(arr,n);
cout<<occurence(arr,n);


    return 0;
}