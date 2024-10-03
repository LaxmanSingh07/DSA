/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

https://assets.leetcode.com/uploads/2020/11/24/searchgrid2.jpg

*/

/*
  because each row is sorted we will apply binary search only for that row in which
  row[0]<=target<=row[n-1] (same thing can be done for column)

  then i will apply binary search on that row to find the target

    for(auto it:matrix){
        if(it[0]<=target && it[n-1]>=target){
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(it[mid]==target){
                    return true;
                }else if(it[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
    }

    return false;


-- Observations:

    do observations from each of the corner
    from the top left and bottom right we can't say anything there is abmiguity on both sides

    - But from the top right corner (this elemnt is the maximum element in the row and minimum element in the column)
     and same for the bottom left corner (this elemnt is the maximum element in the column and minimum element in the row)

     we can take the decision that if the target is less than the top right corner then it will be in the left side of the matrix


*/

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int i = 0, j = n - 1;

    while (i < m && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    // time complexity: O(m+n)

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                  {2, 5, 8, 12, 19},
                                  {3, 6, 9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};

    int target = 5;

    cout << searchMatrix(matrix, target) << endl;
}
