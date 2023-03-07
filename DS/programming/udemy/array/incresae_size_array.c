#include<stdio.h>
#include<stdlib.h>
int main(){

int *p,*q;

p=(int *)malloc(5*sizeof(int ));
p[0]=3; p[1]=5; p[2]=14; p[3]=45; p[4]=45; p[5]=4;


q=(int *)malloc(10* sizeof(int ));

for(int i=0;i<5;i++){
    q[i]=p[i];
}
free(p);
p=q;
q=NULL;
for(int i=0;i<10;i++){
    printf("%d \n",p[i]);
}
    return 0;
} 