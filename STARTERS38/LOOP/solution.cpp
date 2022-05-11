#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a1,b2,m;
	    
	    cin>>a1>>b2>>m;
	    
	    if(a1>b2)
	    {
	        cout<<min(a1-b2,m-a1+b2)<<endl;
	        
	    }
	    else
	    {
	        cout<<min(b2-a1,a1+m-b2)<<endl;
	    }
	    
	}
	return 0;
}
