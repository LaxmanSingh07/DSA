#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &v)
{
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= v[i];
    }
    return ans;
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
}

/*
    single element

    all the element is repeated twice except one element


     brute force will be sort the array and then check the adjacent elements

    a better approach will be to use hash map  (time complexity O(n) and space complexity O(n)) if using map then time complexity will be O(nlogn) and space complexity will be O(n)


    a better approach will be to use xor operation

    a^a = 0
    a^b^b = a

    if all the bits of two numbers are same then xor will be 0 (or in order word xor of same numbers will be 0)

*/