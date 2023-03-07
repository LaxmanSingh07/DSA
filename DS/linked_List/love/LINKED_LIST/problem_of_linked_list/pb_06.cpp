// wap to sort linked list of 0s 1s 2s

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

// naive apporach
/*Node *sortList(Node *&head)
{
    int zerocnt = 0;
    int onecnt = 0;
    int twocnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocnt++;
        }
        else if (temp->data == 1)
        {
            onecnt++;
        }
        else if (temp->data == 2)
        {
            twocnt++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zerocnt != 0)
        {
            temp->data = 0;
            zerocnt--;
        }
        else if (onecnt != 0)
        {
            temp->data = 1;
            onecnt--;
        }
        else if (twocnt != 0)
        {
            temp->data = 2;
            twocnt--;
        }
        temp = temp->next;
    }
    return head;
}
*/

// 2nd. Approach --> concept of dummy node 

void insertAttail(Node* &tail,Node* curr){

    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head){
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;


    Node* curr=head;
    //create separte list 

    while (curr!=NULL)
    {
        int value=curr->data;
        if(value==0){
            insertAttail(zerotail,curr);
        }
        else if(value==1){
            insertAttail(onetail,curr);
        }
        else if (value==2){
            insertAttail(twotail,curr);
        }
        curr=curr->next;
    }
    // merge all 3 lists

    if(onehead->next!=NULL){ // 1's list in non empty
        zerotail->next=onehead->next;
    }
    else{
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;

head=zerohead->next;
    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;
    
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

void print(Node *head)
{

    if (head == NULL)
    {
        cout << "list is empty";
        return;
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
    

    head = sortList(head);
    print(head);

    return 0;
}