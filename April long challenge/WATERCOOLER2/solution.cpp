#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
   cin>>t;
   while(t--)
   {
     int x,y,m,a;
     cin>>x>>y;
     a=(y/x);
     if( (y%x)!=0 )
     { cout<<a<<"\n"; }
     else
     { cout<<a-1<<"\n"; }
   }
	return 0;
}
