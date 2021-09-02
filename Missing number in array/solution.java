class Solution {
    int MissingNumber(int array[], int n) {
        // Your Code Here
        int sum=(n)*(n+1)/2;
        int sum1=0;
        for(int i=0;i<n-1;i++)
        {
           sum1+=array[i]; 
        }
        return (sum-sum1);
    }
}