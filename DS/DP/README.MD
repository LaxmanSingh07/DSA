### DYNAMIC PROGRAMMING

Those who can't remember the past are condemned to repeat it. - George Santayana

There are two ways to solve a problem:

1. **Top-Down Approach** - Start solving the given problem by breaking it down. If you see that the problem has been solved already, then just return the saved answer. If it has not been solved, solve it and save the answer. This is usually easy to think of and very intuitive. This is termed as **Memoization**.

2. **Bottom-Up Approach** - This is usually done using **Tabulation**. In this approach, we solve the problem in a bottom-up manner. This is usually done using iteration. Most of the dynamic programming problems can be solved using this approach.

### SOME CHARACTERISTICS OF DYNAMIC PROGRAMMING

- Overlapping Subproblems
- Optimal Substructure

### OVERLAPPING SUBPROBLEMS

Like Divide and Conquer, Dynamic Programming combines solutions to sub-problems. Dynamic Programming is mainly used when solutions of same subproblems are needed again and again. In dynamic programming, computed solutions to subproblems are stored in a table so that these don’t have to be recomputed. So Dynamic Programming is not useful when there are no common (overlapping) subproblems because there is no point storing the solutions if they are not needed again. For example, Binary Search doesn’t have common subproblems. If we take an example of following recursive program for Fibonacci Numbers, there are many subproblems which are solved again and again.

### OPTIMAL SUBSTRUCTURE

A given problems has Optimal Substructure Property if optimal solution of the given problem can be obtained by using optimal solutions of its subproblems. For example the shortest path problem has following optimal substructure property:

If a node x lies in the shortest path from a source node u to destination node v then the shortest path from u to v is combination of shortest path from u to x and shortest path from x to v. The standard All Pair Shortest Path algorithms like Floyd–Warshall and Bellman–Ford are typical examples of Dynamic Programming.

### Ways to understand the problem

figure out
min or max output

try all possible way comes in
figure out the best out

Recursion -----> All possible ways

tip by striver

1. Try to represent the problem in terms of index
2. Do all possible stuffs on that index according to the problem statment
3. sum of all stuffs ----> (count all ways)
   min(of all stuffs ) -----> find min
