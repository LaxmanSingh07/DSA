#include<stdio.h>
#include<stdbool.h>
void get_input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void bubble_sort(int arr[],int n)
{
    bool flag=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}
void print_data(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the total no of element\n");
    scanf("%d",&n);
    int arr[n];
    get_input(arr,n);
    bubble_sort(arr,n);
    print_data(arr,n);
    return 0;
}