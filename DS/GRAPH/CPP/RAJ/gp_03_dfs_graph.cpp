#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ans)
    {
        ans.push_back(node);
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        vector<int> vis(V + 1, 0);
        dfs(0, adj, vis, ans);
        return ans;
    }
};

int main()
{
    int n, m, u, v;
    cin >> n >> m;
    vector<int> Adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        Adj[u].push_back(v);
    }

    vector<int> ans = (new Solution)->dfsOfGraph(n, Adj);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// TIME COMPLEXITY: O(V+E)
// SPACE COMPLEXITY: O(V+E)+O(V)+O(V) = O(V+E)