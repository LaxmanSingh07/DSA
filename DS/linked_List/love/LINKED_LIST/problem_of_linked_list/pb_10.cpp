// wap to add two numbers reperesented by linked list

// wap to reverse a linked list

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

Node *reverse_linkedlist(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void insertAthead2(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *anstail = NULL;
    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if (first != NULL)
        {
            val1 = first->data;
        }
        int val2 = 0;
        if (second != NULL)
        {
            val2 = second->data;
        }
        // int sum=carry+first->data+second+data;
        int sum = val1 + val2;
        int digit = sum % 10;

        // create node and add in ans linked list
        insertAthead2(ansHead, anstail, digit);
        carry = sum / 10;
        if (first != NULL)
            first = first->next;
        if (second != NULL)
            second = second->next;
    }


    return ansHead;

}

Node *addTwolists(Node *first, Node *second)
{

    // step: reverse both the linked list
    first = reverse_linkedlist(first);
    second = reverse_linkedlist(second);

    // step2: add both ll
    Node *ans = add(first, second);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the total no of nodes ";
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

    Node *head2 = NULL;
    int m;
    cout << "Enter the no of elements in linked list 2";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "Ente the" << i + 1 << "th element";
        cin >> d;
        insertAthead(head2, d);

    }

    cout << endl;

    print(head1);
    print(head2);

    Node *ram = addTwolists(head1, head2);
    print(ram);

    return 0;
}