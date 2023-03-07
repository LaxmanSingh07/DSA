#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

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
int main(){
    Node *root;

}