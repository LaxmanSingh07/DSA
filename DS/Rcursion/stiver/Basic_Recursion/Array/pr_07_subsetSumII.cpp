#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void findSubset(vector<int>&currAns,vector<vector<int>>&ans,vector<int>&nums,int indx)
{   
    if(indx==nums.size()){  
        ans.push_back(currAns);
        return;
    }
    currAns.push_back(nums[indx]);
   findSubset(currAns,ans,nums,indx+1);
    currAns.pop_back();
    findSubset(currAns,ans,nums,indx+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ans;
       vector<vector<int>>boss;
       findSubset(ans,boss,nums,0);
       return boss;
    }

};

void printSubsets(vector<vector<int>>&ans){
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<int>v(n);
        vector<vector<int>>ans;
        ans=(new Solution)->subsets(v);
        printSubsets(ans);

    }
}