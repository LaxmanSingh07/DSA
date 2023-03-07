#include<stdio.h>
#include<stdlib.h>
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
void Display(struct Node *p){
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    }
}

void RDisplay(struct Node *p){
    if(p!=NULL){
        RDisplay(p->next);
        printf("%d\t",p->data);

    }
}


int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p){
    if(p!=NULL){
        return Rcount(p->next)+1;
    }
    else{
        return 0;
    }
}
int sum(struct Node *p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}
int rsum(struct Node *p){
    if(p!=NULL){
        return rsum(p->next)+p->data;
    }
    else{
        return 0;
    }
}
int main(){
// creating a linked list inside the main fucntion 
int A[]={3,5,7,10,15};
create(A,5);
Display(first);
printf("\n");
RDisplay(first);
printf("length is %d",count(first));
printf("%d",Rcount(first));
printf(" sum is %d\n",sum(first));
printf(" sum is %d\n",rsum(first));

    return 0;
}