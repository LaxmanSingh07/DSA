### two pointers / sliding widnow

- There are couple of senerios

#### 1. Costant window size

ex: nums =[-1,2,3,3,4,5-1] k=4

- here we need to find the 4 size subarray with max sum
- first of all i will take two pointers left and right

- left = 0 and right = 0
- sum = 0

- i will move right pointer till k and calculate the sum

```
for(i=0;i<k;i++)
    sum+=nums[i]

```

- now I will just add one element to the sum and remove the first element from the sum (by subtracting with the help of left pointer)

```cpp

int left = 0;
int right = 0;

int maxi=INT_MIN;
int k=4;

int sum=0;

for(int i=0;i<k;i++)
    sum+=nums[i];

maxi=max(maxi,sum);

for(int i=k;i<nums.size();i++)
{
    sum+=nums[i]-nums[left];
    maxi=max(maxi,sum);
    left++;
}


```

#### 2. Variable window size

ex: nums=[2,5,1,7,10] k=14

- find the continous longest subarray with sum less than or equal to k

- here we need to find the continous subarray with sum less than or equal to k

###### brute force

- generate all the subarrays and find the sum and check if it is less than or equal to k

- but this will take O(n^2) time

```cpp

for(int i=0;i<nums.size();i++){
    int sum=0;
    for(int j=i;j<nums.size();j++){
        sum+=nums[j];
        if(sum<=k)
            maxi=max(maxi,j-i+1);

        if(sum>k)
            break;

    }
}

// O(n^2)
// space O(1)
```

###### Better approach

- here we will use two pointers left and right

- left=0 and right=0

- sum=0

- we will move right pointer till sum is less than or equal to k (expand the window)

- if sum is greater than k then we will move left pointer to right (shrink the window)

```cpp

int left=0;
int right=0;

int sum=0;

int maxi=INT_MIN;

while(right<nums.size())
{
    sum+=nums[right];

    while(sum>k)
    {
        sum-=nums[left];
        left++;
    }

    maxi=max(maxi,right-left+1);
    right++;
}

// time complexity O(n+n ) (n for right and n for left)
// space complexity O(1)



```

### Best approach

- instaed of shrinking the window multiple times we can just shrink the window once

- Intuition: don't shrink the window < maxsubaarylen
  - because it will reduce the length of the subarray

```cpp

int left=0;
int right=0;

int sum=0;

int maxi=INT_MIN;

while(right<nums.size())
{
    sum+=nums[right];

    if(sum<=k)
    {
        maxi=max(maxi,right-left+1);
    }
    else
    {
        sum-=nums[left];
        left++;
    }

    right++;
}
```

### 3. No of subarrays where (conditions)

- using pattern 2

ex: find subarrays with sum = k

-- where we don't now the exactly when to expand and shrink the window

- here we will use some technique like

(no of subarrays with sum<=k) - (no of subarrays with sum<=k-1)

### 4. Shortest/mimimum window <condition>

shortest shrink window as an answer
