// #include<stdio.h>
// #include<string.h>
// int main(){
//     // int n;
//     // scanf("%d",&n);
//     char arr[100];
    
//     // scanf("%s",arr);
//     scanf("%[^\n]s",arr);
//     // gets(arr);
//     // fgets(arr,sizeof(arr),stdin);
//     printf("%s",arr);
//     // puts(arr);


//     return 0;
// }

// devlop a program to copu a string to another fucntion using strcpy
#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    char arr2[100];
    gets(arr);
    int i;
    for( i=0;i<strlen(arr);i++){
        arr2[i]=arr[i];
    }
arr2[i]='\0';
    puts(arr2);
}