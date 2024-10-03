#include <bits/stdc++.h>
using namespace std;

// count subarray sum equals to k

/*
    -- BRUTE FORCE

        - generate all the subarrays and check the sum of the subarray


    -- sliding window

     [1,0,0,1,1,0] goal=2

      sum=0,l=0,r=0,ans=0

     -- observations :

        - At index 0, sum=1
        - At index 1, sum=1
        - At index 2, sum=1
        - At index 3, sum=2 (sum==goal)
        - At index 4, sum=3 (sum>goal)
                remove the elements from left know left=1
                sum=2
                now sum==goal (so ans+=1)
        - At index 5, sum=2 (sum==goal) (left=1)
                ans+=1
        - At index 6, sum=2 (sum==goal) (left=1)
                ans+=1

        - so the ans=3

        which is wrong
            - because at index 2 we miss the 0 1 1
            - we are in the dilemma that we have to remove the elements from the left or not



- find the no of subarrays where sum <=goal
 then how will i able to find the subarrays where sum==goal

 --> sumLessThanEqualToGoal=sumLessThanGoal+sumEqualToGoal

 because this is simply binary array than i can just use the sumlessThanGoat as goal-1

 [1,0,0,1,1,0] goal=2


funciton(vector<int> arr,int goal){
    sum=0,l=0,r=0,ans=0

    while(r<n){
        sum+=arr[r];
        while(sum>goal){
            sum-=arr[l];
            l++;
        }
        ans+=r-l+1;
        r++;
    }
}

// time complexity : )(2*n) = O(n)


*/

int main()
{
    int n;
    vector<int> arr(n);
    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}