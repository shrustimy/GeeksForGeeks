/* Bitonic Point        link to the question --> https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/

TOPIC TAGS: Arrays, Searching                   COMPANY TAGS: Amazon , Microsoft

Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
Example 2:

Input: 
n = 5
arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function findMaximum() which
takes the array arr[], and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

Constraints:
3 ≤ n ≤ 106
1 ≤ arri ≤ 106
*/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int l=0,r=n,mid;
	    if(n==1)
	    return arr[0]; //if there is only one element in the array returns that element
	    while(r>=l) // Binary search iterative method
	    {
	        mid=(r+l)/2;
	        if(mid+1!=n && arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] || mid+1==n && arr[mid]>arr[mid-1]) // if the element(arr[mid]) is not the last element in the array and if its greater
	        return arr[mid];  // than its left and right elements then returns arr[mid] or if it is last element and if it is greater than its previous element then returns arr[mid]
            if(mid+1!=n && arr[mid]<arr[mid+1]) 
	        l=mid+1;
	        else if(arr[mid]<arr[mid-1])
	        r=mid-1;
	    }
	}
};


//Solution 2: Linear traversal

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int max = arr[0];
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    return max;
	}
};
