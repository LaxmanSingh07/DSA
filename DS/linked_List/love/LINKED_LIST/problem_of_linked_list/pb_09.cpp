// wap to check wheather the given linked list is palindrome or not



#include <iostream>
#include <vector>
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

// 1. given below first two function is the part of first approach
/*bool checkpalindrome(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool isPlaindrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkpalindrome(arr);
}
*/

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = slow->next;

    while (fast != NULL && fast->next != NULL)

    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = prev;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool check_halves(Node *head1, Node *mid_ne)
{
    while (mid_ne != NULL)
    {
        if (head1->data != mid_ne->data)
        {
            return false;
        }
        head1 = head1->next;
        mid_ne = mid_ne->next;
    }
    return true;
}
bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    // step1--> find the middle

    Node *middle = getMid(head);

    // step2 : reverse list after middle
    Node *temp = middle->next;
    middle->next = reverse(temp);

    bool k = check_halves(head, middle->next); // step 3: compare bothe halves
    // step4: repeat sept 2;
    temp = middle->next;
    middle->next = reverse(temp);
    return k;
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

    print(head);
    cout << endl
         << isPalindrome(head);

    return 0;
}