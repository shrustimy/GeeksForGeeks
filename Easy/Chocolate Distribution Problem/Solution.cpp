class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long minDiff=INT_MAX,diff=0;
    if(m==0||n==0)
    return 0;
    if(n<m)
    return -1;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if((i+m-1)<n)
        {
        diff=a[i+m-1]-a[i];
        }
        else
        {
        break;
        }
       minDiff=min(diff,minDiff); 
    }
    return minDiff;
    }   
};