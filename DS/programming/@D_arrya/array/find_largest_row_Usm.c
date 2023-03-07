// wap to find the largest row sum

#include<stdio.h>
#include<limits.h>
int largestRowSum(int arr[][4],int row , int col){
    int maxi= INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(maxi<sum)
        {
            rowIndex=i;
            maxi=sum;
        }
    }
    printf("The maximum sum is %d",maxi);

}
int main(){
    int n, m;
    printf("Enter the no of rows and column");
    scanf("%d %d",&n,&m);
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr[i][j]);
        } 

(largestRowSum(arr,n,m);
return 0;
     }