#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int g=n/6;
	    int r=n%6;
	    
	    if(n>6 && r==0)
	    {
	        cout<<g*x<<endl;
	    }
	    if(n>6 && r!=0)
	    {
	        g++;
	        cout<<(g*x)<<endl;
	    }
	    if(n<=6)
	    {
	        cout<<(1*x)<<endl;
	    }
	    if(n==0)
	    {
	        cout<<0<<endl;
	    }
	  
	}
	return 0;
}
