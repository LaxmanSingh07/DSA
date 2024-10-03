/*

402. Remove K Digits
Medium
Topics
Companies
Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

-> i find this as a greedy problem

that is keep smaller digits at the start
get rid of the larger digits

 */

/*

- observation

nums = "1432219"
k = 3

stack =[]

push 1 to the stack

stack = [1]

push 4 to the stack

stack = [1,4]

push 3 to the stack

stack = [1,4,3]

-- > but observe that 3 is smaller than 4 so we can remove 4

stack = [1,3]

push 2 to the stack

stack = [1,3,2] remove 3

stack = [1,2]

push 2 to the stack

stack = [1,2,2]

push 1 to the stack remove 2

stack = [1,2,1]

push 9 to the stack

stack = [1,2,1,9]


--- some edge cases

k<=n

if k == n then return "0"
or answer may contains leading zeros so remove them

// you may not able to remove k elements from the stack

like 1234567
k = 3

so in this case after loop terminates remove the last k elements from the stack


*/

#include <bits/stdc++.h>
using namespace std;

string minNumber(string nums, int k)
{
    stack<char> st;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && k > 0 && st.top() > nums[i])
        {
            st.pop();
            k--;
        }
        st.push(nums[i]);
    }

    while (k > 0 && !st.empty())
    {
        st.pop();
        k--;
    }

    if (st.empty())
    {
        return "0";
    }

    string ans = "";

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    while (ans.size() > 1 && ans.back() == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());

    return ans;

    // time complexity : O(n)
}

int main()
{
    string num;
    cin >> num;
    int k;
    cin >> k;
}