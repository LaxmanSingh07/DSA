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
// sum of the longest Bloodline of a Tree (Sum of Nodes on the longest path from root to leaf)
 void Solve(n
 ode* root,int sum,int &maxSum,int len,int &maxlen){
        //if base case 
        if(root==NULL){
            if(len>maxlen){
                maxlen=len;
                maxSum=sum;
            }
            else if(len==maxlen){
                maxSum=max(sum,maxSum);
            }
            return ;

        }
        sum=sum+root->data;
        Solve(root->left,sum,maxSum,len+1,maxlen);
        Solve(root->right,sum,maxSum,len+1,maxlen);
    }

int sumOfLongRootToLeafPath(Node* root){
    int len=0;
    int maxlen=0;
    int sum=0;
    int maxSum=INT_MIN;
    Solve(root,sum,maxSum,len,maxlen);
    return maxSum;
}


int main()
{
    node* root=NULL;
//build the tree
    root=buildTree(root);
    
    return 0;
}