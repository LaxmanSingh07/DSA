// Wap to remove duplicates from sorted list

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
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with dat " << value << endl;
    }
};

Node *uniqueSortedList(Node *head)
{
    // empty list

    if (head == NULL)
    {
        return NULL;
    }
    // non-empty list

    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node* next_next = curr->next->next;
            Node *node_to_delete = curr->next;
            delete (node_to_delete);
            curr->next=next_next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
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

    if(head==NULL){
        cout<<"list is empty";
        return ;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    cout << "Enter the total no of nodes ";
    int n;
    cin >> n;
    Node *head = NULL;
    int d;
    for (int i = 0; i < n; i++)
    {
        cout << "Ente the" << i + 1 << "th element";
        cin >> d;
        insertAthead(head, d);
    }
    print(head);
    cout << endl;
    head = uniqueSortedList(head);

    print(head);

    return 0;
}