
#include <bits/stdc++.h>
using namespace std;


class Solution {
    bool dfs(int node,int parent,vector<int>adj[],int vis[])
    {
        vis[node]=1;
        for(auto adjNode:adj[node]){
            if(!vis[adjNode]){
                if(dfs(adjNode,node,adj,vis)==true){
                    return true;
                }
            }
            else if(adjNode!=parent){
                return true;
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(i,-1,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}


//TIME COMPLEXITY: O(V+2E)+O(V)
//SPACE COMPLEXITY: O(V)+O(V)=O(V)