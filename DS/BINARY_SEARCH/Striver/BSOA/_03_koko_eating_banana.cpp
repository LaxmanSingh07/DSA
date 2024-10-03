/*
    KOKO EATING BANANAS

    Problem: Koko loves to eat bananas. There are N piles of bananas, the i-th pile has piles[i] bananas. The guards have gone and will come back in H hours.

    you have to find the minimum integer K such that she can eat all the bananas within H hours.

    Brute force:

    - start from 1 banana/hour and check the number that she can eat all the bananas

    - at most she can eat is maximum number of bananas in the pile (she can eat only one pile at a time)

    - first base case if h<n then return -1 (you can't eat all the bananas)

    function canEatAllBananas(vector<int> &piles,int h,int k){
        int hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=ceil(piles[i]/k);
        }
        return hours<=h;
    }

    for(int i=1;i<=maxi;i++){
        if(canEatAllBananas(piles,h,i)){
            return i;
        }
    }

    Time: O(n*maxi)


    Optimal: Binary Search

    - start from 1 and high=maxi
    - find mid=(low+high)/2
    - check if if time take at mid is than or equal to h then minimize the answer

    else

    - if time taken at mid is greater than h then increase the speed



*/

#include <bits/stdc++.h>
using namespace std;

int timeTaken(vector<int> &piles, int k)
{
    int hours = 0;

    for (int i = 0; i < piles.size(); i++)
    {
        hours += ceil(piles[i] / k);
    }

    return hours;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    if (h < piles.size())
    {
        return -1;
    }

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (timeTaken(piles, mid) <= h)
        {
            high = mid;
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

    vector<int> piles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }

    int h;

    cin >> h;

    cout << minEatingSpeed(piles, h) << endl;

    return 0;
}