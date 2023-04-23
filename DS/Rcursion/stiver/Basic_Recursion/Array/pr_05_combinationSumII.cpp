#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  findCombinations(int ind,vector<int> &arr,int target,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind &&arr[i]==arr[i-1]) continue; //i> ind means wheather the current element in the first or not 
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombinations(ind+1,arr,target-arr[i],ans,ds);
        ds.pop_back();
    }
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    vector<int>ds;
    findCombinations(0,v,7,ans,ds);

    cout<<"ANS WILL BE "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}