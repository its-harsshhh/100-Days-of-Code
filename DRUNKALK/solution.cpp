#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long k;
	    cin>>k;
	    
	    int steps=0;
	    for(int i=1;i<=k;i++)
	    {
	        
    	    if(i%2==1)
    	    {
    	        steps=steps+3;
    	    }
    	    else
    	    {
    	        steps=steps-1;
    	    }
	    
	    }
	    cout<<steps<<endl;
	}
	return 0;
}
