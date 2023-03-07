#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
printf("Enter the no of elements");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int i;
int k;
printf("Enter the key value ");
scanf("%d",&k);
for( i=0;i<n;i++){
    if(arr[i]==k){
        printf("%d",i);
    break;
    }
}
if(i==n){
    printf("not present");
}



    return 0;
}