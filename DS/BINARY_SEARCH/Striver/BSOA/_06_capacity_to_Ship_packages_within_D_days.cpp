/*

A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.


Brute force:

-- Observations:

    for shipping at least we required capacity of max (weights) and at most we required capacity of sum(weights) (if days=1)

    bool canShip(vector<int>&weights,int days,int capacity){
        int days=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>capacity){
                days++;
                sum=weights[i];
            }
        }
        return days<=days;
    }

    for(int i=max(weights);i<=sum(weights);i++){
        if(canShip(weights,days,i)){
            return i;
        }
    }

    Time complexity :O(n*(sum-max(weights)))

Optimal: Binary Search

-- start from max(weights) and high=sum(weights)

-- find mid=(low+high)/2

-- check if we can ship all the packages within days days with mid capacity

-- if yes then minimize the capacity

-- if no then increase the capacity


return low


*/

#include <bits/stdc++.h>
using namespace std;

int canShip(vector<int> &weights, int days, int capacity)
{
    int sum = 0;
    int d = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
        if (sum > capacity)
        {
            d++;
            sum = weights[i];
        }
    }
    return d;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canShip(weights, days, mid) <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int n;
    cin >> n;
    vector<int> weights(n);
}