## Sliding Window

problem related to subarray or substring + largest/smallest/longest/shortest subarray/substring

k : size of subarray

- sometimes k may not be given

window size can be fixed and varible

- Sometimes window size can be asked to find

#### Flow:

    1. Origin of sliding window
    2. Brute
    3. Identify the sliding window
    4. Types of sliding window

##### problem

example:

    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    #=3 (size of subarray)

// brute force by generaing all the subarry of size 3 and find the max sum

    1. [1, 2, 3] = 6
    2. [2, 3, 4] = 9
    3. [3, 4, 5] = 12
    4. [4, 5, 6] = 15
    5. [5, 6, 7] = 18
    6. [6, 7, 8] = 21
    7. [7, 8, 9] = 24

    max = 24
