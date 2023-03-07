#include<stdio.h>
int main(){
int n;
scanf("%d",&n);

int arr[n];
printf("Enter the elements is sorted order");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int first=arr[0];
int last=arr[n];
int k;

int mid=(arr[0]+arr[n])/2;
printf("Enter the key element");
scanf("%d",&k);
while (first<=last)

{

    int first=arr[0];
int last=arr[n];
int k;

int mid=(arr[0]+arr[n])/2;
    if(mid==k){
        printf("present");
    }
    if(mid>k){
        last=mid+1;
    }
    if(mid<k){
        first=mid-1;

    }
}




    return 0;
}