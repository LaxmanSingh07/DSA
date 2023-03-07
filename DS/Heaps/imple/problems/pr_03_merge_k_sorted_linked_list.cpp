#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    int i;
    int j;
    node(int data,int i,int j){
        this->data=data;
        this->i=i;
        this->j=j;
    }

};

class compare{
    public:
        bool operator()(node *a,node*b){
            return a->data>b->data;
        }
};

vector<int> mergeKsortedarray(vector<vector<int>>&KArrays,int k){
    priority_queue<node*,vector<node*>,compare>minheap;

    //step1:
    //insert all the first elements 

    for(int i=0;i<k;i++){
        node*tmp=new node(KArrays[i][0],i,0);
        minheap.push(tmp);
    }
    vector<int> ans;
    while(minheap.size()>0){
        node*temp=minheap.top();
        ans.push_back(temp->data);
        minheap.pop();
        int i=temp->i;
        int j=temp->j;

        if(j+1<KArrays[i].size()){
            node* next=new node(KArrays[i][j+1],i,j+1);
            minheap.push(next);
        }

    }
    return ans;
}


int main(){

}