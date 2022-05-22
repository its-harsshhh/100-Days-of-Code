#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A[7],counter=0,dusracounter=0;
	    for(int i=0;i<7;i++)
	    {
	        cin>>A[i];
	        
	        if(A[i]==1)
	        {
	            counter++;
	        }
	        if(A[i]==0)
	        {
	            dusracounter++;
	        }
	    }
	    
	    if(counter>dusracounter)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	    
	    
	}
	return 0;
}
