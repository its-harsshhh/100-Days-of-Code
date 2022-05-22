#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,temp,n;
	cin>>t;
	int array[10]={6,2,5,5,4,5,6,3,7,6};
	while(t--)
	{
	    long long a ,b,sticksum=0;
	    cin>>a>>b;
	    int sum=a+b;
	    temp=sum;
	    while(temp!=0)
	    {
	        n=temp%10;
	        sticksum=array[n]+sticksum;
	        temp=temp/10;
	    }
	    cout<<sticksum<<endl;
	    
	    
	}
	return 0;
}
