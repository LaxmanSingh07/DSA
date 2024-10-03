// previous smaller element

#include <bits/stdc++.h>

using namespace std;

vector<int> previousSmallerElements(vector<int> &arr)
{
    vector<int> pse(arr.size());
    stack<int> st;

    for (int i = 01; i < arr.size(); i++)
    {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();

        if (st.empty())
            pse[i] = -1;
        else
            pse[i] = st.top();

        st.push(arr[i]);
    }

    return pse;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    vector<int> pse = previousSmallerElements(arr);

    for (int i = 0; i < pse.size(); i++)
        cout << pse[i] << " ";

    return 0;
}