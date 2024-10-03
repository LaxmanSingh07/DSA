#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int num)
{
    if (num == 0)
        return "0";

    string ans = "";
    int rem = 0;
    while (num > 0)
    {
        rem = num % 2;
        ans += to_string(rem);
        num /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << decimalToBinary(num) << endl;
}