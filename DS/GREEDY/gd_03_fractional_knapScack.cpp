#include <bits/stdc++.h>
using namespace std;

// For Example

// Value (rs)   21  24  12  40  30
// Weight (kg)  7   4   6   5   6

// w 20

// value per unit weight 



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
    {
        cin >> i.first >> i.second;
    }

    int w;
    cin >> w;

    sort(v.begin(), v.end(), [&](pair<int, int> &a, pair<int, int> &b)
         {
        double r1 = (double)a.first / a.second;
        double r2 = (double)b.first / b.second;
        return r1 > r2; });

    double res = 0.0;

    for (auto &i : v)
    {
        if (w >= i.second)
        {
            res += i.first;
            w -= i.second;
            continue;
        }
        double vw = (double)i.first / i.second;
        res += vw * w;
        w = 0;
        break;
    }

    cout << res << endl;

    return 0;
}