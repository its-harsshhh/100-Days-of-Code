#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x>0 && y>0)
	    {
	        if(x==y)
	        {
	            cout<<"yes\n";
	        }
	        else
	        {
	            cout<<"no\n";
	        }
	        
	    }
	    else
	        {
	            cout<<"no\n";
	        }
	}
	return 0;
}
