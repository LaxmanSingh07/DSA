#include<iostream>
using namespace std;
void take_input(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
bool check(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return true;
            break;
        }
    }
    return false;
}
int main(){

int n;
cin>>n;

int arr[1000];
take_input(arr,n);
int key;
cout<<"Enter the key";
cin>>key;
if(check(arr, n,key)){
    cout<<"No is present";
}
else{
    cout<<"No is not present";
}


    return 0;
}