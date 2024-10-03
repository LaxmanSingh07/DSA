/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

           ________________
          | 3 | 4  | 7 | 9 |
mat[][] = |12 | 13 | 16| 18|
          | 20| 21 | 23| 25|
          ------------------

Brute

Brute force : O(m*n)
    - iterate over the matrix and check if the target is present or not

Optimal:
 use the binary search on that row where target>=row[0] and target<=row[m-1]

Most Optimal :

if hypothetically we consider the matrix as a single array then the index of the mid element will be mid/mid%n and mid/n

[3,4,7,9,12,13,16,18,20,21,23,25]
 0 1 2 3 4  5  6  7  8  9 10 11

total number of element is m*n

low =0   high = m*n-1

int mid=low+(high-low)/2 (0+11-0)/2=5

but how will i figure out the correct row can col index in the matrix

row=mid/n=5/4=1
col=mid%n=5%4=1

we have another approach which has the same time complexity but it is more optimized

i will first find the correct row by applying binary search on the first element of each row

- then i will apply binary search on that row to find the target

*/

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0, high = m - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (matrix[mid][0] == target)
        {
            return true;
        }
        else if (matrix[mid][0] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (high == -1)
    {
        return false;
    }

    int row = high;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (matrix[row][mid] == target)
        {
            return true;
        }
        else if (matrix[row][mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

bool searchMatrxFlat(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0, high = m * n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{3, 4, 7, 9},
                                  {12, 13, 16, 18},
                                  {20, 21, 23, 25}};

    int target = 13;

    cout << searchMatrix(matrix, target) << endl;
    cout << searchMatrxFlat(matrix, target) << endl;
    return 0;
}