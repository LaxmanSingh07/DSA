#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l,j=h;

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[l],arr[j]);
    return j;

}

void quick(int arr[],int l,int h)
{
    if(l<h){
        int pos=partition(arr,l,h);
        quick(arr,l,pos-1);
        quick(arr,pos+1,h);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}