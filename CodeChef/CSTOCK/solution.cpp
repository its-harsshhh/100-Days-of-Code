#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double s,a,b,c,d,e;
	    cin>>s>>a>>b>>c;
	    
	       d=s + ( (c*s)/100 );
	       if(a<=d && d<=b)
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
