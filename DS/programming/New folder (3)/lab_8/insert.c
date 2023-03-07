#include<stdio.h>
int main(){
    int arr[10]={23,67,89,10,44};

int n;
    printf("Enter your choice \n press 1 to insert at the first \n press 2 to insert at the last /\n press 3 to insert at the psecfied ");

scanf("%d",&n);
int key;
int pos;

switch (n)
{
case 1:
    printf("Enter the key");
    scanf("%d",&key);
    int i;
    for( i=6;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[i]=key;
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    break;
 case 2:
    printf("Enter the key value ");
    scanf("%d",&key);
    arr[5]=key;
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    break;


case 3:
    printf("Enter the key and postion");
    scanf("%d %d ",&key,&pos);
for(int i=6;i>=pos;i--){
    arr[i]=arr[i-1];   
}
arr[pos]=key;
for(int i=0;i<6;i++){
    printf("%d ",arr[i]);
}
 break;
}
}