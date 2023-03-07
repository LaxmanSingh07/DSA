// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);

 // } Driver Code Ends
//User function Template for C


// time complexity is O(n) and space solution o(1)
// struct Node* reverseList(struct Node *head)
//     {
//         struct Node *p = head,*q=NULL,*r=NULL;
//         while(p!=NULL){
//             r=q;
//             q=p;
//             p=p->next;
//             q->next=r;
//         }
//         return q;
//     }

//recurisve approach
// call by reference is must 
void reverseList(struct Node* &head, struct Node *curr, struct Node *prev){
//base case
if(curr==NULL){
    head=prev;
    return;
}
struct Node *forward=curr->next;
reverseList(head,forward,curr);
curr->next=prev;

} 
struct Node* reverseLinkedList(struct Node* head){
    struct Node*curr =head;
   struct Node* prev=NULL;
    reverseList(head,curr,prev);
    return head;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      start = reverseLinkedList(start);
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 
 void display(struct Node *head)
{
   while(head!=NULL)
  {
   printf("%d ",head->data);
    head=head->next;
  }
}




  // } Driver Code Ends