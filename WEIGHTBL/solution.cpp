#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int w=w2-w1;
	    int max=x2*m;
	    int min=x1*m;
	    if(w>max || w<min)
	    {
	        cout<<"0\n";
	    }
	    else
	    {
	        cout<<"1\n";
	    }
	}
	return 0;
}
