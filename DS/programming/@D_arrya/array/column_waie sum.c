#include<stdio.h>
void sum(int arr[][m],int n, int m){
int main(){
    int n,m;
    printf("Enter the no of rows and the column");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }

    }
    sum(arr,n,int m);
}