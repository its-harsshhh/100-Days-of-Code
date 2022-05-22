#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,a,b,c,d;
	    cin>>n;
	    cin>>a>>b>>c>>d;
	    
	    if(a+b+c+d==n)
	    {
	        if(a>=b)
	        {
	            if(a>=c)
	            {
	                if(a>=d)
	                {
	                    cout<<a<<endl;
	                }
	                else
	                {
	                    cout<<d<<endl;
	                }
	            }
	            else
	            {
	                if(c>=d)
	                {
	                    cout<<c<<endl;
	                }
	                else
	                {
	                    cout<<d<<endl;
	                }
	            }
	            
	        }
	        else
	        {
	            if(b>=c)
	            {
	                if(b>=d)
	                {
	                    cout<<b<<endl;
	                }
	                else
	                {
	                    cout<<d<<endl;
	                }
	            }
	            else
	            {
	                if(c>=d)
	                {
	                    cout<<c<<endl;
	                }
	                else
	                {
	                    cout<<d<<endl;
	                }
	            }
	        }
	    }
	    
	}
	return 0;
}
