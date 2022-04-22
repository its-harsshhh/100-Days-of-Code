#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    int w=(x+(y/2))*h;
	    if(w<=c)
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
