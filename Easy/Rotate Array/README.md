## Rotate Array
Expected Time Complexity: `O(N)`

Expected Auxiliary Space: `O(1)`

Link to the question --> [Rotate Array(gfg)](https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1#)

### Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 

Example 1:
```
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}

Output: 3 4 5 1 2

Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
```
Example 2:
```
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}

Output: 8 10 12 14 16 18 20 2 4 6

Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6. 
```
Constraints:
- 1 <= N <= 10<sup>7</sup>
- 1 <= D <= N
- 0 <= arr[i] <= 10<sup>5</sup>