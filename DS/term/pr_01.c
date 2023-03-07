#include<stdio.h>

int main()
{
    int n;
    printf("Enter the total no of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=1;

    while (j<n)
    {
        if(arr[i]<0 && arr[j]>=0)
        {
            i++;
            j++;
        }
       else if(arr[j]>=0){
            j++;
        }

        else{
            for(int z=j;z>i;z--o8xzx){
                arr[z]=arr[z-1];
            }
        }
    }

    return 0;
}