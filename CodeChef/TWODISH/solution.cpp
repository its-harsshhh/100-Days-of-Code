#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,n;
	    cin>>n>>a>>b>>c;
	    if(b>=n)
	    {
	        if((a+c)>=n)
	        {
	            cout<<"YES\n";
	        }
	        else
	        {
	            cout<<"NO\n";
	        }
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
