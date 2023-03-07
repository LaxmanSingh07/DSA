#include <stdio.h>

void merge(int arr[], int si, int mid, int ei)
{
    int i = si;
    int j = mid + 1;
    int k = 0;

    int extra[ei - si + 1];
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            extra[k] = arr[i++];
        }
        else
        {
            extra[k] = arr[j++];
        }
        k++;
    }
    while (i <= mid)
    {
        extra[k++] = arr[i++];
    }

    while (j <= ei)
    {
        extra[k++] = arr[j++];
    }

    for (int i = 0, m = si; i <= ei-si; i++, m++)
    {
        arr[m] = extra[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr,low,mid, high);
}
int main()
{

    int n;
    printf("Enter the total no of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}