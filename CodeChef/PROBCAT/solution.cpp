#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if((x>=1)&&(x<100))
	    {
	        cout<<"Easy\n";
	    }
	    
	    if((x>=100)&&(x<200))
	    {
	        cout<<"Medium\n";
	    }
	    
	    if((x>=200)&&(x<=300))
	    {
	        cout<<"Hard\n";
	    }
	}
	return 0;
}
