#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
int k;
printf("Enter the max no which you will give as an input");
scanf("%d",&k);
int Hi[k]={0};
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<k;i++){
    if(arr[i]!=-1){
    Hi[arr[i]]++;
    arr[i]=-1;
    } 
}

for(int i=0;i<k;i++){
    if(arr[i]!=-1){
        printf("missing elements are %d",arr[i]);
    }
}

int trr[k];
    return 0;
}