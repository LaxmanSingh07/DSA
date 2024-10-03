#include <bits/stdc++.h>
using namespace std;

/*
You are given a 2D array consisting of only 1's and 0's, where each row is sorted in non-decreasing order. You need to find and return the index of the first row that has the most number of 1s. If no such row exists, return -1.
Note: 0-based indexing is followed.

Examples:

Input: arr[][] = [[0, 1, 1, 1],
               [0, 0, 1, 1],
               [1, 1, 1, 1],
               [0, 0, 0, 0]]
Output: 2
Explanation: Row 2 contains 4 1's.
Input: arr[][] = [[0, 0],
               [1, 1]]
Output: 1
Explanation: Row 1 contains 2 1's.
Expected Time Complexity: O(n+m)
Expected Auxiliary Space: O(1)
*/

int leftMost(vector<int> &row)
{
    int low = 0, high = row.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (row[mid] == 1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int rowWithMax1s(vector<vector<int>> &arr, int n, int m)
{
    // one approach is to check the first occurence of 1 in each row
    int maxAns = 0;
    for (auto row : arr)
    {
        int left = leftMost(row);
        maxAns = max(maxAns, (int)row.size() - left);
    }

    // ✅ Time: O(n*log(m))
    return maxAns;
}

// we can do this in O(n+m) time complexity

int rowWithMax1S_2(vector<vector<int>> &arr, int n, int m)
{
    int i = 0, j = m - 1;
    int ans = -1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            ans = i;
            j--;
        }
        else
        {
            i++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << rowWithMax1s(arr, n, m) << endl;
    cout << rowWithMax1S_2(arr, n, m);

    return 0;
}