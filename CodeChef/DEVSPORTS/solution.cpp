#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long z,y;
	    int a,b,c;
	    cin>>z>>y>>a>>b>>c;
	    if((z-y)>=(a+b+c))
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
