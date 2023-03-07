#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<vector<bool>> &board)
{
    for (auto it : board)
    {
        for (auto it2 : it)
        {
            if (it2 == true)
            {
                cout << "Q ";
            }
            else
            {
                cout << "X ";
            }
        }
        cout<<endl;
    }
}

bool isSafe(vector<vector<bool>> board, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][col])
        {
            return false;
        }
    }

    // diagonal left

    int maxleft = min(row, col);
    for (int i = 1; i <= maxleft; i++)
    {
        if (board[row - i][col - i])
        {
            return false;
        }
    }

    // diagonal right
    int temp = (board.size() - col - 1);
    int maxright = min(row, temp);
    for (int i = 1; i <= maxright; i++)
    {
        if (board[row - i][col + i])
        {
            return false;
        }
    }

    return true;
}

int queens(vector<vector<bool>> &board, int row)
{
    if (row == board.size())
    {
        display(board);
        cout << endl;
        return 1;
    }

    int count = 0;

    // placing the queen and checking for every row and col
    for (int col = 0; col < board.size(); col++)
    {
        // place the queen if it is safe
        if (isSafe(board, row, col))
        {
            board[row][col] = true;
            count += queens(board, row + 1);
            board[row][col] = false;
        }
    }

    return count;
}
int main()
{

    int n = 5;
    vector<vector<bool>> board(n, vector<bool>(n, false));
    cout << queens(board, 0);
    return 0;
}