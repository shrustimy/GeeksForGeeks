/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Example 1:

Input:
N = 5
arr[]= {0 2 1 2 0}

Output:
0 0 1 2 2

Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}

Output:
0 0 1

Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() 
that takes an array arr and N as input parameters and sorts the array in-place.

Topic Tags: Arrays , Sorting

Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2      */

void sort012(int a[], int n)  // Time complexity of this solution O(n)
{
    int cnt1=0,cnt2=0,cnt3=0,i,b,c;
    for(i=0;i<n;i++) //counts the number of 0s , 1s and 2s 
    {
        if(a[i]==0)
        cnt1++;
        else if(a[i]==1)
        cnt2++;
        else 
        cnt3++;
    }
    for(i=0;i<cnt1;i++) // initializes the array in ascending order based on count values..
    a[i]=0;
    b=cnt1+cnt2;
    for(i=cnt1;i<b;i++)
    a[i]=1;
    c=b+cnt3;
    for(i=b;i<c;i++)
    a[i]=2;
    
}