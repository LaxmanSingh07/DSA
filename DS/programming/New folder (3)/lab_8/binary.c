#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
int arr[n];
    int i=0;
    int j=n-1;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element you want to find");
    scanf("%d",&key);

    while (i<=j)
    {
        int mid=(i+j)/2;

        if(arr[mid]==key){
            printf("Enter is present at postion %d",mid);

        }
        if(arr[mid]>key){
            j=mid-1;
        }
        else
            i=mid+1;
    }
    if(i>j+1){
        printf("element is not present ");
    }

    return 0;
    
}