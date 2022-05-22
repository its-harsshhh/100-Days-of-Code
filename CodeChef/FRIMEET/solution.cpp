#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long x,y;
	    cin>>x>>y;

	        if(x==y)
	        {
	            cout<<"yes\n";
	        }
	        else
	        {
	            if(x>=y)
	            {
	                cout<<"yes\n";
	            }
	            else
	            {
	                cout<<"no\n";
	            }
	        }
	    
	}
	return 0;
}
