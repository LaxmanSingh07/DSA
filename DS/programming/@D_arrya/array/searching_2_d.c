// why do we nned to specify the column size, when passing a @d array as a parameter

#include<stdio.h>
#include<stdbool.h>
bool isPresent(int arr[][4],int target, int row, int col){
 for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        if(arr[i][j]==target){
            return 1;
        }
        }

    }
    return 0;
    }

int main(){

    int arr[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int target;
    printf("Enter the element you want to find ");
    scanf("%d",&target);

if(isPresent(arr,target,3,4 ))
    printf("Element is found");
else
    printf("not found");
    return 0;
}