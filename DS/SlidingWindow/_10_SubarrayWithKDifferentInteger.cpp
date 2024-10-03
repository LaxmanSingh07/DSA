#include <bits/stdc++.h>
using namespace std;

int bruteForces(vector<int> &nums, int k)
{
    int n = nums.size();

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        set<int> st;
        for (int j = i; j < n; j++)
        {
            st.insert(nums[j]);
            if (st.size() == k)
            {
                ans++;
            }
            else if (st.size() > k)
            {
                break;
            }
        }
    }
    return ans;

    // time complexity O(n^2)
    // space complexity O(k)
}

/*

    -- optimized approach

    nums =[1,2,1,3] k=2

    we can't just use the ==k then we may be in dilemma that we have to remove the elements from the left or not or we have to increase the window size

    - so we will find the <=k distinct elements in the array

    <=k distinct elements in the array = subarrays with k distinct elements - subarrays with k-1 distinct elements

*/

int subarrayWithKDistinctInteger(vector<int> &nums, int k)
{
    int l = 0, r = 0, cnt = 0;
    map<int, int> mp;
    int n = nums.size();

    int ans = 0;
    while (r < n)
    {
        mp[nums[r]]++;

        while (mp.size() > k)
        {
            mp[nums[l]]--;
            if (mp[nums[l]] == 0)
            {
                mp.erase(nums[l]);
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << bruteForces(arr, k) << endl;
    cout << subarrayWithKDistinctInteger(arr, k) - subarrayWithKDistinctInteger(arr, k - 1);

    return 0;
}