#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    if(n%2==0)
	        {a=n/2;
	           
	            cout<<a+1<<endl;
	        }
	    else
	        {
	            cout<<(n+1)/2<<endl;
	        }
	    
	   
	}
	return 0;
}
