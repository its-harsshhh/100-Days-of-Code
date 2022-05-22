#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int a=500-(2*x);
	    int b=1000-(4*(y+x));
	    int c=1000-(4*y);
	    int d=500-(2*(x+y));
	    int e=a+b;
	    int f=c+d;
	    if(e>=f)
	    {
	    cout<<a+b<<endl;
	    }
	    else
	    {
	    cout<<c+d<<endl;
	    }
	}
	return 0;
}
