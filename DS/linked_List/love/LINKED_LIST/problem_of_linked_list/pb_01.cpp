//wap to reverse a linked list 

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};


void insertAthead(Node* &head,int d){
    Node *temp=new Node(d);
    if(head==NULL){
        head=temp;
        return ;
    }

    Node* temp1=head;
    while((temp1->next)!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;




    
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


//1. it is an iterative solution time complexity O(n) and space will be O(1)
// Node* reverse_linkedlist(Node* &head){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;

// }


//2. it is a recursive solution tim complexity and as well as space complexity will  be O(n)

// void sreverse_linkedlist(Node* &head,Node*& curr,Node* & prev){
//     //base case 
//     if(curr==NULL){
//         head=prev;
//         return ;
//     }
//     Node* forward=curr->next;
//     sreverse_linkedlist(head,forward,curr);
//     curr->next=prev;


// }

// Node* reverse_linkedlist(Node* &head){
//     Node* curr=head;
//     Node* prev=NULL;
//     sreverse_linkedlist(head, curr,prev);
//     return head;
// }

//3. same recursion
Node* reverse_linkedlist(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* chotahead=reverse_linkedlist(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}

int main(){
    cout<<"Enter the total no of nodes ";
    int n;
    cin>>n;
    Node* head=NULL;
    int d;
    for(int i=0;i<n;i++){
        cout<<"Ente the"<<i+1<<"th element";
        cin>>d;
        insertAthead(head,d);
    }
    print(head);
    cout<<endl;
   head= reverse_linkedlist(head);
    print(head);
    
    return 0;
}