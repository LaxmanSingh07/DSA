#include <bits/stdc++.h>
using namespace std;

int maximumPoints(vector<int> &v, int k)
{
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < k; i++)
    {
        leftSum += v[i];
    }

    int ans = leftSum;

    for (int i = 0; i < k; i++)
    {
        leftSum -= v[k - i - 1];
        rightSum += v[v.size() - i - 1];

        ans = max(ans, leftSum + rightSum);
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

    int k;

    cin >> k;
}

/*

    - maximum points you can obtain from cards

    - you have an array of cards

    - you have to choose k cards from the array

    bu the choosen cards should be from the start or end of the array you can't pick any card randomly



*/