#include <bits/stdc++.h>
using namespace std;

/*
    - online stock span

    you are given an array of stock prices and you have to find the span of the stock prices for each day

    span of the stock price for a particular day is the maximum number of consecutive days just before the current day for which the stock price was less than or equal to the current day


    -- brute forces

    for each day find the span of the stock price by iterating the previous days

    time complexity : O(n^2)
    space complexity : O(1)

*/

class StockSpanner1
{
public:
    vector<int> prices;

    StockSpanner1()
    {
    }

    int next(int price)
    {
        prices.push_back(price);

        int n = prices.size();
        int ans = 1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (prices[i] <= price)
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};

/*

- better approach ()

    -- observation:

        for each element find the previous greater element index

        [100,80,60,70,60,75,85]

        [-1,0,1,2,1,2,3]


*/

class StockSpanner2
{
public:
    stack<pair<int, int>> st;
    int index;

    StockSpanner2()
    {
        index = 0;
    }

    int next(int price)
    {
        while (!st.empty() && st.top().first <= price)
        {
            st.pop();
        }

        int ans = st.empty() ? index + 1 : index - st.top().second;

        st.push({price, index});

        index++;

        return ans;
    }
};

int main()
{
    // StockSpanner1 s;
    // cout << s.next(100) << endl;
    // cout << s.next(80) << endl;
    // cout << s.next(60) << endl;
    // cout << s.next(70) << endl;
    // cout << s.next(60) << endl;
    // cout << s.next(75) << endl;
    // cout << s.next(85) << endl;

    StockSpanner2 s2;

    cout << s2.next(100) << endl;
    cout << s2.next(80) << endl;
    cout << s2.next(80) << endl;
    cout << s2.next(70) << endl;
    cout << s2.next(60) << endl;
    cout << s2.next(75) << endl;
    cout << s2.next(85) << endl;

    return 0;
}
