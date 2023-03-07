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
                cout << "K ";
            }
            else
            {
                cout << "X ";
            }
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

bool isSafe(vector<vector<bool>> &board, int row, int col)
{
    if (isValid(board, row - 2, col - 1))
    {
        if (board[row - 2][col - 1])
        {
            return false;
        }
    }
    if (isValid(board, row - 1, col - 2))
    {
        if (board[row - 1][col - 2])
        {
            return false;
        }
    }
    if (isValid(board, row - 2, col + 1))
    {
        if (board[row - 2][col + 1])
        {
            return false;
        }
    }
    if (isValid(board, row - 1, col + 2))
    {
        if (board[row - 1][col + 2])
        {
            return false;
        }
    }
    return true;
}

void Nknights(vector<vector<bool>> &board, int row, int col, int knights)
{
    if (knights == 0)
    {
        display(board);
        cout << endl;
        return;
    }

    if (row == board.size() - 1 && col == board.size())
    {
        return;
    }
    if (col == board.size())
    {
        Nknights(board, row + 1, 0, knights);
        return;
    }

    if (isSafe(board, row, col))
    {
        board[row][col] = true;
        Nknights(board, row, col + 1, knights - 1);
        board[row][col] = false;
    }
    Nknights(board, row, col + 1, knights);
}

int main()
{

    int n = 3;
    vector<vector<bool>> board(n, vector<bool>(n, false));
    Nknights(board, 0, 0, n);
    return 0;
}