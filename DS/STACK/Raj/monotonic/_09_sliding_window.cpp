/*]
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation:
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
*/

/* Brute-force
    check for each window of size k

    for(int i=0;i<=n-k;i++)
    {
        int mx = INT_MIN;
        for(int j=i;j<i+k;j++)
        {
            mx = max(mx,nums[j]);
        }
        ans.push_back(mx);
    }

    time complexity : O(n*k)


    -- optmize

    // at time we need to find the maximum element in the window of size k

    // when we move one step ahead we will remove the first element

    // monotonic stack

    // instaed of using two stacks i will use a single datastructre know as deque

    // dequeue

    dq =[]

    stack st=[]

    nums=[1,3,-1,-2,5,3,7,1,6] k=3

    first i will push 1
    then second element push 2

    there is no point to keep in current window because
    3 is greater than one push index 1

    at index 2 :

    we can't skip -1 because it may happen in future might be in some subarray of size k

    push index 2 :
            [1,2]


    at index 3:
        [1,2,3]


    at index 4:

    now the front-element which is stored in queue is not longer a valid
    pop front first

    at index 5:

        value is 5
            pop all and push index 5


*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findSlidingWindowMax(vector<int> &v, int k)
{
    deque<int> dq;

    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && v[dq.back()] <= v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
        {
            ans.push_back(v[dq.front()]);
        }
    }
    return ans;
    // time complexity :)(2*n)
    // space :) : O(k)+O(n-k)
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cin >> k;

    return 0;
}