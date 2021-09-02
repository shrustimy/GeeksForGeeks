void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return (s.empty());
}

int pop(stack<int>& s){
	// Your code goes here
	int n=s.top();
	s.pop();
	return n;
}

int getMin(stack<int>& s){
	// Your code goes here
	int min=s.top();
	int b=s.size();
	stack<int> sa(s);
	for(int i=0;i<b;i++)
	{
	    if(min>sa.top())
	    min=sa.top();
	    sa.pop();
	}
	return min;
}