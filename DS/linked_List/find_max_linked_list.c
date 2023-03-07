#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// Node strcture 
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
// it become a global pointer

void create(int A[],int n){
int i;

struct Node *t, *last;
// first node;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=A[0];
first->next=NULL;
last=first;
for(int i=1;i<n;i++){
    t=(struct Node*) malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
int maxa(struct Node *p){
    int max=INT_MIN;
    while(p){
    if(max<p->data){
        max=p->data;
    }
        p=p->next;
    }
    return max;
}
int rmaxa(struct Node *p){
    int max=INT_MIN;
    if(p==0){
        return INT_MIN;
    }
    max=rmaxa(p->next);
    if(max>p->data)
        return max;
        else return p->data;
    }


int main(){
// creating a linked list inside the main fucntion 
int A[]={3,5,7,10,15};
create(A,5);
printf("Maximum element in the linked lisg is %d",maxa(first));
printf("Maximum element in the linked lisg is %d",rmaxa(first));
return 0;
}