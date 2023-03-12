//Tries REPRSENATION 
//Tries represnation is differnet 
//we are allocating the menory of the null 

//isEnd strore wheather the character is the last character of the word or not 

#include<iostream>
using namespace std;

struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        isEnd=false;
        for(int i=0;i<26;i++)
        {
            child[i]=NULL;
        }
    }
};

bool isEmpty(TrieNode *root)
{
    for(int i=0;i<26;i++)
    {
        if(root->child[i]!=nullptr){
            return false;
        }
    }
    return true;
}
TrieNode *delkey(TrieNode *root,string &key,int i)
{
    if(root==nullptr){
        return  nullptr;  
    }
    if(i==key.length()){
        root->isEnd=false;
        if(isEmpty(root)==true)
        {
            delete(root);root=nullptr;
            
        }
        return root;
    }
    int index=key[i]-'a';
    root->child[index]=delkey(root->child[index],key,i+1);
    if(isEmpty(root)&&root->isEnd==false)
    {
        delete(root);root==nullptr;
    }
    return root;
}

void inset(TrieNode *root,string &key)
{
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]='a';
        if(curr->child [index]==NULL)
        {
            curr->child[index]=new TrieNode();
            curr=curr->child[index];
        }
        
    }
    curr->isEnd=true;
}

bool search(TrieNode *root,string &key)
{
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]='a';
        if(curr->child[index]==NULL){
            return false;
        }
        curr=curr->child[index];
    }
    return true;
}



int main()
{

    return 0;
}