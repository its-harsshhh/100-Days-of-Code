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
	    if( (100*x)<(10*y) )
	    {
	        cout<<"Disposable\n";
	    }
	    else if( (100*x)>(10*y) )
	    {
	        cout<<"Cloth\n";
	    }
	    else
	    {
	        cout<<"Cloth\n";
	    }
	}
	return 0;
}
