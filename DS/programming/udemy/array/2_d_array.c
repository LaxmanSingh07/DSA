#include<stdio.h>
#include<stdlib.h>
int main(){
int A[3][4]={{1,2,3,4},{2,4,6,8},{3,6,9,12}}; // this will created in stack 
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d",A[i][j]);
        printf("\n");
    }
}

int *B[3];
B[0]= (int *)malloc(4*sizeof(int ));
B[1]= (int *)malloc(4*sizeof(int ));
B[2]= (int *)malloc(4*sizeof(int ));
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d",B[i][j]);
        printf("\n");
    }
}

int **C;
C=(int **)malloc (3*sizeof(int ));
C[0]=(int *)malloc(4*sizeof(int ));

C[0][0]=12;C[0][1]=1; C[0][2]=2 ; C[0][3]=34; 
C[1]=(int *)malloc(4*sizeof(int ));
C[1][0]=12;C[1][1]=1; C[1][2]=2 ; C[1][3]=34;  
C[2]=(int *)malloc(4*sizeof(int ));
C[2][0]=12;C[2][1]=1; C[2][2]=2 ; C[2][3]=34; 

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d",C[i][j]);
        printf("\n");
    }
}

    return 0;
}