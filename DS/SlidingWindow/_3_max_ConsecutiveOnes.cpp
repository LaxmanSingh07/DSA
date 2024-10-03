#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &arr, int k)
{
    int left = 0, right = 0;
    int n = arr.size();

    int cntZero = 0;

    int ans = 0;

    while (right < n)
    {
        if (arr[right] == 0)
        {
            cntZero++;
        }

        while (cntZero > k)
        {
            if (arr[left] == 0)
            {
                cntZero--;
            }
            left++;
        }

        ans = max(ans, right - left + 1);
        right++;
    }

    // time complexity is O(n)+O(n) = O(n)

    // worst case like 1 1 1 1 1 1 0 0 and k=1

    // space complexity is O(1)
}

// we can remove the inner while loop and use the if condition

int maxConsecutiveOnes2(vector<int> &arr, int k)
{
    int left = 0, right = 0;
    int n = arr.size();

    int cntZero = 0;

    int ans = 0;

    while (right < n)
    {
        if (arr[right] == 0)
        {
            cntZero++;
        }

        if (cntZero > k)
        {
            // keeping the size as k
            if (arr[left] == 0)
            {
                cntZero--;
            }
            left++;
        }

        if (cntZero <= k)
            ans = max(ans, right - left + 1);
        right++;
    }

    // time complexity is O(n)

    // space complexity is O(1)

    return ans;
}

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int idx = 0; idx < size; idx++)
    {
        cin >> arr[idx];
    }

    int k;
    cin >> k;
}

/*
    maximum consecutive ones: when you can flip at most k zeros

    - in other words i can say that we need to find the maximum lenght subarray having at most k zeros

    - naive approach
        - generate all the subarray and check the subarray having at most k zeros
        - update the max length

        for(int i=0;i<n;i++){
            int zeroCount = 0;
            for(int j=i;j<n;j++){
                if(arr[j]==0){
                    zeroCount++;
                }
                if(zeroCount<=k){
                    ans = max(ans,j-i+1);
                }
            }
        }

*/