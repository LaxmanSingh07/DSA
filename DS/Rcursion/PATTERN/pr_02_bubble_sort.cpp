#include<iostream>
using namespace std;

void Bubble_sort(int arr[],int r,int c)
{
    if(r==0){
        return ;
    }
    if(c<r){
        if(arr[c]>arr[c+1]){
            swap(arr[c],arr[c+1]);
        }
        Bubble_sort(arr,r,c+1);
    }
    else{
        Bubble_sort(arr,r-1,c);
    }
}


int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   Bubble_sort(arr,0,n-1);

   for(int i=0;i<n;i++)
   {
        cout<<arr[i]<<" ";
   }
   
}