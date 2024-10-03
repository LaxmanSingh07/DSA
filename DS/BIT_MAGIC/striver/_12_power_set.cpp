#include <bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> &v)
{
    int n = v.size();
    int subsets = 1 << n;
    for (int i = 0; i < subsets; i++)
    {
        if (i == 0)
        {
            cout << "[]";
        }
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << v[j] << " ";
            }
        }
        cout << endl;
    }

    // overall time complexity is O(2^n * n)
    // overall space complexity is O(1)
    // if using a vector to store the subsets then space complexity is O(2^n * n)
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    printSubsets(v);
    return 0;
}

/*

    power set method to generate all the subsets of a given set

    n=3

    then number of subsets = 2^n = 8

    ex: [1,2,3]

    then subsets are:

    1. []
    2. [1]
    3. [2]
    4. [1,2]
    5. [3]
    6. [1,3]
    7. [2,3]
    8. [1,2,3]


    0 0 0
    0 0 1
    0 1 0
    0 1 1
    1 0 0
    1 0 1
    1 1 0
    1 1 1

    0 -> means not included
    1 -> means included

    you can see that there is a relation between the binary representation of the numbers and the subsets




*/