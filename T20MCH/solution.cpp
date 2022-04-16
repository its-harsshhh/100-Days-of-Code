#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,o,c,a,b,max;
	cin>>r>>o>>c;
	a=20-o;
	b=a*6;
	max=b*6;
	
	if((c+max)>r)
	{
	    cout<<"yes\n";
	}
	else
	{
	    cout<<"no\n";
	}
	
	return 0;
}
