#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z,a;
	    cin>>x>>y>>z;
	    a=z-(y/x);
	    if(a<=0)
	    {
	       cout<<"0\n"; 
	    }
	    else
	    {
	        cout<<a<<"\n";
	    }
	}
	return 0;
}
