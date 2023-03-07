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

Node* solve(Node* root,int&k,int node)
{
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }

    Node*leftAns=solve(root->left,k,node);
    Node*rightAns=solve(root->right,k,node);

    if(leftAns!=NULL&&rightAns==NULL){
        k--;
        if(k<=0){
            //ans lock
            k=INT_MAX; //---> answaer lock
            return root;
        }
        return leftAns;
    }


    if(leftAns==NULL &&rightAns!=NULL)
    {
            k--;
        if(k<=0){
            //ans lock
            k=INT_MAX;
            return root;
        }
     
        return rightAns;
    }
    return NULL;
}

int KthAncestor(Node* root,int k,int node){
    Node* ans=NULL;
    solve(root,k,node);
    if(ans==NULL||ans->data==node){
        return -1;
    }
    return ans->data;
}

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
int main()
{
    Node* root=NULL;
int arr[]={1,3,5,-1,-1,11,-1,-1,5,17,-1,-1,-1};
//build the tree
    root=buildTree(root);
    int k=5;
    int node;
    Node* ans=solve(root,k,node);
    if(ans==NULL){
        cout<<"NOt present";
    }
    else{
        printf("kth Ancestor in tree");
    }
    return 0;
}