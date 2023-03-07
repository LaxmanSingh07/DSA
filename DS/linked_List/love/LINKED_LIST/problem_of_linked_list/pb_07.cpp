// wap to merge two sorted linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *solve(Node *&first, Node *&second)
{
if(first->next==NULL){
    first->next=second;
    return first;
}
    Node *curr1 = first;
    Node *next1 = first->next;
    Node *curr2 = second;
    Node *next2 = second->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {

            // add node in b/w the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update poointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 will move towards right
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

// approach
Node *sortTwolists(Node *&head1, Node *&head2)
{
    // if first list is empty then our ans will be second list
    if (head1 == NULL)
    {
        return head2;
    }
    // if second list is empty then our ans will be first list
    if (head2 == NULL)
        return head1;

// if only one element is present in first linked list 

    if (head1->data <= head2->data)
    {
        head1 = solve(head1, head2);
        return head1;
    }
    else
    {
        head2 = solve(head2, head1);
        return head2;
    }
}

void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *temp1 = head;
    while ((temp1->next) != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    cout << "Enter the total no of nodes of first linked list ";
    int n;
    cin >> n;
    Node *head1 = NULL;
    int d;
    for (int i = 0; i < n; i++)
    {
        cout << "Ente the" << i + 1 << "th element";
        cin >> d;
        insertAthead(head1, d);
    }
    print(head1);
    cout << endl;
    //    head= reverse_linkedlist(head);
    cout << "Enter the total no of nodes of second linked list ";
    int m;
    cin >> m;
    Node *head2 = NULL;

    for (int i = 0; i < m; i++)
    {
        cout << "Ente the" << i + 1 << "th element";
        cin >> d;
        insertAthead(head2, d);
    }

    print(head2);

    cout << "sorted linked list is as follows:";
    cout << endl;

    Node *mainhead = sortTwolists(head1, head2);
    print(mainhead);

    return 0;
}