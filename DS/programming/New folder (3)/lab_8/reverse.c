// wap to reverse the array 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the total no of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}