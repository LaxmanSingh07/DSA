// SUM OF THE LONGEST BLOODLINE 
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left" << data << endl;
    root->left = buildTree(root->left);
    cout << "  Enter data for inserting at right" << data << endl;
    root->right = buildTree(root->right);
    return root;
}

//space ---> 0(h)  ------> in case of non-skew tree
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
void solve(Node* root, int sum,int &maxSum,int len,int &maxLen){
    if(root==NULL){
        if(len>maxLen){
            maxLen=len;
            maxSum=sum;
        }
        else if(len==maxLen){
            maxSum=max(sum,maxSum);
        }
        return ;
    }
    sum=sum+root->data;
    
    solve(root->left,sum,maxSum,len+1,maxLen);
    solve(root->right,sum,maxSum,len+1,maxLen);
    
}
    
    int sumOfLongRootToLeafPath(Node *root)
    {
     int len=0;
     int maxLen=0;
     int sum=0;
     
     int maxSum=INT_MIN;
     
     solve(root,sum,maxSum,len,maxLen);
     
     return maxSum;
    }

int main()
{
    Node *root = NULL;
    int arr[] = {1, 3, 5, -1, -1, 11, -1, -1, 5, 17, -1, -1, -1};
    // build the tree
    root = buildTree(root);
int k=sumOfLongRootToLeafPath(root);
    return 0;
}