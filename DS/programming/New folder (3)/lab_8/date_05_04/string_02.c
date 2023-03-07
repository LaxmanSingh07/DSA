#include<stdio.h>
#include<string.h>
int main(){
char  arr[100];
char arr2[100];
char arr3[200];
gets(arr);
gets(arr2);
int i=0,j=0,k=0;
int t=0;
while(arr[i]!='\0'){
    arr3[k++]=arr[i++];
    t++;
}
arr[t]=' ';
t++;
i=0;
while(arr2[i]!='\0'){
    arr3[k++]=arr2[i++];
    t++;
}
arr3[t]='\0';
puts(arr3);
    return 0;
}