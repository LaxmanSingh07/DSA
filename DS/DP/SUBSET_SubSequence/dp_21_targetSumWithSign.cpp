#include <bits/stdc++.h>
using namespace std;

int findWays(vector<int> &nums, int tar)
{
    int n=nums.size();
    vector<int> prev(tar + 1, 0), curr(tar + 1);

    prev[0] = curr[0] = 1;
    if (nums[0]!=0&&nums[0] <= tar)
        prev[nums[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int sum = 0; sum <= tar; sum++)
        {
            int notTake = prev[sum];
            int take = 0;
            if (nums[i] <= sum)
                take = prev[sum - nums[i]];
            curr[sum] = notTake + take;
        }
        prev = curr;
    }

    return prev[tar];
}

int countPartitions(int n,int d,vector<int>&arr)
{
    int totSum=0;
    for(auto &it:arr) totSum+=it;
    if(totSum-d/2<0 ||(totSum%2)) return false;
    return findWays(arr,(totSum-d)/2);
}


int targetSum(int n,int target,vector<int>&arr){
    return countPartitions(n,target,arr);
}
int main()
{
    return 0;
}