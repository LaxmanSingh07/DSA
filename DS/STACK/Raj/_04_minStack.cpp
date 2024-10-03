#include <bits/stdc++.h>
using namespace std;

class MinStack
{
    stack<pair<int, int>> st;

public:
    void push(int x)
    {
        if (st.empty())
        {
            st.push({x, x});
        }
        else
        {
            st.push({x, min(x, st.top().second)});
        }
    }

    int pop()
    {
        if (st.empty())
        {
            return -1;
        }
        int x = st.top().first;
        st.pop();
        return x;
    }

    int top()
    {
        if (st.empty())
        {
            return -1;
        }
        return st.top().first;
    }

    int getMin()
    {
        if (st.empty())
        {
            return -1;
        }
        return st.top().second;
    }

    // time complexity is O(1)
    // space complexity is O(2*n)
};

class MinStack2
{
    stack<int> st;
    int minElement;

public:
    MinStack2()
    {
        minElement = INT_MAX;
    }

    void push(int x)
    {
        if (st.empty())
        {
            st.push(x);
            minElement = x;
        }
        else
        {
            if (x < minElement)
            {
                st.push(2 * x - minElement);
                minElement = x;
            }
        }
    }

    int pop()
    {
        if (st.empty())
        {
            return -1;
        }

        int x = st.top();
        st.pop();

        if (x < minElement)
        {
            int prevMin = minElement;
            minElement = 2 * minElement - x;
            return prevMin;
        }

        return x;
    }

    int top()
    {
        if (st.empty())
        {
            return -1;
        }

        if (st.top() < minElement)
        {
            return minElement;
        }

        return st.top();
    }

    // time complexity is O(1)
    // space complexity is O(n)
};

int main()
{

    return 0;
}

/*

    build a min stack

    - pop
    - push
    - top
    - getMin

    - one approach could be the use stack<pair<int,int>>

    where pair.first will store the current element and pair.second will store the minimum element till now

    // you can do it using single stack<int> also

    ex:

        push(12)
        push(15)


        every time you will get a new minimum element then just not insert that element in the stack

        but insert 2*newElement - prevSmallestElement


        push(10)

        -> 2*10-12 = 8 (min =10)

        pop()

        ->2*minElement-st.top() = 12 (2*10-8)

        getMin() = 10

        top() = 15

        push 10 (2*10-12=8)

        top() = 10

        but how do i now

        if st.top()<minElement that means you have modified the element hence you top will be minElement

        ex:   10 < 12

             val < minElement

             add val both sides

             val + val < minElement + val

             2*val - minElement < val

             st.top() < minElement

        hence at any point if st.top()<minElement then top will be minElement



*/