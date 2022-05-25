#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{int n,k,c=0,d=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=k)
            {
               arr[i]-=k;
               arr[i+1]+=arr[i];
               c++;
            }
            else if(arr[i]<k)
            {
                d=i;
                break;
            }
	    }
	    if(c == n)
             cout<<"YES\n";
        else 
            cout<<"NO "<<d+1<<endl;
	}
	return 0;
}
