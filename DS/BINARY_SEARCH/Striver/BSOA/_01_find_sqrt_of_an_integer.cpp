/*
 find the sqrt of an integer number
 if not perfect square then return the floor value of the sqrt

 # Brute force: linear search
     - start from 1 and check for every number if it is perfect square or not
     - if it is perfect square then return that number
     - if not then return the floor value of the sqrt

     Time: O(n)
     Space: O(1)


     for(i=1;i<=n;i++){
         if(i*i==n){
             return i;
         }
         else if(i*i>n){
             return i-1;
         }
     }

 # Optimal: Binary Search

 suppose n=28

 low =1 , high =n/2 = 14

 mid =7

    7*7=49>28   that means 7 and all the numbers greater than 7 will not be the answer

 low =1  high =mid-1=6

 mid = 3

        3*3=9<28 # it means 3 can be the answer but i have to maximize the value of the sqrt

low=mid+1=4 high=6

mid=5

    5*5=25<28

*/

#include <bits/stdc++.h>
using namespace std;

int findsqrt(int n)
{
    int low = 1, high = n / 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return high;
}

int main()
{
    int num;
    cin >> num;

    cout << findsqrt(num) << endl;

    return 0;
}