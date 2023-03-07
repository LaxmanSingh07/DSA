#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

//TIME COMPLXITY OF INSERTION 
// log(n)

Node* insertIntoBst(Node* &root,int d){
    //base case

    if(root==NULL){
        root=new Node(d);
        return  root ;
    }
    if(d>root->data){
        // we have to insert in right of the binary tree
        root->right=insertIntoBst(root->right,d);

    }
    else{
        //we have to insert in left part of binary tree

        root->left=insertIntoBst(root->left,d);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    
    while(data!=-1){
        insertIntoBst(root,data);
    cin>>data;
    }
}


//Time complexity for simple iterative approach is O(n)
// Space Complexity ----> O(n)
bool search(Node* root, int x) {

   if(root==NULL){
       return false;
       
   }
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}

bool recursive_search(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return recursive_search(root->left,x);
    }
    else{
       return  recursive_search(root->right,x);
    }
}
Node* LcaInBST(Node * root,Node *p,Node *Q)
{
    //base case 

    if(root==NULL){
        return NULL;
    }
    if(root->data <p->data && root->data<Q->data){
        return LcaInBST(root->right,p,Q);

    }
    if(root->data > p->data&&root->data>Q->data)
    {
        return LcaInBST(root->left,p,Q);
    }
    return root;
}
Node* secondLcaInBst(Node *root,Node*p ,Node*Q){
    if(root==NULL){
        return NULL;

    }
    while(root!=NULL)
    {
        if(root->data<p->data&&root->data<Q->data)
        {
            root=root->right;
        }

      else  if(root->data>p->data&&root->data>Q->data){
            root=root->left;
        }
        else{
            return root;
        }
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to creat BST"<<endl;
    takeInput(root);
    cout<<search(root,21);

   
    return 0;
} 