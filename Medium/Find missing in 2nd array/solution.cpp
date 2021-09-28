class Solution{	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    unordered_map<long long,long long> map;
	    vector<long long> v; 
	    for(int i=0;i<N;i++)
	    {
	        if(++map[A[i]]==2)
	        map[A[i]]--;
	        
	    }
	    for(int i=0;i<M;i++)
	    {
	        map[B[i]]++;
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(map[A[i]]==1)
	        v.push_back(A[i]);
	    }
	    return v;
	} 
};