#include <iostream>
#include <vector>
using namespace std;
void solve(int i,vector<int>&sub,vector<int>&str)
{
    if(i==str.size()){
        if(sub.size()==0)
        {
            cout<<"{}";
        }
        for(auto it:sub)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    //take and pick the particular index into the subsequence
    sub.push_back(str[i]);
    solve(i+1,sub,str);
    sub.pop_back();
    solve(i+1,sub,str);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>sub;
    solve(0,sub,v);
}

// TIME COMLEXITY : 

// 2X2X2X2     -----> 2^n
// and n is required to print the array 

// and  height of the recusion in O(n) stack space

