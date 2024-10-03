#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

/*
    you are given an array of integers

    find the next greater element for each element in the array if you don't find any greater element in right you are allowed to go circularly to find the greater element


    ex: nums =[2,10,12,1,11]

    output: [10,12,-1,11,12]


     a very naive approach could be to iterate over the array and for each element first from that element's index to the end of the array if no elment is found then start from the beginning of the array and go till the element's index and find the next greater element. This approach will take O(n^2) time complexity.

     for(int i=0;i<n;i++){
        int j=i+1;
        while(j<n){
            if(nums[j]>nums[i]){
                res.push_back(nums[j]);
                break;
            }
            j++;
        }

        if(j==n){
            j=0;
            while(j<i){
                if(nums[j]>nums[i]){
                    res.push_back(nums[j]);
                    break;
                }
                j++;
            }
        }

     }

     A better approach could be that i will double the array logically

     for each element check n elmets on the right side


        for(int i=0;i<2*n;i++){
            int j=i+1;
            while(j<i+n-1){
                if(nums[j%n]>nums[i%n]){
                    res.push_back(nums[j%n]);
                    break;
                }
                j++;
            }

            if(j==2*n){
                res.push_back(-1);
            }
        }

        time complexity of this approach is O(n*n)



    - Optmized

        - Use the monotonic stack
        - hypothecially double the array

        and start from the (2*n-1)th index and go till 0th index

        - but i will only store the result for the first n elements in the result array

        [2,10,12,1,11]

        double the array

        [2,10,12,1,11,2,10,12,1,11]

        - start from the last element and push it in the stack

        - for each element
            - pop all the elements from the stack which are less than the current element
            - if stack is empty, store -1
            - else store the top element of the stack (only store the result for the first n elements)

            - push the current element in the stack

        - return the result array


        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }

            if(i<n){
                if(st.empty()){
                    res.push_back(-1);
                }else{
                    res.push_back(st.top());
                }
            }

            st.push(nums[i%n]);
        }

 */
