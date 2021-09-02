class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        int b[d],i,j;
        
        for(i=0;i<d;i++)
        {
            b[i]=arr[i];
        }
        for(i=0;i<n-d;i++)
        {
           arr[i]=arr[i+d]; 
        }
        for(j=0;j<d;j++)
        {
            arr[i]=b[j];
            i++;
        }

    }
};