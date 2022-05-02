#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,win;
	    cin>>n;
	    win=n-1;
	    long long sec=win/2;
	    long long ans=win-sec;
	    cout<<ans*3<<"\n";
	}
	return 0;
}
