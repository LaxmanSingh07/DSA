#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void display(vector<vector<int>> &board)
{
    for (auto it : board)
    {
        for (auto it2 : it)
        {
            cout<<it2<<" ";
        }
        cout << endl;
    }
}

bool isValid(vector<vector<bool>> &board, int row, int col)
{
    if (row >= 0 && row < board.size() && col >= 0 && col < board.size())
    {
        return true;
    }
    return false;
}

bool isSafe(vector<vector<int>> &board, int row, int col, int num)
{
    // check for the row

    for (int i = 0; i < board.size(); i++)
    {
        if (board[row][col] == num)
        {
            return false;
        }
    }

    // check for the col

    for (auto it : board)
    {
        // check if the number in the col or not
        if (it[col] == num)
        {
            return false;
        }
    }

    // check in the sub box

    int sq = sqrt(board.size());
    int rowStart = row - row % sq;
    int colStart = col - col % sq;

    for (int r = rowStart; r < rowStart + sq; r++)
    {
        for (int c = colStart; c < colStart + sq; c++)
        {
            if (board[r][c] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<int>> &board)
{
    int n = board.size();
    int row = -1;
    int col = -1;

    bool emptyleft = true;

    // this is how we are replacing the r,c from arguments

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
            {
                row = i;
                col = j;
                emptyleft = false;
                break;
            }
        }

        // if you found some empty element in row then preck
        if (emptyleft == false)
        {
            break;
        }
    }

    if (emptyleft == true)
    {
        return true;
    }

    for (int number = 1; number <= 9; number++)
    {
        if (isSafe(board, row, col, number))
        {
            board[row][col] = number;
            if (solve(board))
            {
                // found the ans
                return true;
            }
            else
            {
                board[row][col] = 0;
            }
        }
    }
    return false;
}

int main()
{

    int n = 3;
    vector<vector<int>> board =
        {
            {3, 0, 6, 5, 0, 8, 4, 0, 0},
            {5, 2, 0, 0, 0, 0, 0, 0, 0},
            {0, 8, 7, 0, 0, 0, 0, 3, 1},
            {0, 0, 3, 0, 1, 0, 0, 8, 0},
            {9, 0, 0, 8, 6, 3, 0, 0, 0},
            {0, 5, 0, 0, 9, 0, 6, 0, 0},
            {1, 3, 0, 0, 0, 0, 2, 5, 0},
            {0, 0, 0, 0, 0, 0, 0, 7, 4},
            {0, 0, 5, 2, 0, 6, 3, 0, 0},
        };

        if(solve(board)){
            cout<<"Done"<<endl;
            display(board);
        }
        else{
            cout<<"Bye"<<endl;
        }

    return 0;
}