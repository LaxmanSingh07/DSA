#include<stdio.h>
#include<stdlib.h>
int main(){
int no_of_student;
char gender;
int sum;
scanf("%d",&no_of_student);
int *student=(int *)malloc(no_of_student*sizeof(int));
for(int i=0;i<no_of_student;i++){
    scanf("%d",student+i);
    sum=sum+ *(student+i);}
scanf("%c",&gender);
printf("%d",sum);
free(student);
    return 0;
}