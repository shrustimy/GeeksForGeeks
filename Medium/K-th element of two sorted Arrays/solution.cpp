class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       int arr[m+n],i=0;
       for(;i<n;i++)
       {
           arr[i]=arr1[i];
       }
       int j=0;
       for(;i<m+n;i++)
       {
           arr[i]=arr2[j++];
       }
       sort(arr,arr+(m+n));
       return arr[k-1];
    }
};
