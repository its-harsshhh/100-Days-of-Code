#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,x2,y1,y2,z1,z2;
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    if( (x2>=x1)&&(y2>=y1)&&(z1>=z2) )
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";   
	    }
	}
	return 0;
}
