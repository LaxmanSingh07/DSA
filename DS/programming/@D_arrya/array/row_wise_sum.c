#include<stdio.h>
#include<limits.h>

void sum_row(int arr[][4],int row, int col){
    for(int i=0;i<row;i++ ){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        printf("%d",sum);
    }
}

int largestROWsum(int arr[][3], int row,int col){
    int maxi=INT_MIN;
    for(int i=0;i<row;i++ ){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
        }
}
}
int main(){


int arr[3][4];
printf("Enter the elemnets");
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&arr[i][j]);

    }
}

sum_row(arr,3,4);

    return 0;
}