// prefix function

// prefice [i] of length of longest proper prefix of the substring s[0...i] which is also suffix of this substring. By defination, prefix[0]=0

// prefix[i]=maximum k such atath
// s[0... k-1] = s[i-(k-1)...i]

// Input T="abcabcd"

// prefix Array: 0 0 0 1 2 3 0

#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];

        // S[0 ..i-1] =ab.ab
        // pi[i-1]=2
        // S[0..i]=abc.abc
        //  pi[i]

        while (j > 0 and s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }

    return pi;

    // Time Complexity : O(n)
}

int main()
{
    string s = "man";
    vector<int> prefix = prefix_function(s);

    string t = "LaxmanSingh";

    int pos = -1;
    int i(0), j(0);

    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            i++, j++;
        }
        else
        {
            if (j != 0)
            {
                j = prefix[j - 1];
            }
            else
            {
                i++;
            }
        }

        if (j == s.size())
        {
            pos = i - s.size();
            break;
        }
    }

    cout << pos << " " << endl;
    return 0;
}