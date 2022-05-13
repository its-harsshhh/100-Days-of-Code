#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long n,x,s;
	   cin>>n>>x>>s;
	   while(s--)
	   {
	       long long a,b;
	       cin>>a>>b;
	       if(x==a)
	       {
	           x=b;
	       }
	       else if(x==b)
	       {
	           x=a;
	       }
	   }
	   cout<<x<<endl;
	}
	return 0;
}
