/*

- Aggressive Cows : (min dist between cows ) in max

arr[]=[0,3,4,7,10,9] cows =4

- sort the array
- min distance always between two consecutive cows placed

0   3   4   7   9   10
c1  c2  c3  c4             --> min distance = 1
c1      c2      c3  c4      --> min distance = 1
c1      c2  c3      c4  --> min distance = 3

- we need to find the maximum min distance between cows
- we have to but the exact number of cows in the barn

let's start from 1 as a min distance

- I am staring from smallest number in array because it is greedy i want to place the cows

                      0   3   4   7   9   10
(is 1 possible)      c1  c2  c3  c4            ----> min distance = 1
(is 2 possible)      c1  c2       c3  c4        ----> min distance = 2
(is 3 possible)      c1  c2       c3       c4    ----> min distance = 3
(is 4 possible)      c1      c2        c3              not able to place the cows

after this no need to check the further values always false

at what maximum distance we can place the cows in the barn max(arr)-min(arr)
and min distance is 1

// brute force


int canPlaceCows(vector<int> &arr,int cows,int dist){
    int count=1;
    int lastPlaced=arr[0];

    for(int i=1;i<arr.size();i++){
        if(arr[i]-lastPlaced>=dist){
            count++;
            lastPlaced=arr[i];
        }
    }

    return count>=cows;
}

int aggressiveCows(vector<int>&arr,int cows){
    sort(arr.begin(),arr.end());

    for(int i=1;i<=arr[arr.size()-1]-arr[0];i++){
        if(!canPlaceCows(arr,cows,i)){
           return i-1;
        }
    }

    return -1;

}

✅ Time: O(n*(max-min))

// optimal solution

☑️✅ BINARY SEARCH  ☑️✅

- start from 1 and high=max-min
- check if we can place the cows in the barn with mid distance

- if yes then maximize the answer
- if no then minimize the answer

*/

#include <bits/stdc++.h>
using namespace std;

int canPlaceCows(vector<int> &arr, int cows, int dist)
{
    int count = 1;
    int lastPlaced = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - lastPlaced >= dist)
        {
            count++;
            lastPlaced = arr[i];
        }
    }
    if (count >= cows)
    {
        return true;
    }
}

int aggressiveCows(vector<int> &arr, int cows)
{
    sort(arr.begin(), arr.end());

    int low = 1;
    int high = arr[arr.size() - 1] - arr[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(arr, cows, mid))
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

// ✅ Time: O(n*log(max-min))
// ✅ Space: O(1)

int main()
{
    int n;
    cin >> n;
}