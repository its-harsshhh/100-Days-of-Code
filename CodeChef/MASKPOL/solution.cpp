#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,r;
	    cin>>n>>a;
	    r=n-a;
	    
	    if(r<a)
	    {
	        cout<<r<<endl;
	    }
	    else
	    {
	        cout<<a<<endl;
	    }
	}
	return 0;
}
