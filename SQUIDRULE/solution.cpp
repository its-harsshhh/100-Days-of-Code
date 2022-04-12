#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int A[n],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	        
	    }
	    
	    int min=A[0];
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+A[i]; 
	        if(A[i]<min)
	        {
	            min=A[i];
	        }
	    }
	    
	    cout<<sum-min<<endl;
	    
	    
	}
	return 0;
}
