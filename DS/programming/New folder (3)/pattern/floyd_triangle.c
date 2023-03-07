#include<stdio.h>
int main(){

int c=1;
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",c++);
    }
    printf("\n");
}
    return 0;
}