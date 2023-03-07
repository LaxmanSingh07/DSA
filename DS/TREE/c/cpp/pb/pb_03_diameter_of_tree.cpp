#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left"<<data<<endl;
root->left=buildTree(root->left);
    cout<<"  Enter data for inserting at right"<<data<<endl;
root->right=buildTree(root->right);
    return root;


} 
    int diameter(Node* root) {
     
        // Your code here
        
        if(root==NULL){
            return 0;
        }
        
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+height(root->right)+1;
        
        int ans=max(op1,max(op2,op3));
        return ans;
    }
    
 

  int height(struct Node* node){
        //base case
        
        if(node==NULL){
            return 0;
        }
        
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        
        return ans;
        
    }
int main()
{
    Node* root=NULL;
int arr[]={1,3,5,-1,-1,11,-1,-1,5,17,-1,-1,-1};
//build the tree
    root=buildTree(root);
    cout<<height(root);
    
    return 0;
}