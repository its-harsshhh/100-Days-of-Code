#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,earn,x,y,z;
	    cin>>n;
	    earn=n*50;
	    x= ((20*earn)/100);
	    y= ((20*earn)/100);
	    z= ((30*earn)/100);
	    cout<<(earn-(x+y+z))<<endl;
	}
	return 0;
}
