## GREEDY ALGORITHM

`A greedy algorithm` is an `approach` for `solving a problem by selecting the best option available at the moment`. It doesn't worry whether the current best result will bring the overall optimal result.

![greedy](download.png)

`The algorithm never reverses the earlier` decision even if the choice is wrong. `It works in a top-down approach.`

`This algorithm may not produce the best result for all the problems`. It's because it always goes for the local best choice to produce the global best result.

However, we can determine if the algorithm can be used with any problem if the problem has the following properties:



//general strcture of the greddy algorithm 


getOptimalSolution(item arr[],int n)

1. Intialize: res=0

2. while(All iteam are not considered)
{
3. Select the best item
4. Add the item to the solution
5. Update the res
6. Remove the item from the list

}



//limitation of greedy algorithm

1. Greedy algorithm may not give the optimal solution for all the problems.
2. Greedy algorithm may not work for all the problems.
3. Greedy algorithm may not work for all the input.
4. Greedy algorithm may not work for all the cases.



Application of greedy algorithm


finding optimal solution    
1. Activity selection problem
2. Job sequencing problem
3. Huffman coding
4. Prim's algorithm
5. Kruskal's algorithm
6. Dijkstra's algorithm
7. Fractional knapsack problem
8. Graph coloring problem
9. Travelling salesman problem
10. Minimum spanning tree

----> finding close to optimal solution of NP-hard problem like Travelling salesman problem, knapsack problem, graph coloring problem, etc.




