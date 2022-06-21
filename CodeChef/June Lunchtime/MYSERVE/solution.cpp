#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q;
	    cin>>p>>q;
	    int comb=p+q;
	    
	        if((comb)%4==0 || (comb-1)%4==0)
	        {
	            cout<<"Alice\n";
	        }else{
	            cout<<"Bob\n";
	        }
	    
	    
	}
	return 0;
}
