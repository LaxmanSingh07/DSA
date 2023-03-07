//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* A linked list node */

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insert()
{
    int n, value;
    n = 7;
    struct Node *temp;
    int arr[] = {10, 4, 9, 1, 3, 5, 9};
    for (int i = 0; i < n; i++)
    {
        value = arr[i];
        if (i == 0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}

// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution
{
public:
    void rearrange(struct Node *odd)
    {

        Node *curr, *prev, *future;
        curr = odd;

        Node *reverseNode = odd->next;

        while (curr != NULL)
        {
            prev = curr;
            curr = curr->next;
            // if(curr==NULL){
            //     break;
            // }
            future = curr->next;

            prev->next = future;
            if (future == NULL)
            {
                break;
            }
        }

        Node *past, *pres, *fut;
        past = NULL;
        pres = reverseNode;

        prev->next = NULL;

        while (pres != NULL)
        {
            fut = pres->next;
            pres->next = past;
            past = pres;
            pres = fut;
        }

        prev->next = past;
        // return head;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends