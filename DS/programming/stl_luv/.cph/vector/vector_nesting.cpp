// #include<iostream>
// #include<vector>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout<<"size :"<<v.size();
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " <<v[i].second;
    }
    cout<<endl;
}

using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);
    return 0;
}