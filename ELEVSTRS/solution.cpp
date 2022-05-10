#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double n,v1,v2;
	    cin>>n>>v1>>v2;
	    double te,ts;
	    te=((2*n)/v2);
	    ts=( ( n* sqrt(2) )/(v1) );
	    
	    if(te>ts)
	    {
	        cout<<"Stairs\n";
	    }
	    if(te<ts)
	    {
	        cout<<"Elevator\n";
	    }
	}
	return 0;
}
