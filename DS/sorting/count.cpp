#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int maxi = arr[0], mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    int range = maxi - mini + 1;

    int count[range];

    for(int i=0;i<range;i++){
        count[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i] - mini]++;
    }

    for (int i = 1; i < range; i++)
    {
        count[i] += count[i - 1];
    }

    int output[n];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i] - mini] - 1] = arr[i];
        count[arr[i] - mini]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    countSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}