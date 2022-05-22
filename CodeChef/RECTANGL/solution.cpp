#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if( ((a==b)&&(d==c))||((a==d)&&(b==c))||((b==d)&&(c==a)) )
	    {
	            cout<<"YES\n";
	    }
	    else
	        {
	            cout<<"NO\n";
	        }
	}
	return 0;
}
