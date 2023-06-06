//  1. array to maxHeap
// ascending

// 2. minHeap descending

// call the heapify for the nonleaf node

// 2. largest element at the end
// and re-heap it

// and then assume that the size of heap is decreased by one

#include <bits\stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int i, int n)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int maxIdx = i;

    if (left < n && arr[left] > arr[maxIdx])
    {
        maxIdx = left;
    }

    if (right < n && arr[right] > arr[maxIdx])
    {
        maxIdx = right;
    }

    if (maxIdx != i)
    {
        // swap
        swap(arr[i], arr[maxIdx]);
        heapify(arr, maxIdx, n);
    }
}
void heapSort(vector<int> &arr)
{
    // step1 ---> build maxHeap
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }

    // ste2: put the largest element at the end

    for (int i = n - 1; i > 0; i--)
    {
        // swap

        swap(arr[0], arr[i]);
        heapify(arr, 0, i);
    }
}

int main()
{
    int n;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    heapSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;
    return 0;
}