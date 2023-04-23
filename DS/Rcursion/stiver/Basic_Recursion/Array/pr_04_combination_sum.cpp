#include<iostream>
#include<vector>
using namespace std;
void  findCombinations(int ind,vector<int> &arr,int target,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==arr.size()){
        if(target==0)
            ans.push_back(ds);
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombinations(ind,arr,target-arr[ind],ans,ds);
        ds.pop_back();

    }
    findCombinations(ind+1,arr,target,ans,ds);
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
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