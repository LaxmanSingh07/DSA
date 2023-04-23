// Problem: Search a 2d matrix
// Approach: Binary Search

// to find the potential row
// to find target in that row

int BinarySearchRow(int n, int m, int arr[][m], int key)
{
    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {
        int mid = lo+(hi-lo) / 2;
        if (arr[mid][0] <= key && arr[mid][m - 1] >= key)
        {
            return mid;
        }
        else if (arr[mid][0] > key)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}


bool BinarySearch(int r, int m, int arr[r][m], int key)
{
    int lo = 0;
    int hi = m - 1;

    while (lo <= hi)
    {
        int mid = lo+(hi-lo) / 2;
        if (arr[r][mid] == key)
        {
            return true;
        }
        else if (arr[r][mid] > key)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return false;
}

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int key;
    cin >> key;

    int r = BinarySearchRow(n, m, a, key);
    bool isFound=BinarySearch(r,m,a,key);
}