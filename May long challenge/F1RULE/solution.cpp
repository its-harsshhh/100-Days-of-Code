#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    int x,y,per;
	    cin>>x>>y;
	    per=((107*x)/100);
	    if(per>=y)
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
