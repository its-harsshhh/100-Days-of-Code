#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    while(n>0){
	    int p=sqrt(n);
	    n=n-(p*p);
	    count++;
	   
	    }
	     cout<<count<<endl;
	}
	return 0;
}
