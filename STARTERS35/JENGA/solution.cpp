#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    if(n<=x && x%n==0)
	    {
	        cout<<"yes\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}
	return 0;
}