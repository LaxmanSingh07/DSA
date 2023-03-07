// devlop a program to left rotate a dynamic 1 D arrya with size 'N#

#include<stdio.h>
#include<stdlib.h>
void swap(int *ptr,int n){
    int temp=*ptr;
    for(int i=0;i<n-1;i++){
        *(ptr+i)=*(ptr +i+1);
    }
    *(ptr+n-1)=temp;
}
int main(){
int n;
scanf("%d",&n);
int *ptr=(int *)calloc(sizeof(int),n);
for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
}
int k;
scanf("%d",&k);
for(int i=1;i<=k;i++){
    swap(ptr,n);
}
for(int i=0;i<n;i++){
    printf("%d",*(ptr+i));
}
free(ptr);

    return 0;
}