#include<iostream>
using namespace std;

void printAllPath(vector<vector<int>>&graph,int src,int dest,string path)
{
    if(src==dest){
        cout<<path+dest<<endl;
        return ;
    }
    for(auto it:graph[src]){
        printAllPath(graph,it,dest,path);
    }
}

int main()
{

    return 0;
}