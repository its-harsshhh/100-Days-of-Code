#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a>b)
	    {
	        if(b>c)
	        { cout<<"Alice\n"; }
	        else
	        { cout<<"Bob\n"; }
	    }
	    else
	    {
	        if(a>c)
	        { cout<<"Alice\n"; }
	        else
	        { cout<<"Draw\n"; }
	    }
	}
	return 0;
}
