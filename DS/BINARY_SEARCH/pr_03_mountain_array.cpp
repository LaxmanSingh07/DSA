#include<iostream>
using namespace std;

int binary(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>a[mid+1]){
            //we are in the decreasing part of the array
            //this may be the answer but we will check in the left part of the array
            //because we have to find the smallest element
            //this is why e!=mid-1

            e=mid;
            
        }
        else{
            //we are in the increasing part of the array
            s=mid+1;//because we know that mid+1 element > mid element
        }
        //in the end,start ==end and postion to the largest  number b...ecause
    return s ;//or end 
}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    return 0;
}