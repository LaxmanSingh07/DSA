

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// my approach
/*
class Solution{
    public:
    int getMiddle(Node *head)
    {int count=0;
        struct Node *p=head;
        
        while(p!=NULL){
            count++;
            p=p->next;
        }
        if((count%2==0)){
            count=count/2;


        }
        else{
            count=((count/2)+(count/2)+1)/2;
        }
        int j;
        count++;
        struct Node *q=head;
        while(count!=0){
             j=q->data;
            q=q->next;
            count--;
        }
        return j;
    }
};*/
class Solution{
    public:
    int getMiddle(Node *head)
    {
        if(head==NULL){
            return 0;
        }
      else  if(head->next==NULL){
            return head->data;
        }
        else if(head->next->next==NULL){
            return head->next->data;
        }
        else{
        struct Node *fast=head->next;
        struct Node *slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            
        }
        return slow->data;
        }
    }
};




int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
  // } Driver Code Ends