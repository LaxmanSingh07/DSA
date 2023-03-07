#include <stdio.h>

typedef struct n
{
    struct n *left;
    int data;
    int height;
    struct n *right;
} Node;

int NodeHeight(Node *root){
    int hl,hr;

    hl= (root &&root->left?root->left->height:0);
    hr= (root &&root->right?root->right->height:0);
    return hl>hr?hl+1:hr+1;

}

int BalanceFactor(Node *root){
     int hl,hr;

    hl= (root &&root->left?root->left->height:0);
    hr= (root &&root->right?root->right->height:0);
    return hl-hr;
}


Node * LLRotation(Node * root)
{
    Node *pl=root->left;
    Node *plr=pl->right;
    pl->right=root;

    root->left=plr;
    root->height=NodeHeight(root);
    pl->height=NodeHeight(pl);

    return pl;

}

Node *LRRotation(Node *root)
{
    Node *temp=root;
    Node *pl=root->left;
    Node *plr=pl->right;
    pl->right=plr->left;
    root->left=plr->right;

    plr->left=pl;
    plr->right=root;

    pl->height=NodeHeight(pl);
    root->height=NodeHeight(root);
    plr->height=NodeHeight(plr);


if(temp==root){
    root=plr;
}
    return plr;
}

Node *RLRotaion(Node *root){
    return NULL;
}

Node *RRRotation(Node *root)
{
    return NULL;
}

Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->data = key;
        temp->left = temp->right = NULL;
        temp->height=1;
        return temp;
    }
    else if (root->data < key)
    {
        root->right = insert(root->right, key);
    }
    else 
    {
        root->left = insert(root->left, key);
    }
    //Ll rotation 




    //at the returning time 

    root->height=NodeHeight(root);

    if(BalanceFactor(root)==2 &&BalanceFactor(root->left)==1){
        return LLRotation(root);
    }
    else if(BalanceFactor(root)==2 &&BalanceFactor(root->left)==-1){
        return LRRotation(root);
    }
    // else if(BalanceFactor(root)==-2 &&BalanceFactor(root->left)==-1){
    //     return RRRotation(root);
    // }
    // else if(BalanceFactor(root)==-2 &&BalanceFactor(root->left)==1){
    //     return RRRotation(root);
    // }

    return root;

}

void PrintTree(Node *root)
{
       if (root)
    {
        PrintTree(root->left);
        printf("%3d", root->data);
        PrintTree(root->right);
    }
}


int main()
{
    int n;
    printf("Enter the total numbers of the node in the tree");
    scanf("%d", &n);
    Node *root = NULL;
    int data;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data of the node\n");
        scanf("%d", i+1);
        root = insert(root, data);
    }

    PrintTree(root);
    return 0;
}