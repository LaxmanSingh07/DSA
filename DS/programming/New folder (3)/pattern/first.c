#include<stdio.h>
int main(){
int rows,column;
scanf("%d %d",&rows,&column);
for(int i=1;i<=rows;i++){
    for(int j=1;j<=column;j++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}