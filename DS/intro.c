#include <stdio.h>
#include <malloc.h>
// cs usfca.edu
typedef struct n
{
    int coeff;
    int pow;
    struct n *next;
} Node;

void createList(Node **root)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Not enough memory available\n");
    }
    else
    {
        printf("Enter coefficient and its power:");
        scanf("%d%d", &temp->coeff,&temp->pow);
        temp->next = NULL;
        Node *curr = (*root);
        Node *prev = NULL;
        while (curr != NULL && curr->pow > temp->pow)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL)
        {
            temp->next = (*root);
            (*root) = temp;
        }
        else
        {
            temp->next = curr;
            prev->next = temp;
        }
    }
}

void print_Polynomial(Node *head)
{
    while (head != NULL && head->next)
    {
        printf("%dx^%d + ", head->coeff, head->pow);
        head = head->next;
    }
    if (head)
        printf("%dx^%d", head->coeff, head->pow);
    printf("\n");
}
Node *Node_maker(int pow, int fnum, int snum)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Not enough Memory\n");
    }
    else
    {
        temp->pow = pow;
        temp->coeff = fnum + snum;
        temp->next = NULL;
    }
    return temp;
}

void add_Polynomial(Node **result, Node *first, Node *second)
{

    if(first==NULL && second==NULL){
        (*result)=NULL;
    }
    else if(first==NULL){
        (*result)=second;
    }
    else if(second==NULL){
        (*result)=first;
    }
    else{
        
    Node *temp;
    Node *helper = (*result);
    while (first != NULL && second != NULL)
    {
        if (first->pow == second->pow)
        {
            temp = Node_maker(first->pow, first->coeff, second->coeff);
            first = first->next;
            second = second->next;
        }
        else if (first->pow > second->pow)
        {
            temp = Node_maker(first->pow, first->coeff, 0);
            first = first->next;
        }
        else
        {
            temp = Node_maker(second->pow, 0, second->coeff);
            second = second->next;
        }
        if (*result == NULL)
        {
            (*result) = (helper) = temp;
        }
        else
        {

            helper->next = temp;
            helper = temp;
        }
    }

    while (first != NULL)
    {
        temp = Node_maker(first->pow, first->coeff, 0);
        temp->pow = first->pow;
        temp->coeff = first->coeff;
    helper = temp;
    second = second->next;

        first = first->next;
    }
    while (second != NULL)
    {
        temp = Node_maker(second->pow, 0, second->coeff);
        temp->pow = second->pow;
        temp->coeff =  second->coeff;
 helper = temp;
        second = second->next;

        second = second->next;
    }
    }
}

int main()
{

    Node *p1 = NULL;
    Node *p2 = NULL;
    Node *t1 = NULL;
    int n, m;
    printf("Enter the total no of terms in first and second polynomial respectively\n");
    scanf("%d%d", &n, &m);
    printf("Enter terms of first Polynomial\n");
    for (int i = 0; i < n; i++)
        createList(&p1);
    t1 = NULL;
    printf("Enter terms of second Polynomial\n");
    for (int i = 0; i < m; i++)
    {
        createList(&p2);
    }
    printf("\n\nFirst polynomial\n");
    print_Polynomial(p1);
    printf("\nSecond polynomial\n");
    print_Polynomial(p2);
    Node *result = NULL;
    add_Polynomial(&result, p1, p2);
    printf("\nSUM OF BOTH THE POLYNOMIAL IS: \n");
    print_Polynomial(result);
    return 0;
}
