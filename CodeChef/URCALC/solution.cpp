#include <iostream>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	char c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(c=='+')
	{
	    cout<<double(a+b);
	}
	
		if(c=='-')
	{
	    cout<<double(a-b);
	}
	
		if(c=='/')
	{
	    cout<<fixed<<double(a/b);
	}
	
		if(c=='*')
	{
	    cout<<double(a*b);
	}
	
	return 0;
}
