class Solution
{

    // there is no need to start from the end to start because there are multiple  end  points
    int Triangle(int row, int col, vector<vector<int>> &triangle, vector<vector<int>> &dp)
    {
        int n = triangle.size();
        if (row == n - 1)
        {
            return triangle[n - 1][col];
        }
        if (dp[row][col] != -1)
        {
            return dp[row][col];
        }

        int down = triangle[row][col] + Triangle(row + 1, col, triangle, dp);
        int rd = triangle[row][col] + Triangle(row + 1, col + 1, triangle, dp);

        return dp[row][col] = min(down, rd);
    }

public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        int m = triangle[0].size();

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return Triangle(0, 0, triangle, dp);
    }
};