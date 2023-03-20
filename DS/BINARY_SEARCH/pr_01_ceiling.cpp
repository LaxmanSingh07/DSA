#include<iostream>
using namespace std;

//return the smallest element which is greater than or equal to key
int Binary(int a[],int n,int key)
{
    //what if the target element is greater than the largest element in the array
    //in that case we will return -1

    if(key>a[n-1])
    {
        return -1;
    }
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]==key)
        {
            return a[mid];
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return a[s];
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<Binary(a,n,key);

    return 0;
}