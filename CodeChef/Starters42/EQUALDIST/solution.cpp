#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b;
	    c=a+b;
	    if(c%2==0)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
}
