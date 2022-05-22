#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,arr[n],a,vq=0;
	    cin>>n;
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    for(int i=n-1;i>0;i--)
	    {
	        if( arr[i]!=0 )
	        {
	            vq=i;
	            break;
	        }
	    }
	    
	    cout<<vq<<endl;
	    
	       
	}
	return 0;
}
