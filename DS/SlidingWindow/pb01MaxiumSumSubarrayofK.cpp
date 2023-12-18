// MaximumSumSubarrayofK

// window size i-j+1

#include <iostream>
#include <vector>
using namespace std;

void maxiumSubarrayK(int n, vector<int> &v, int k)
{
    int i = 0, j = 0, sum = 0, mxSum = 0;
    while (j < n)
    {
        sum += v[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            mxSum = max(mxSum, sum);
            sum -= v[i];
            i++;
            j++;
        }
    }

    cout << mxSum << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}