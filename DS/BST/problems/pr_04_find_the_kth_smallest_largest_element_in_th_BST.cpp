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

int solve(Node* root,int &i,int k){
    if(root==NULL){
        return -1;
    }
    //L
    int left=solve(root->left,i,k);
    if(left!=-1){
        return left;
    }
    //N
    i++;
    if(i==k){
        return root->data;
    }
    //R
    return solve(root->right,i,k);
}
int kthSmallest (Node* root,int k){
    int i=0;
    int ans=solve(root,i,k);
    return ans;
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to creat BST"<<endl;
    takeInput(root);
    cout<<search(root,21);

   
    return 0;
} 