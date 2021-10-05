class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    unordered_map<char,int> map;
	    string str;
	    for(int i=0;i<S.size();i++)
	    {
	        map[S[i]]++;
	        
	    }
	    for(int i=0,j=0;i<S.size();i++)
	    {
	        if(map[S[i]]==1)
	        {
	           str[j++]=S[i];
	           
	        }
	    }
	    return str;
	}
};