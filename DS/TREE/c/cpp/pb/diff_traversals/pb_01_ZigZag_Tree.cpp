#include<iostream>
#include<vector>
#include<queue>


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

vector<int>ZigZang(node *root){
// void ZigZang(node *root,vector<int> &vt){

    vector<int>vt;
    
    if(root==NULL){
      return vt ;
    }
    bool flagltr=true;

queue<node *> temp;
temp.push(root);

while(!temp.empty()){
    int size=temp.size();
    vector<int> ans(size);

    for(int i=0;i<size;i++){

    node *frontpointer=temp.front();
    temp.pop();
    int index=flagltr?i:size-1-i;

    ans[index]=frontpointer->data;


    if(frontpointer->left){
        temp.push(root->left);
    }
    if(frontpointer->right){
        temp.push(root->right);
    }


    }

    flagltr=!flagltr;
    for(auto i:ans){
        vt.push_back(i);
    }


}
return vt;



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
// int arr[]={1,3,5,-1,-1,11,-1,-1,5,17,-1,-1,-1};
//build the tree
    root=buildTree(root);

    vector<int> vt;
    vt=ZigZang(root);
    

    for(int i=0;i<vt.size();i++){
        cout<<vt.at(i);
    }
    
    return 0;
}





//