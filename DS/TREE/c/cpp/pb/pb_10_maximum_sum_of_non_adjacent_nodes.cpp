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

pair<int, int> solve(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);

    pair<int, int> res;

    res.first = root->data + left.second + right.second;

    res.second = max(left.first, left.second) + max(right.first, right.second);
    return ans;
}
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

int getMaxSum(Node *root)
{
    pair<int, int> ans = solve(root);
    return max(ans.first, ans.second);
}

int main()
{
    Node *root = NULL;
    int arr[] = {1, 3, 5, -1, -1, 11, -1, -1, 5, 17, -1, -1, -1};
    // build the tree
    root = buildTree(root);
    int k = 5;
    int node;
    int ans = getMaxSum(root);
    cout << ans << endl;
    return 0;
}