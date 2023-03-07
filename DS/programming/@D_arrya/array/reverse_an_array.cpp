#include<iostream>
using namespace std;
void take_input(int arr[],int k){
    for(int i=0;i<k;i++){
    cin>>arr[i];
    }
}
void reverse(int arr[],int n){
    int i,j;
    for( i=0,j=n-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
int n;
cin>>n;
int arr[1000];
take_input(arr,n);
cout<<"BEFORE";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
reverse(arr,n);

cout<<"AFTER"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}