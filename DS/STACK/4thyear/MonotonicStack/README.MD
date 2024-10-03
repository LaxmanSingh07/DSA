A monotonic stack is a stack data structure that is either monotonically increasing or monotonically decreasing. It helps in solving problems where you need to maintain a sequence that is ordered in a specific way. The main idea is to keep the elements in the stack such that every element is in a specific order compared to the others. This property is useful for various range query problems and optimizing certain types of algorithms, especially those involving comparisons between elements.

### Monotonic Increasing Stack

In a monotonic increasing stack, elements are arranged in non-decreasing order from the bottom to the top of the stack. When a new element is added:

- Remove all elements from the stack that are greater than the new element.
- Push the new element onto the stack.

### Monotonic Decreasing Stack

In a monotonic decreasing stack, elements are arranged in non-increasing order from the bottom to the top of the stack. When a new element is added:

- Remove all elements from the stack that are smaller than the new element.
- Push the new element onto the stack.

### Famous Problems Using Monotonic Stack

1. **Next Greater Element**:

   - **Problem**: Given an array, find the next greater element for each element in the array.
   - **Monotonic Stack**: Typically uses a monotonic decreasing stack.

2. **Next Smaller Element**:

   - **Problem**: Given an array, find the next smaller element for each element in the array.
   - **Monotonic Stack**: Typically uses a monotonic increasing stack.

3. **Largest Rectangle in Histogram**:

   - **Problem**: Given the heights of bars in a histogram, find the area of the largest rectangle that can be formed within the bounds of the histogram.
   - **Monotonic Stack**: Used to keep track of bar indices in an increasing order to compute areas.

4. **Trapping Rain Water**:

   - **Problem**: Given the height map of a terrain, find how much water it can trap after raining.
   - **Monotonic Stack**: Helps to find boundaries of trapped water.

5. **Daily Temperatures**:

   - **Problem**: Given a list of daily temperatures, return a list such that for each day in the input, tells you how many days you would have to wait until a warmer temperature.
   - **Monotonic Stack**: Typically uses a monotonic decreasing stack.

6. **Sliding Window Maximum**:
   - **Problem**: Given an array and an integer \( k \), find the maximum for each sliding window of size \( k \).
   - **Monotonic Stack**: Used in conjunction with deque to maintain maximum elements in a window.
