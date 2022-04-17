#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,h=1;
	    int a=1,b=2,c=3;
	    cin>>x;
	    if(x%3==1)
	    {
	       cout<<"HUGE\n";
	    }
	    if(x%3==2)
	    {
	       cout<<"SMALL\n";
	    }
	    if(x%3==0)
	    {
	       cout<<"NORMAL\n";
	    }
	    
	}
	return 0;
}
