#include <iostream>
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

node *buildTree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);
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
int main()
{
    node *root = NULL;
    int arr[] = {1, 3, 5, -1, -1, 11, -1, -1, 5, 17, -1, -1, -1};
    // build the tree
    root = buildTree(root);

    return 0;
}