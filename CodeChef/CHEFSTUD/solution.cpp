#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    int c=0;
	    string s;
	    cin>>s;
	    int n=s.size();
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if( s[i]=='<' && s[i+1]=='>' )
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
