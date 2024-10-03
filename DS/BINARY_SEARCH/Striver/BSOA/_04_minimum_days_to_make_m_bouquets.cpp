#include <bits/stdc++.h>
using namespace std;

/*

 // Minimum no of days to make M bouquets

    - given an array of flowers and an integer M
    - we have to make M bouquets
    - each bouquet should have K flowers
    - we can make a bouquet only if the flowers are adjacent to each other
    - we have to find the minimum no of days to make M bouquets

 bloomDay =[7,7,7,7,13,11,12,7]

 observation at most days required will be maximum of the bloomDay array
    if (M*K)>n then return -1 (not possible to make M bouquets)
    after from this every flower for sure will be in the range of 1 to maxi

 -- start from day 1 and high=maxi

 int canMakeBouquets(vector<int> &bloomDay,int M,int K,int days){
    int count=0;
    int ans=0;

    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=days){
            count++;
        }
        else{
          ans+=count/K;
            count=0;
        }
    }

    ans+=count/K;

    return ans>=M;
 }

 for(int i=1;i<=maxi;i++){
     if(canMakeBouquets(bloomDay,M,K,i)){
         return i;
     }
 }


 ### Optimal: Binary Search

 - start from min(bloomDay) and high=max(bloomDay)

    - find mid=(low+high)/2
    - check if we can make M bouquets with K flowers on mid day


*/

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}