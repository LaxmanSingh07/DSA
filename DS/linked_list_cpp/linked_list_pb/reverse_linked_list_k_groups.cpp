// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}



class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
    if(head==NULL){
        return NULL;
    }
    
    //step:: reverse first k nodes
    node* next1=NULL;
    node* curr=head;
    node* prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
        count++;
    }
    //setp : recrusion dekh lega
    if(next1!=NULL){
        head->next=reverse(next1,k);
    }
    //step3: return head of reversed list 
    return prev;
    
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends