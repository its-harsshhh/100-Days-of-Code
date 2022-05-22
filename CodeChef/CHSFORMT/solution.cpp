#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if( (a+b)<3 )
	    {
	        cout<<"1\n";
	    }
	    if( ((a+b)<=10) && ((a+b)>=3) )
	    {
	        cout<<"2\n";
	    }
	    if( ((a+b)<=60) && ((a+b)>=11) )
	    {
	        cout<<"3\n";
	    }
	    if( a+b >60 )
	    {
	        cout<<"4\n";
	    }
	}
	return 0;
}
