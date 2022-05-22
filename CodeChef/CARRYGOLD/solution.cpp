#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y,i;
	    cin>>n>>x>>y;
	    i=n+1;
	    if((i*y)>=x)
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
