#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,c=0;
	    cin>>n;
	    while(n--)
	    {
	        string s;
	        cin>>s;
	        if(s=="START38")
	        {
	            count++;
	        }
	        else
	        {
	            c++;
	        }
	        
	    }
	    cout<<count<<" "<<c<<endl;
	}
	return 0;
}
