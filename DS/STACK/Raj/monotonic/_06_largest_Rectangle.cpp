/*
 // largest rectangle in histogram

  you are given an array representing the heights of the bars in a histogram
  and width of each bar is constant that is 1

    ex: nums = [2,1,5,6,2,3]


    - naive approach

        for each histogram bar find the left and right boundary of the rectangle
        - boundary is the first bar whose height is less than the current bar

        - previous smaller element for each histogram bar
        - nse for each histogram bar

        height = arr[i]
        then area will be (nse - pse - 1) * height

        for boundry cases please assign -1 and n to the pse and nse respectively

        then find the maximum area rectangle
*/

#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> &v)
{
    int n = v.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int left = i;
        int right = i;

        while (left >= 0 && v[left] >= v[i])
        {
            left--;
        }

        while (right < n && v[right] >= v[i])
        {
            right++;
        }

        ans = max(ans, v[i] * (right - left - 1));
    }

    return ans;

    //  time complexity : O(n^2)
}

int largestRectangleArea2(vector<int> &v)
{
    // using two arrays to store the previous smaller index and next smaller index

    int n = v.size();

    stack<int> st;

    vector<int> left(n), right(n);

    // finding the previous smaller element for each element
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[st.top()] >= v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            left[i] = -1;
        }
        else
        {
            left[i] = st.top();
        }

        st.push(i);
    }

    // clearing the stack

    while (!st.empty())
    {
        st.pop();
    }

    // finding the next smaller element for each element

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[st.top()] >= v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            right[i] = n;
        }
        else
        {
            right[i] = st.top();
        }

        st.push(i);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i] * (right[i] - left[i] - 1));
    }

    return ans;
}

/*
    you can otpimize the above solution by just using single stack

    - observation :

        in order to find the area which is contributed by the current element
        - we should know the left and right boundary of the rectangle
        - although we can find the left boundary on the fly
        - but what about the right boundary

        - aaah, what you can do that instead of calculating the answer on the fly we will wait until an element comes which is smaller than the current element
        - then we will calculate the area contributed by the current element
        - actually whil poping the element from the stack we are calculating the area contributed by that element

        - right smaller element will be the current element
        and the previous smaller element will just be one step back from the stack top element

*/

int largestRectangleArea3(vector<int> &v)
{

    int n = v.size();
    stack<int> st;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[st.top()] > v[i])
        {
            int height = v[st.top()];
            st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top();

            ans = max(ans, height * (nse - pse - 1));
        }
        st.push(i);
    }

    // there way be some elements left in the stack
    // that means there is not next smaller element for those elements

    while (!st.empty())
    {
        int height = v[st.top()];
        st.pop();
        int nse = n;
        int pse = st.empty() ? -1 : st.top();

        ans = max(ans, height * (nse - pse - 1));
    }
}

int main()
{
    vector<int> v = {1,
                     2,
                     3,
                     4,
                     5,
                     6};
    return 0;
}