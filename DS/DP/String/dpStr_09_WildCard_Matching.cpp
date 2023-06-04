#include <bits/stdc++.h>
using namespace std;

//Recursion

// int f(int i, int j, string &pattern, string &text)
// {
//     if (i < 0 && j < 0)
//         return true;
//     if (i < 0 && j >= 0)
//         return false;

//     if (i < 0 && j >= 0)
//     {
//         for (int it = 0; it <= i; it++)
//         {
//             if (pattern[it] != '*')
//                 return false;
//         }
//         return true;
//     }

//     if (pattern[i] == text[i] || pattern[i] == '?')
//     {
//         return f(i - 1, j - 1, pattern, text);
//     }
//     if (pattern[i] == '*')
//     {
//         return f(i-1,j,pattern,text) | f(i,j-1,pattern,text);
//     }
//     return false;
// }


//Memoization

int f(int i, int j, string &pattern, string &text)
{
    if (i < 0 && j < 0)
        return true;
    if (i < 0 && j >= 0)
        return false;

    if (i < 0 && j >= 0)
    {
        for (int it = 0; it <= i; it++)
        {
            if (pattern[it] != '*')
                return false;
        }
        return true;
    }

    if (pattern[i] == text[i] || pattern[i] == '?')
    {
        return f(i - 1, j - 1, pattern, text);
    }
    if (pattern[i] == '*')
    {
        return f(i-1,j,pattern,text) | f(i,j-1,pattern,text);
    }
    return false;
}

bool wildCardMatching(string &pattern, string &text)
{
    int n = pattern.length();
    int m = text.length();

    return f(n - 1, m - 1, pattern, text);
}

int main()
{
    string p="?ay";
    string t="ray";
    cout<<" "<<wildCardMatching(p,t);
    return 0;
}