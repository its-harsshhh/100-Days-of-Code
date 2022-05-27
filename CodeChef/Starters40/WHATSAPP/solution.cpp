#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=(z*x)-(z*y);
	    cout<<a<<endl;
	}
	return 0;
}
