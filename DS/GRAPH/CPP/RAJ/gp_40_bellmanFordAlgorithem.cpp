// I am showing only the logic part here
#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
    {
        vector<int> dist(V, 1e8);
        dist[S]=0;
        for(int i=0;i<V;i++)
        {
            for(auto it:edges)
            {
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dist[u]!=1e8 &&dist[u]+wt<dist[v]){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        //logic to check wheather -ve cycle exists or not 
        for(auto it:edges)
            {
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dist[u]!=1e8 &&dist[u]+wt<dist[v]){
                    return {-1};
                }
            }
            return dist;
    }
};