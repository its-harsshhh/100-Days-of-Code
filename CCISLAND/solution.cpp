#include <iostream>
using namespace std;
int min(int a, int b)
	    {
	        if(a<b)
	        { return a; }
	        else
	        { return b; }
	    }
	    
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,xr,yr,D,a,b;
	    cin>>x>>y>>xr>>yr>>D;
	    
	    a=(x/xr);
	    b=(y/yr);
	    int v=min(a,b);
	    if(D<=v)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"No\n";    
	    }
	    
 	}
	return 0;
}
