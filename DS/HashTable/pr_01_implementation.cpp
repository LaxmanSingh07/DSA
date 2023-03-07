// #include <iostream>
// #include <map>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     // in map data will store in the form of key value pair

//     // creation
//     unordered_map<string, int> m;

//     // insertion
//     pair<string, int> p = make_pair("laxman", 3);
//     m.insert(p);

//     // 2
//     pair<string, int> q{"singh", 2};
//     m.insert(q);

//     // 3
//     m["mera"] = 1;
//     m["mera"] = 2; // updation in the value

//     // search

//     cout << m["mera"] << endl;
//     cout << m.at("mera") << endl;

//     // cout<<m.at("se")<<endl;    ----> it will give an error
//     // cout<<m["se"]<<endl; // if the key not present it will make the entry the value

//     // if we change the sequence of afargiven two liness then let's see what happend
//     cout << m["se"] << endl;    // if the key not present it will make the entry the value
//     cout << m.at("se") << endl; //  ----> it will give an error

//     // size
//     cout << "size is : " << endl;
//     cout << m.size() << endl;

//     // to check presence
//     cout << m.count("Bro") << endl;

//     // erase
//     m.erase("laxman");
//     cout << m.size() << endl;

//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second;
//     }

//     // iterator
//     unordered_map<string, int>::iterator it = m.begin();
//     while (it != m.end())
//     {
//         cout << it->first << " " << it->second;
//         it++;
//     }
//     return 0;
// }
//{ Driver Code Starts
// Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node *next;

    Node(string x)
    {
        data = x;
        next = NULL;
    }
};

Node *newNode(string str)
{
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}

bool compute(struct Node *root);

void print(Node *root)
{
    Node *temp = root;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    // your code goes here
    int T = 1;

    while (T--)
    {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++)
        {
            string str = "abcddcba";
            if (head == NULL)
                head = temp = new Node(str);
            else
            {
                temp->next = new Node(str);
                temp = temp->next;
            }
        }
        if (compute(head))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends

/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
bool compute(Node *root)
{
    Node *curr = root;
    Node *prev = root;

    while (curr != NULL && curr->next != NULL)
    {
        prev = prev->next;
        curr = curr->next;
        if (curr->next)
        {
            curr = curr->next;
        }
    };

    Node *ll = prev;

    curr = prev->next;
    Node *fu;
    while (curr)
    {
        fu = curr->next;
        curr->next = ll;
        ll = curr;
        curr = fu;
    }
    prev->next = NULL;
    Node *head = root;

    while (head)
    {
        if (head->data != ll->data)
        {
            return false;
        }
        head = head->next;
        ll = ll->next;
    }
    return true;
}
