#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findSum(int ind,vector<int>&ans,vector<int>&arr,int sum)
{

    if(ind==arr.size()){
        ans.push_back(sum);
        return;
    }
    findSum(ind+1,ans,arr,sum+arr[ind]);
    findSum(ind+1,ans,arr,sum);

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans;
    findSum(0,ans,v,0);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}