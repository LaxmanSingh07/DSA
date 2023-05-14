#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> static bfsOfGraph(int v, vector<int> adj[])
    {
        int vis[v] = {0};
        queue<int> q;
        vis[0] = 1;
        q.push(0);

        vector<int> ans;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
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

    vector<int> ans = (new Solution)->bfsOfGraph(n, Adj);
    return 0;
}

// TIME COMPLEXITY: O(V+E)
// SPACE COMPLEXITY: O(V+E)+O(V)+O(V) = O(V+E)