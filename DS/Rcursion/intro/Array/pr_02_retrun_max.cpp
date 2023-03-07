#include<iostream>
using namespace std;

int Max_all(int arr[],int n,int index)
{
    if(index==n)
    {
        return INT_MIN;
    }
    // int ans=arr[index];
    // int recAns=Max_all(arr,n,index+1);
    // return max(ans,recAns);
    return max(arr[index],Max_all(arr,n,index+1));
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