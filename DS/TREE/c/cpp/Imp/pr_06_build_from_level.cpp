#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


void buildFromLevel(node* &root){
    queue<node*>q;
       cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        
        q.pop();

        cout<<"Enter left node for"<<temp->data;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }

          cout<<"Enter right node for"<<temp->data;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }

    }
}
void levelOrderTraversal(node *root)
{
    // implementation using queue data strcture
    // use sepraor to show that level is complete
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();  
        if (temp == NULL)
        {
            // puranan level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still have some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout <<" "
            << temp->data
                 ;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    // int arr[]={1,3,7,-1,-1,11,-1,-1,5,17,-1,-1,-1};
    // build the tree
    buildFromLevel(root);
    cout << "printing the level order traversal output" << endl;
    levelOrderTraversal(root);

    return 0;
}