#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{   
	    int count=0;
	    long long n,k;
	    cin>>n>>k;
	    
	    int height[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>height[i];
	        
	        if(height[i]>k)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
