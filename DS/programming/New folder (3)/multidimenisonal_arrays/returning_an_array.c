#include<stdio.h>
int *fun(int *num);
int main(){
int n;
int *p;

p=fun(&n);
for(int i=0;i<n;i++){
    printf("%d",p[i]);
}



    return 0;
}

int *fun(int*num){
   
    static int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    return arr;

}