#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     int arr[n][n];
    //     for(int j=0;j<n;j++)
    //         scanf("%d",&arr[i][j]);
    // }
    for(int i=0;i<n;i++){
        int arr[n][n];
        for(int j=0;j<n;j++)
            scanf("%d",&arr[j][i]);
    }
    for(int i=0;i<n;i++){
        int arr[n][n];
        for(int j=0;j<n;j++)
            printf("%d",arr[i][j]);
    }
    printf("\n");
}