## for Segment tree

QUERY TO FIND MIN

there can be three case that a given ragne can be divided into 3 parts

1. completely inside the range
   if the range is completely inside the given range then we can return the value of the node

2. completely outside the range
   if the range is completely outside the given range then we can return the maximum value of the node

3. partially inside the range

   it is special case where we have to go to both the left and right child of the node and then return the minimum of the two

## Time Complexity

To build the segment tree we need O(n) time and to query the segment tree we need O(logn) time

The reason why query is taking 0(logn)

There can be three cases of query

1. smallest range (in this case most of the range will be outside the given range)
2. largest range (in this case most of the range will be inside the given range)
3. partially inside the range (in this case we have to go to both the left and right child of the node)

## But what if the query update will be there in form of range

Then we have to update the segment tree in O(n) time and query will be in O(logn) time Total Tc :O(nlogn)

You have to use the lazy propagation to update the range in O(logn) time

## Lazy Propagation

->Update the node when you visited it

->Once you udate propagate the update to the children of the node

## How to update the range

1. We will crate lazy node corresponding to each node
   all the lazy node will have values as 0

if previous udpate remaning do them first

#### RULES TO BE FOLLOWED FOR RANGE UPDATE

1. (L-R) -> value update the range from left to right with the given value

## There can be three conditions for the range update

1. completely inside the range

   - update the node and lazy propogate down & return

2. completely outside the range

   - return

3. partially inside the range

   left child and right child

### Range update

1. if previous lazy node is there then update the node and propogate the update to the children of the node

2. if the range is completely inside the given range then update the node and propogate the update to the children of the node

3. if the range is completely outside the given range then return

4. if the range is partially inside the given range then go to the left and right child of the node and update the node and propogate the update to the children of the node
