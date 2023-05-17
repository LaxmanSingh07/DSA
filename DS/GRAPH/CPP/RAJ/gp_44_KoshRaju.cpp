//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st, int marker)
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, adj, st, marker);
            }
        }

        if (marker == 0)
            st.push(node);
    }

public:
    // Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>> &adj)
    {
        vector<int> vis(V, 0);
        int marker = 0;
        stack<int> st;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, adj, st, marker);
            }
        }

        // reverse the graph

        vector<vector<int>> transpose(V);

        for (int i = 0; i < V; i++)
        {
            vis[i] = 0;
            for (auto it : adj[i])
            {
                // i --->it
                // reversed it--->i

                transpose[it].push_back(i);
            }
        }

        int scc = 0;
        marker = 1;
        while (!st.empty())
        {
            int node = st.top();
            st.pop();

            if (!vis[node])
            {
                scc++;
                dfs(node, vis, transpose, st, marker);
            }
        }
        return scc;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

// T.C: O(V+E)+O(V+E) +O(v+E)=O(V+E)
// S.C: O(V+E)+O(V)+O(V)=O(V+E)