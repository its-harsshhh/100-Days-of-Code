#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,k;
	    cin>>m>>n>>k;
	    if((n*k)<m)
	    { cout<<"Yes\n"; }
	    else
	    { cout<<"No\n"; }
	}
	return 0;
}
