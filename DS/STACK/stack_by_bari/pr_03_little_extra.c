#include <stdio.h>

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("Stack is full");
        return;
    }
    t->data = x;
    t->next = top;
    top = t;
}

int pop()
{
    struct Node *temp = top;
    if (temp == NULL)
    {
        printf("Stack underflow");
        return -1;
    }
    int x;
    temp = top;
    top = top->next;
    x = temp->data;
    free(temp);
}

void Display()
{
    struct Node *p = top;
    while (p != NULL)
    {
        printf("%c", p->data);
        p = p->next;
    }
    printf("\n");
}
int isBalanced(char *exp)
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' && top->data == '(')
        {
            pop();
        }
        else if (exp[i] == ']' && top->data == '[')
        {
            pop();
        }
        else if (exp[i] == '}' && top->data == '{')
        {
            pop();
        }
    }
    if (top == NULL)
        return 1;
    return 0;
}

int main()
{
    char exp[100];
    printf("Enter the string which you want to check");
    gets(exp);
    Display();
    printf("%d", isBalanced(exp));

    return 0;
}