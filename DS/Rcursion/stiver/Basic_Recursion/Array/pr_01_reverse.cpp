#include<iostream>
#include<algorithm>
using namespace std;
void print_take(int arr[],int n,bool p)
{
    for(int i=0;i<n;i++)
    {
        if(p==true)
        {
            cout<<arr[i]<<" ";
        }
        else{
            cin>>arr[i];
        }
    }
    cout<<endl;
}

void swapi(int arr[],int low,int high)
{
    if(low>high)
    {
        return;
    }
    swap(arr[low],arr[high]);
    swapi(arr,low+1,high-1);
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    print_take(arr,n,false);
    swapi(arr,0,n-1);
    print_take(arr,n,true);
    
}