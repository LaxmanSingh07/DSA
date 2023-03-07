// dem: 2-D array is an array of arrays 

/*#include<stdio.h>
int main()

{


int arr[4][2];
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        printf("%d",arr[i][j]);
    }
}
    return 0;
}*/


// this is another way 
/*#include<stdio.h>
int main(){

int s[4][2]={{1234,56},{1212,22},{56,65},{890,1000}};
for(int i=0;i<=3;i++){
    printf("  %u ",s[i]);
}
    return 0;
}*/

//pointer notation t oacces 2-D array elements 

#include<stdio.h>
int main(){

    int s[4][2] ={ {1234,56}, { 1212,33},{1434,80},{1321,34}};
    int i,j;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d",*(*(s+i)+j));
            printf("\n");
        }
    }
    return 0;
}