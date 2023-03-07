#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        printf("Stack in full\n");
        return;
    }
    t->data = x;
    t->next = top;
    top = t;
}

int pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}
int isOperand(char x)
{
    if (x == '*' || x == '+' || x == '-' || x == '/')
        return 0;
    return 1;
}
char *InToPos(char *infix)
{
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));

    int i, j;
    i = j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
    {
        postfix[j++] = pop();
    }
    j--;
    postfix[j] = '\0';

    return postfix;
}
int main()
{
    char *infix = "a+b*c";
    push('#');
    char *postfix = InToPos(infix);
    puts(postfix);

    return 0;
}
