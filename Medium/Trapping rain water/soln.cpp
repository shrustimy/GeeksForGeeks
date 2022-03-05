/* ---------------------------------- CORRECT SOLUTION TIME COMPLEXITY O(n^2)------------------------------------------------------------ */

class Solution{    
// Function to find the trapped water between the blocks.
    public:
    
    int findLmax(int i,int ar[])
    {
        int maxi=0;
        for(int j=i-1;j>=0;j--)
        {
            maxi=max(maxi,ar[j]);
        }
        return maxi;
    }
    
    int findRmax(int i,int ar[],int n)
    {
        int maxi=0;
        for(int j=i+1;j<n;j++)
        {
            maxi=max(maxi,ar[j]);
        }
        return maxi;
    }
    
    long long trappingWater(int arr[], int n){
        // code here
        long long sum=0;
        int Lmax,Rmax;
        for(int i=0;i<n;i++)
        {
            Lmax=findLmax(i,arr);
            Rmax=findRmax(i,arr,n);
            sum+=max((min(Lmax,Rmax)-arr[i]),0);
        }
    return sum;
    }
};



//-----------BELOW ONE IS WRONG ANSWER------------------------------------------------------------------------------------------------------------------------------------



class Solution{   

// Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long max1=0,max2=0,sum=0,diff=0,pos1,pos2;
        for(int i=0;i<n;i++)
        {
           if(max1<arr[i])
           {
               max1=arr[i];
               pos1=i;
           }
        }
        for(int i=0;i<n;i++)
        {
            if(max2<arr[i] && arr[i]!=max1)
            {
                max2=arr[i];
                pos2=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=max1 && ((i>pos1 && i<pos2) || (i<pos1 && i>pos2)))
            {
                diff=max2-arr[i];
                sum+=diff;
            }
        }
        return sum;
    }
};
