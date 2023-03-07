#include<stdio.h>
void ptr1(int *, int );
void ptr2(int [],int );
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    ptr1(arr,n);
    ptr2(arr,n);


    return 0;
}

void ptr1(int *k,int n){
    for(int i=0;i<n;i++){
        printf("%d",*k);
        printf("\t");
        k++;
    }
}

void ptr2(int k[],int n){
    for(int j=0;j<n;j++){
        printf("%d",k[j]);

    }
}