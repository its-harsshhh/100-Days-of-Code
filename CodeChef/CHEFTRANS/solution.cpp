#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,y,z;
	    cin>>x>>y>>z;
	    
	    if((x+y)==z)
	    {
	        cout<<"EQUAL\n";
	    }
	    
	    if((x+y)<z)
	    {
	        cout<<"PLANEBUS\n";
	    }
	    
	    if((x+y)>z)
	    {
	        cout<<"TRAIN\n";
	    }
	}
	return 0;
}
