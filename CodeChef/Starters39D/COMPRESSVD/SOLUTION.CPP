#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a, arr[1000000],z=0;
	    cin>>a;
	    for(int i=0;i<a;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int j=0;j<a-1;j++)
	    {
	        if( arr[j]==arr[j+1] )
	        {
	            z++;
	        }
	    }
	    
	    cout<<a-z<<endl;
	}
	return 0;
}
