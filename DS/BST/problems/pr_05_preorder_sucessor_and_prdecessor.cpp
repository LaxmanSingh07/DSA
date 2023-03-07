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

Node* maxVal(Node* root){
    Node*temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp;
}


Node* minVal(Node* root){
    Node*temp=root;
    while(temp->left){
        temp=temp->left;
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

pair<int,int> predeccessorSuccessor(Node* root,int key )
{
    // find key 
    int pred=-1;
    int succ=-1;
    Node* temp=root;
    while(temp->data!=key){
        if(temp->data>key){
            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right ;

        }

    }
    //pred and succ
    Node *leftTree=temp->left; 
    while(leftTree!=NULL)
    {
        pred=leftTree->data;
        leftTree=leftTree->right;
    }

    //succ 

    Node *Treeright=temp->right ;

    while(Treeright!=NULL)
    {
        succ=Treeright->data;
        Treeright=Treeright->left;
    }

pair<int ,int > ans=make_pair(pred,succ);
return ans;

}
int main()
{

    
    return 0;
} 