#include <bits/stdc++.h>
using namespace std;

class Solution
{
protected:
    bool checkdfs(int start, int V, vector<int> adj[], int color[], int currColor)
    {
        color[start] = currColor;
        for (auto it : adj[start])
        {
            if (color[it] == -1)
            {
                if (!checkdfs(it, V, adj, color, (!currColor)))
                {
                    return false;
                }
            }
            else if (color[it] == currColor)
            {
                return false;
            }
        }
        return true;
    }

public:
    bool isBipartite(int V, vector<int> adj[])
    {

        int color[V];
        for (int i = 0; i < V; i++)
        {
            color[i] = -1;
        }

        for (int i = 0; i < V; i++)
        {
            if (color[i] == -1)
            {
                if (!checkdfs(i, V, adj, color, 0))
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}