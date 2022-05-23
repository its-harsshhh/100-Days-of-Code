#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long k;
	    int n,arr[n];
	    cin>>n>>k;
	    
	    for(int i=1;i<=n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<=k)
	        {
	            cout<<"1";
	            k=k-arr[i];
	        }
	        else{
	            cout<<"0";
	        }
	        
	    }
	    cout<<endl;
	
	}
	return 0;
}
