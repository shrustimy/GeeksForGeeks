class Solution{ 
    // arr: input array
    // n: size of the array
    //Function to sort the array into a wave-like array.
    
    
    public static void convertToWave(int arr[], int n){
        
        // Your code here
        //swap adjacent elements of the sorted array
        int temp;
        for(int i=0;i<n-1;i=i+2)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
  }
    
}