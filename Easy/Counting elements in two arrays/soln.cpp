
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    vector<int> res;
    for(int i=0;i<m;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr2[j]<=arr1[i])
            {
               cnt++; 
            }
        }
        res.push_back(cnt);
    }
    return res;
    }
};







































