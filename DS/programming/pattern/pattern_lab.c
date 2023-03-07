#include<stdio.h>
int main(){
int arr[100];
    int n;
    int i=1,j=1;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            if((i==1||j==1||j==n||i==n)&&n){
                printf("%d",n);
            }
            else{
                printf(" ");
            }
            
            
        }
        printf("\n");

        
        
            
        }
    }

    return 0;
}