/*

1901. Find a Peak Element II


A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.

*/

/*

✅☑️ BRUTE FORCE ☑️✅

- iterate over the matrix and check if the current element is greater than all of its adjacent elements

TC: O(m*n*4)

- inoder to remove *4 just find the max element in the matrix

✅☑️ OPTIMAL ☑️✅

- we can't go the the every element we have to skip some part of the matrix

- do first peak element part 1

input

    0   1   2   3   4   5
    _________________________
0   |_4_|_2_|_5_|_1_|_4_|_5_|
1   |_2_|_9_|_3_|_2_|_3_|_2_|
2   |_1_|_7_|_6_|_0_|_1_|_3_|
3   |_3_|_4_|_2_|_3_|_7_|_2_|

after that keep a low at 0th column and high at n-1 column

low = 0 , high = n-1
mid = low + (high-low)/2

then find the max element in the mid column
in this case mid is 2

i will check all 4 directions but someone on the left is >then the elemnt at mid

that is


       /\        /\
      /  \      /  \
     /    \    /    \ *
    /      \  /      \
   /________\/________\+


let' say + is mid and * is the left  element

decrement the high to mid-1

low=0, high=mid-1 (2-1=1)

mid  =0

find the max element in the mid column which is 4

and it is the peak element because it left is -1 up is -1
and left and right are 2

*/

/*
Some observations:
    I am taking the max element in the mid column
    which will indeed eliminate the up and down elements (it will always be greater then both)

    - on vertical axis it is same as of saying the find ing peak element in 1d array
*/

#include <bits/stdc++.h>
using namespace std;

int findMaximum(vector<vector<int>> &mat, int mid)
{
    int maxVal = INT_MIN;
    int maxIndex = -1;

    for (int i = 0; i < mat.size(); i++)
    {
        if (mat[i][mid] > maxVal)
        {
            maxVal = mat[i][mid];
            maxIndex = i;
        }
    }

    return maxIndex;
}

pair<int, int> findPeakElement(vector<vector<int>> &mat)
{
    int low = 0, high = mat[0].size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int maxIndex = findMaximum(mat, mid);

        if (mat[maxIndex][mid] > mat[maxIndex][mid - 1] && mat[maxIndex][mid] > mat[maxIndex][mid + 1])
        {
            return {maxIndex, mid};
        }
        else if (mat[maxIndex][mid - 1] > mat[maxIndex][mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return {-1, -1};
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
}