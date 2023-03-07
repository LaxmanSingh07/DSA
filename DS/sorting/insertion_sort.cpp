#include <stdio.h>
#include <stdbool.h>

void get_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
       int data=arr[i];
       int j=i-1;
       
       while(j>=0 && arr[j]>data)
       {
        arr[j+1]=arr[j];
        j=j-1;
       }
       arr[j+1]=data;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the total no of element\n");
    scanf("%d", &n);
    int arr[n];
    get_input(arr, n);
    Insertion_sort(arr, n);
    print_array(arr, n);
    return 0;
}