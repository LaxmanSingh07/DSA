#include <iostream>
#include <vector>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    int findPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }
    void unionByRank(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u > rank[ulp_v]])
        {
            parent[ulp_v] = ulp_v;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

int main()
{

    DisjointSet ds1(7);
    ds1.unionByRank(1,2);
    ds1.unionByRank(2,3);
    ds1.unionByRank(4,5);
    ds1.unionByRank(6,7);
    ds1.unionByRank(5,6);
    //if 3 and 2 same or not
    if(ds1.findPar(3)==ds1.findPar(7)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"NOt same";
    }
    ds1.unionByRank(3,7);
    if(ds1.findPar(3)==ds1.findPar(7)){
        cout<<"same"<<endl;
    }
    return 0;
}