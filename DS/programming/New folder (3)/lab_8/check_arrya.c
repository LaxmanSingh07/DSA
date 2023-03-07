// #include<stdio.h>
// int main(){
//     int arr[2][3]={1,2};
//     int k=5;
//     int *ptr=&arr;
//     for(int i=0;i<k;i++){
//         printf("%d",*ptr++);
//     }
// }

#include<stdio.h>
int main(){

int n,m;
scanf("%d %d",&n,&m);
int k=n+m;
int arr[n][m];
int *ptr=arr;
for(int i=0;i<k;i++){
    scanf("%d",ptr++);
}
ptr=arr2;
for(int i=0;i<k;i++){
    printf("%d",*ptr++);
}
    return 0;
}