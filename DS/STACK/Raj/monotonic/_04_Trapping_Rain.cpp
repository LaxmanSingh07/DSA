#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr, int l, int r)
{
    int max = INT_MIN;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int approach1(vector<int> &arr)
{
    // min(leftMax, rightMax) - arr[i]

    int n = arr.size();

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int leftMax = findMax(arr, 0, i);
        int rightMax = findMax(arr, i, n - 1);

        ans += min(leftMax, rightMax) - arr[i];
    }

    return ans;
}

// * is there a better way?

// * let's try to find the leftMax and rightMax for each element in the array
// prefixMax and suffixMax

int approach2(vector<int> &arr)
{
    int n = arr.size();

    vector<int> prefixMax(n);
    vector<int> suffixMax(n);

    prefixMax[0] = arr[0];
    suffixMax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        suffixMax[n - i - 1] = max(suffixMax[n - i], arr[n - i - 1]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += min(prefixMax[i], suffixMax[i]) - arr[i];
    }
}

// * we can reduce one of the arrays use only single array
// because we can matain a running max from left and right

// -- Most Optimal --

// we can use the two pointer approach to solve this problem

/*

    - initialize two pointers left and right
    - initialize two variables leftMax and rightMax
    - initialize the answer variable ans

    - try to traverse the smaller element first

    - because in this case we only require either leftMax or rightMax

*/

int approach3(vector<int> &arr)
{
    int n = arr.size();

    int left = 0;
    int right = n - 1;

    int leftMax = 0;
    int rightMax = 0;

    int ans = 0;

    while (left <= right)
    {
        if (arr[left] <= arr[right])
        {
            if (arr[left] > leftMax)
            {
                leftMax = arr[left];
            }
            else
            {
                ans += leftMax - arr[left];
            }
            left++;
        }
        else
        {
            if (arr[right] > rightMax)
            {
                rightMax = arr[right];
            }
            else
            {
                ans += rightMax - arr[right];
            }
            right--;
        }
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
}