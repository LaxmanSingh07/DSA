// Bst

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;

} *root = NULL;

void Insert(int key)
{
    struct Node *t = root;
    struct Node *r, *p;

    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->left = p->right = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
        {
            t = t->left;
        }
        else if (key > t->data)
        {
            t = t->right;
        }
        else
        {
            return;
        }
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->left = p->right = NULL;
    if (key < r->data)
    {
        r->left = p;
    }
    else
    {
        r->right = p;
    }
}

struct Node *search(int key)
{
    struct Node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
        {
            return t;
        }
        else if (key < t->data)
        {
            t = t->left;
        }
        else
        {
            t = t->right;
        }
    }
    return NULL;
}
void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->left);
        printf("%d ", p->data);
        Inorder(p->right);
    }
}

int main()
{
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);
    Inorder(root);

    struct Node *temp = search(20);
    printf("\n");
    if (temp)
    {
        printf("Element is found at %d\n", temp->data);
    }
    else
    {
        printf("Not found");
    }
    printf("\n");
}
