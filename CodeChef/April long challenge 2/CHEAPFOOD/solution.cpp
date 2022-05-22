#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if( ((x/100)*10)>100)
	    {
	        cout<<((x/100)*10)<<endl;
	    }
	    else
	    {
	        cout<<100<<endl;
	    }
	}
	return 0;
}
