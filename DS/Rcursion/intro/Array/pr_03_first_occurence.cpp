#include<iostream>
using namespace std;

int Max_all(int arr[],int n,int index,int target)
{
    if(index==n)
    {
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    Max_all(arr,n,index+1,target);
    
}
int main(){

    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Max_all(arr,n,0);
}