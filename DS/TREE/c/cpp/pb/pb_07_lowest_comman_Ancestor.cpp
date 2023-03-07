//lowest comman Ancestor

//time comlex O(n) and space complexity is )(height of tree )
#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

//time ---> O()
//spaace --->O(h)

node* lca(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }

    node* leftAns=lca(root->left,n1,n2);
    node* rightAns=lca(root->right,n1,n2);

    if(leftAns!=NULL&&rightAns!=NULL)
    {
        return root;
    }

    else if(leftAns!=NULL&&rightAns==NULL){
        return leftAns;
    }
    else if(leftAns==NULL&&rightAns!=NULL){
        return rightAns;
    }
    else{
        return NULL;
    }

}
node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    root=new node(data);
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
    node* root=NULL;

    root=buildTree(root);
    
    return 0;
}