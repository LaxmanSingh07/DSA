#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	bool isPossible(int V, vector<pair<int, int>> &pre)
	{
		// Code here
		vector<int> adj[V];
		for (auto it : pre)
		{
			adj[it.first].push_back(it.second);
		}

		int indegree[V] = {0};
		for (int i = 0; i < V; i++)
		{
			for (auto it : adj[i])
			{
				indegree[it]++;
			}
		}
		queue<int> q;
		for (int i = 0; i < V; i++)
		{
			if (indegree[i] == 0)
			{
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			topo.push_back(node);

			// reduce the indegree of adjacent vertex
			for (auto it : adj[node])
			{
				indegree[it]--;
				if (indegree[it] == 0)
					q.push(it);
			}
		}

		return topo.size() == V;
	}
};

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int N, P;
		vector<pair<int, int>> prerequisites;
		cin >> N;
		cin >> P;
		for (int i = 0; i < P; ++i)
		{
			int x, y;
			cin >> x >> y;
			prerequisites.push_back(make_pair(x, y));
		}

		Solution ob;
		if (ob.isPossible(N, prerequisites))
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
	return 0;
}