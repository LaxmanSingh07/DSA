#include <bits/stdc++.h>
using namespace std;

class SegmentTree
{
    void build(int ind, int low, int high, int arr[], int seg[])
    {
        if (low == high)
        {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr, seg);
        build(2 * ind + 2, mid + 1, high, arr, seg);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    int query(int ind, int low, int high, int l, int r, int seg[])
    {
        // no overlap
        //  l r low high or low high l r
        if (l < low || r > high)
            return INT_MAX;

        // complete overlap
        //[l low high r]
        if (l <= low && r >= high)
            return seg[ind];

        // partial overlap

        int mid = (low + high) / 2;
        int left = query(2 * ind + 1, low, mid, l, r, seg);
        int right = query(2 * ind + 2, mid + 1, high, l, r, seg);

        return min(left, right);
    }

    void update(int ind, int low, int high, int i, int val, int seg[])
    {
        if (low == high)
        {
            seg[ind] = val;
            return;
        }

        int mid = (low + high) >> 1;

        if (i <= mid)
            update(2 * ind + 1, low, mid, i, val, seg);
        else
            update(2 * ind + 2, mid + 1, high, i, val, seg);
        update(2 * ind + 2, mid + 1, high, i, val, seg);

        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
};

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int seg[4 * n];

    build(0, 0, n - 1, arr, seg);

    int q;
    cin >> q;
    while (q--)
    {
        int type;
        // 1 for find min
        cin >> type;
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << query(0, 0, n - 1, l, r, seg) << endl;
        }
        // 2 for update

        else
        {
            int ind, val;
            cin >> ind >> val;
            arr[ind] = val;
            update(0, 0, n - 1, ind, val, seg);
            arr[ind] = val;
        }
    }
}

void solve2()
{
    int n1;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l1, r1;
            cin >> l1 >> r1;
            int l2, r2;
            cin >> l2 >> r2;
            // find min of arr1[l1,r1] and arr2[l2,r2]
        }
        else
        {
            int ind, val;
            cin >> ind >> val;
            // update arr1[ind]=val
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}