#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long m;
	    int h;
	    cin>>m>>h;
	    
	    if( (m/(h*h)) <=18)
	    {
	        cout<<"1\n";
	    }
	    
	    if( ( (m/(h*h)) >18 ) && ( (m/(h*h)) <=24 ) )
	    {
	        cout<<"2\n";
	    }
	    
	    if( ( (m/(h*h)) >24 ) && ( (m/(h*h)) <=29 ) )
	    {
	        cout<<"3\n";
	    }
	    
	    if( (m/(h*h)) >=30)
	    {
	        cout<<"4\n";
	    }
	    
	}
	return 0;
}
