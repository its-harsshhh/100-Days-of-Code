#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,sum=0,y;
	    cin>>n>>x;
	    
	    int a[n-1];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    
	    if( y= ( (x*n)-sum ) )
	    {
	        if(y>0)
	        {
	            cout<<y<<endl; 
	        }
	        else
	        {
	            cout<<"0"<<endl;
	        }
	    }
	}
	return 0;
}
