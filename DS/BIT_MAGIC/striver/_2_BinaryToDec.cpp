#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string str)
{
    int len = str.length() - 1;
    int ans = 0;
    int p2 = 1;
    for (int pos = len; pos >= 0; pos--)
    {
        ans += (str[pos] - '0') * p2;
        p2 *= 2;
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;

    cout << binaryToDecimal(str);
    return 0;
}