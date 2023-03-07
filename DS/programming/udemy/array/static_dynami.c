// #include<stdio.h>
// int main(){

// int n;
// scanf("%d",&n);
// int arr[n];
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// for(int i=0;i<n;i++){
//     printf("%d",arr[i]);
// }
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int mai(){

int A[5]={1,2,3,4,5};
int *p;
p=(int *) malloc (5 * sizeof(int ));
p[0]=89;
p[1]=3;
p[2]=3;
p[3]=31;
p[4]=33;


for(int i=0;i<5;i++){
    printf("%d",A[i]);


}

printf("\n");
for(int i=0;i<5;i++){
    printf("%d",p[i]);
}
free(p);
p=NULL;
    return 0;
}