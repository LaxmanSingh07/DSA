#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n,m,u,v;
    cin>>n>>m;
    vector<int>Adj[n+1];
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        Adj[u].push_back(v);
    }

    return 0;
}