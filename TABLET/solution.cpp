#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,b,ans=0;
	    cin>>n>>b;
	    for(int i=0;i<n;i++)
	    {
	        long long w,h,p,temp;
	        cin>>w>>h>>p;
	        if(p<=b)
	        {
	            if(p<=b)
	            {
	                if((w*h)>ans)
	                {
	                    ans=(w*h);
	                }
	                
	            }
	        }
	    }
	         
	        if(ans==0)
	        {
	            cout<<"no tablet\n";
	        }
	        else
	        {  cout<<ans<<endl;   }
	    
	}
	return 0;
}
