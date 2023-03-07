#include <iostream>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        left = NULL;
        right = NULL;
        this->data = data;
    }
};
class Solution
{
public:
    int findPos(int in[], int ele, int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (in[i] == ele)
            {
                return i;
            }
        }
        return -1;
    }
    Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
    {

        // base case

        if (index >= n || inorderEnd > inorderEnd)
        {
            return NULL;
        }
        int element = pre[index++];
        Node *root = new Node(element);
        int position = findPos(in, element, n);

        // reursive calles

        root->left = solve(in, pre, index, inorderStart, position - 1, n);
        root->right = solve(in, pre, index, position + 1, inorderEnd, n);
    }

    Node *buildTree(int in[], int pre[], int n)
    {
        int preOrderIndex = 0;
        Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
        return ans;
    }
};

int main()

{
    int in[] = {3, 1, 4, 0, 5, 2};
    int pre[] = {0, 1, 3, 4, 2, 5};
    for (int i = 0; i < 6; i++)
    {
        cout << in[i] << " ";
    }
Solution s;
Node*root=s.buildTree(in,pre,6);

    return 0;
}