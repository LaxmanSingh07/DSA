#include<iostream>

using namespace std;

void print(int arr[],int n){
    cout<<"Size of arry is "<<n <<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }
}
bool linear_search(int arr[],int n, int key){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool reaming_element=linear_search(arr+1,n-1,key);
    return reaming_element;

}
int main(){

int n;
cin>>n;
int ar[100];
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int key;
cout<<"Enter the key which you want to find out";
cin>>key;
if(linear_search(ar,n,key)){
    cout<<"no is present";
}
else{
    cout<<"NUMBER is not presetn ";
}
    return 0;
}