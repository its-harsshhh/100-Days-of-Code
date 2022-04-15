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
	    if(x%4==0)
	    {
	       cout<<"north\n";
	    }
	    if(x%4==1)
	    {
	       cout<<"east\n";
	    }
	    if(x%4==2)
	    {
	       cout<<"south\n";
	    }
	    if(x%4==3)
	    {
	       cout<<"west\n";
	    }
	    
	}
	return 0;
}
