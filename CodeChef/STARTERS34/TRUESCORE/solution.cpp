#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    if(c<a || d<b)
	    {
	        cout<<"impossible\n";
	    }
	    else
	    {
	        if( (c-a==d-b)||(c-a>d-b)|| (c-a<d-b) )   
	        {
	             cout<<"possible\n";
	        }
	    }
	    
	}
	return 0;
}
