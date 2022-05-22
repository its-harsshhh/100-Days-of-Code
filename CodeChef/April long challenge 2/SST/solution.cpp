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
	    int z=a*2;
	    if(z==b)
	    {
	        cout<<"any\n";
	    }
	    else if (z>b)
	    {
	        cout<<"first\n";
	    }
	    else
	    {
	        cout<<"second\n";
	    }
	}
	return 0;
}
