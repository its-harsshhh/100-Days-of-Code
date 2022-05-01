#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=z)
	    {
	        if((x+y)<=z)
	        {
	            cout<<"2\n";
	        }
	        else
	        {
	            cout<<"1\n";
	        }
	    }
	    else
	    {
	        cout<<"0\n";
	    }
	}
	return 0;
}
