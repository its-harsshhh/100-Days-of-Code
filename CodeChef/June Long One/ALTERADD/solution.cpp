#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b;
	    cin>>a>>b;
	    
	    int qmpi=(b-a)%3;
	    if(qmpi==2)
	    {
	        cout<<"no\n";
	    }
	    else
	    {
	        cout<<"yes\n";
	    }
	   // for(int i=1;i<b;i++)
	   // {
	   //     if( (i%2)!=0 )
	   //     {
	   //         a=a+1;
	   //         if(a>=b)
	   //         {
	   //             break;
	   //         }
	   //     }
	   //     else
	   //     {
	   //         a=a+2;
	   //         if(a>=b)
	   //         {
	   //             break;
	   //         }
	   //     }
	   // }
	    
	   // if(a==b)
	   // {
	   //     cout<<"yes\n";
	   // }
	   // else
	   // {
	   //     cout<<"no\n";
	   // }
	}
	return 0;
}
