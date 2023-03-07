#include<stdio.h>
#include<string.h>

int main(){
char  arr[100];
gets(arr);
int k=strlen(arr);
k=k-1;
for(int i=0,j=k;i<=j;i++,j--){
    
    char  temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}
    
puts(arr);
}