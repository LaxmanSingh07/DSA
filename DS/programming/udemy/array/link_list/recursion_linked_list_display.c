//LL DISPLAY

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct  Node *next;
    
    
}*first=NULL; // this becomes a globally access


void Rdisplay(struct  Node *P)
{
    if(p!=NULL){
        printf("%d",p->data);
    }
    Rdisplay(p->next);;
};

int main(){
int a[]={1,2,3,4,5};
Rdisplay(first);
    return 0;
}