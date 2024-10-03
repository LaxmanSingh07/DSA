#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &arr)
{
    vector<int> nge(arr.size());

    stack<int> st;
    st.push(arr[arr.size() - 1]);

    nge[arr.size() - 1] = -1;

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();

        if (st.empty())
            nge[i] = -1;
        else
            nge[i] = st.top();

        st.push(arr[i]);
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    return 0;
}

/*
    next greater element (monotonic stack)

    arr= [2, 1, 3, 4, 5, 6, 7, 8, 9]
    nge= [3, 3, 4, 5, 6, 7, 8, 9, -1]


    - Brute force
        - O(n^2)
        - for each element, find the next greater element
        - for each element, iterate from i+1 to n-1 and find the next greater element
        - if found, break and store the element
        - if not found, store -1


    - Optimized
        - using stack
        - start traversing the array from right to left
        - push the last element in the stack

        - for each element
            - pop all the elements from the stack which are less than the current element
            - if stack is empty, store -1
            - else store the top element of the stack

            - push the current element in the stack
*/