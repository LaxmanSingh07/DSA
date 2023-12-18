// first negative integer in every window of size k

// size-k+1

#include <iostream>
#include <vector>
using namespace std;

void firstNegativeSizeK(int n, int a[], int k)
{
    int i = 0, j = 0;

    vector<int> v;

    while (j < n)
    {
        if (a[j] < 0)
            v.push_back(a[j]);
        if (j - i + 1 < k)
        {

            j++;
        }
        else if (j - i + 1 == k)
        {
            if (v.size() == 0)
                cout << 0 << " ";
            else
                cout << v[0] << " ";

            if (a[i] == v[0])
                v.erase(v.begin());

            i++;
            j++;
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    firstNegativeSizeK(n, a, k);
}