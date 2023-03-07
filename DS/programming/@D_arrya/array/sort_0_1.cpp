#include <iostream>
using namespace std;
void take_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void SortONE(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
      
      while (arr[i]==0)
      {
          i++;
      }
      
        while (arr[j]==1)
        {
            j--;
        }

        // if we are here 

        //arr[i]==1 nad arr[j]=0;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
        
    }

    if(arr[i]==0){
        i++;
    }
    else if(arr[j]==1){
        j++;
    }
    else {
             int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
        

    }
}
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    take_input(arr, n);
    SortONE(arr,n);
    print(arr,n);
}