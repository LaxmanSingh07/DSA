#include <bits/stdc++.h>
using namespace std;

/*
    maximum rectangle ares in the histogram

    [
        [1,0,1,0,1],
        [1,0,1,1,1],
        [1,1,1,1,1],
        [1,0,0,1,0]
    ]

    - convert the above matrix into histogram

    like for first row
    [1,0,1,0,1] => [1,0,1,0,1]

    for second row
    [1,0,1,1,1] => [2,0,2,1,2]

    for third row
    [1,1,1,1,1] => [3,1,3,2,3]

    for fourth row
    [1,0,0,1,0] => [4,0,0,3,0]


    and find the maximum rectangle area in the histogram

    new matrix will be

    [
        [1,0,1,0,1],
        [2,0,2,1,2],
        [3,1,3,2,3],
        [4,0,0,3,0]
    ]

    and for each row use the largestRectangleArea2 function to find the maximum rectangle area

*/

int histogram(vector<int> &v)
{
    stack<int> st;
    int n = v.size();

    int ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[st.top()] >= v[i])
        {
            int height = v[st.top()];
            st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top();
            ans = max(ans, height * (nse - pse - 1));
        }
        st.push(i);
    }

    while (!st.empty())
    {
        int height = v[st.top()];
        st.pop();
        int nse = n;
        int pse = st.empty() ? -1 : st.top();
        ans = max(ans, height * (nse - pse - 1));
    }

    return ans;
}

int maximalRectangleArea(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0 && grid[i][j])
            {
                grid[i][j] += grid[i - 1][j];
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, histogram(grid[i]));
    }

    return ans;
}

int main()
{

    vector<vector<int>> grid = {
        {1, 0, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}};
    cout << maximalRectangleArea(grid) << endl;

    return 0;
}