/*

 Painter's Partition Problem/ split array - longest sum

 arr[] =[10,20,30,40] painters=2

- each painter will paint the board
- only cogigous boards can be painted by a single painter
- we have to minimize the maximum sum of the boards painted by the painter


1 way:      10|20,30,40       max=90
2 way:      10,20|30,40       max =70
3 way:      10,20,30|40       max=60

min(90,70,60)=60

- In order to paint all the boards we need at least max(arr[i]) sum
- and at max we can paint all the boards by a single painter

## Split array - largest sum

- split the array into k subarrays such that the maximum sum of the subarray is minimized

arr[] = [10,20,30,40] k=2

- At least we need max(arr[i]) sum to split the array into k subarrays
- and at max we can split the array into k subarrays


1 way:      10|20,30,40       max=90
2 way:      10,20|30,40       max =70
3 way:      10,20,30|40       max=60


these both problems are same


- this is simple i will direclty jump to the binary search
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
}