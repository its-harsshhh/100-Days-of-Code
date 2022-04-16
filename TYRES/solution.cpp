#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,cb=0,cc=0;
	    cin>>n;
	    
	    a=n/4;
	    if(b=n%4)
	    {
    	    if(b%2==0)
    	    {
    	        cb++;
    	    }
	    }
	    
	    if(cb>=1)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	    
	}
	return 0;
}
