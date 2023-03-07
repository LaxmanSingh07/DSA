#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void creat(int a[],int n){
    int i;
    struct NOde *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int count(struct Node *p){
    int l=0;
    while(p){
        l++;
       p= p->next;
    }
}

int main(){

int A[]={3,5,7,10,15};
creat(A,5);
printf("length is %d", count(first));
    return 0;
}