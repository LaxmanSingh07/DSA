#include<iostream>
#include<vector>
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

void solve(node* root,int k,int &count,vector<int> path){
    //base case
    if(root==NULL){
        return ;
    }
    path.push_back(root->data);

    //left call
    solve(root->left,k,count,path);
    //right call
    solve(root->right,k,count,path);

    //check for k sum
    int sum=0;
    for(int i=path.size()-1;i>=0;i--){
            sum+=path[i];
            if(sum==k){
                count++;
            }
    }
    path.pop_back();

}
int Sumk(node* root,int k){
    vector<int> path;
    int count=0;
    solve(root,k,count,path);

}
int main()
{
    node* root=NULL;
int arr[]={1,3,5,-1,-1,11,-1,-1,5,17,-1,-1,-1};
//build the tree
    root=buildTree(root);
    
    return 0;
}