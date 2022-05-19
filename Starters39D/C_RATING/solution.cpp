#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long x,y,n;
	    cin>>x>>y;
	    n=y-x;
	    if(n%8 > 0)
	    {
	        cout<<(n/8)+1<<endl;
	    }
	    else
	    {
	        cout<<(n/8)<<endl;
	    }
	    
	}
	return 0;
}
