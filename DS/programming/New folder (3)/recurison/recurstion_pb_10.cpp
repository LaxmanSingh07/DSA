#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1 ;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr,n,i+1,key);
    
}

int lastoccure(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray =lastoccure(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }

    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
cout<<firstoccur(arr,n,0,2)<<endl;
cout<<lastoccure(arr,n,0,2)<<endl;

    return 0;
}