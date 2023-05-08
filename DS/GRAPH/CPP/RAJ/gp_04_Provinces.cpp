#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<int> adj[], vector<int> &vis)
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis);
            }
        }
    }

    int numProvinces(int n, vector<int> adj[])
    {
        vector<int> vis(n + 1, 0);
        int cc = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis);
                cc++;
            }
        }
        return cc;
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

    cout << (new Solution)->numProvinces(n, Adj);
    return 0;
}

// Space complexity: O(N)+O(n)

// Time Complexity: O(N)+O(V+2E)