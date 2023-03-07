#include<stdio.h>
#include<string.h>
int main(){
char arr[100];
char arr2[200];
gets(arr);
gets(arr2);
int n=strlen(arr);
scanf("%d",n);
int i=0;
// while(arr[i]!='\0'){
//     arr2[n+i]=arr[i];
// i++;
// }
puts(arr2);
    return 0;
}