#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <=e; i++)
    {
        if (arr[i] <=pivot)
        {
            cnt++;
        }
    }

    // place pivot as right posittion
    int pivotIndex = s + cnt;

    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[s];
    arr[s] = temp;

    // code for left and right part of the pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            int semp=arr[i];
            arr[i]=arr[j];
            arr[j]=semp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    // base case

    if (s >= e)
    {
        return;
    }
    // partition karenge

    int p = partition(arr, s, e);

    // left part sort karo

    quicksort(arr, s, p - 1);

    // right  part sort karo

    quicksort(arr, p + 1, e);
}

int main()
{

    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}