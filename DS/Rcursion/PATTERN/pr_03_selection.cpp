#include <iostream>
using namespace std;
void selection_sort(int arr[], int r, int c, int maxin)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        if (arr[c] > arr[maxin])
        {
            selection_sort(arr, r, c + 1, c);
        }
        else
        {
            selection_sort(arr, r, c + 1, maxin);
        }
    }
    else
    {
        swap(arr[maxin], arr[r - 1]);
        selection_sort(arr, r - 1, 0, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}