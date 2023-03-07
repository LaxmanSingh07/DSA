#include<stdio.h>
int main(){

    int stud[4][2];
    int i,j;
    for(int i=0;i<=3;i++){
        printf("Enter roll no, and marks");
        scanf("%d %d",&stud[i][0],&stud[i][1]);
    }
    for(int i=0;i<=3;i++){
        printf("%d %d \n", stud[i][0],stud[i][1]);
    }

    return 0;
}

// initializing a 2-D array 

#include<stdio.h>
int main(){

int arr[][2]={
    {1234,56},{1212,33},{1434};
}
for(int i=0;i<sizeof(arr)/sizeof(arr[0]))
    return 0;
}