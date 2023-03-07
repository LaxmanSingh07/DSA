#include<iostream>
using namespace std;

int firstoccur(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;

    
    while (s<=e)
    {
    int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;

        }

        else if (key<arr[mid])
        {
            e=mid-1;
        }
    }
    return ans;
    
}
int lastoccur(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;

    int mid=s+(e-s)/2; 
    while (s<=e)
    {
   cout<<s<<e;
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;

        }
 
        else if (key<arr[mid])
        {
            e=mid-1;
        }
     mid=s+(e-s)/2;
    }
    return ans;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the targeted element ";
    cin>>key;
    cout<<"first occurence of "<<"key is"<<" "<< firstoccur(arr,n,key);
    cout<<"last occurence of "<<"key is"<<" "<<lastoccur(arr,n,key);
}
