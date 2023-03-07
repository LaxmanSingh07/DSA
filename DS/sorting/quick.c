#include<stdio.h>

void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}


//this is known as the hoar's partition 
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low,j=high;

    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[low],&arr[j]);
    return j;
}

void QuickSort(int arr[],int low,int high){
    int j;
    if(low<high){
        j=partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}

// another partition name is laumotu partition


int main()
{
    int n;
    printf("Enter the total no of array in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the  elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}