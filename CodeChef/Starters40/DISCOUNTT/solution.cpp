#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long n,x,y,t,mg;
	cin>>t;
	while(t--)
	{
	    int som1=0,som2=0;
	    cin>>n>>x>>y;
	    int rar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>rar[i];
	        som1+=rar[i];
	        mg=rar[i]-y;
	        
	        if(mg<=0)
	        {
	            som2=som2+0;
	        }
	        else
	        {
	            som2+=(rar[i]-y);
	        }
	        
	    }
	    
	    if((x+som2)<som1)
	    {
	        cout<<"COUPON"<<endl;
	    }
	    else
	    {
	         cout<<"NO COUPON"<<endl;
	        
	    }
	    
	}
	return 0;
}
