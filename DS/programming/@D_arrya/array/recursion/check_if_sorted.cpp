#include<iostream>
using namespace std;


bool check_sorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else {  
    bool ans=check_sorted(arr+1,size-1);
    return ans;
    }
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++ ){
    cin>>arr[i];
}
cout<<check_sorted(arr,n);
    return 0;
}