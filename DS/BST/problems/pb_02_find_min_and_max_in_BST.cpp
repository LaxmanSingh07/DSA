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

Node* minVal(Node* root){
    Node*temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp;
}
Node* deleteFromBST(Node* root,int value){
    //base case

    if(root==NULL){
        return NULL;
    }
    if(root->data==value){
        //0 child
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }


        //1 child 

        //left child 
        
        if(root->left!=NULL &&root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }

        //right child 

        if(root->left==NULL &&root->right!=NULL)
        {
            Node *temp=root->right;
            delete root;
            return temp;
        }


        //2 child 
        if(root->left!=NULL&& root->right!=NULL){
            int mini=(minVal(root->right))->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
         }

    
    }
    //going to the right part
    else if(root->data>value){
      root->left = deleteFromBST(root->left,value);
      return root;
    }
    else 
    {
        root->right=deleteFromBST(root->right,value);
        return root;
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

Node* maxVal(Node* root){
    Node*temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp;
}

void inorderTraversal(Node* root){
    //base case 
    if(root==NULL){
        return ;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    //base case 
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //base case 

    if(root==NULL){
        return ;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            //purana level complete traverse 
            cout<<endl;
            if(!q.empty()){
                //queue still has some child 
                q.push(NULL);

            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to creat BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"PreOrder"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"PostOrder"<<endl;
    postOrderTraversal(root);
        cout<<endl;

    // 50 20 70 10 30 90 110 -1
    root=deleteFromBST(root,30);

      cout<<"PreOrder"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"PostOrder"<<endl;
    postOrderTraversal(root);
    
    return 0;
} 