#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
}
int diff=arr[0];
for(int i=1;i<n;i++)
{
    if(diff!=(arr[i]-i)){
        printf("missing element in natural no is %d",diff+i);
    }
    break;
}
    return 0;
}