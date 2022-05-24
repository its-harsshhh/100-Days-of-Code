#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a=0;
	long int n;
	cin>>t;
	while(t--)
	{ 
	    cin>>n;
	    int arr[n];
	    a=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j]) a++;
            }
            if(a%2!=0)
            { cout<<arr[i]<<endl;
               break; 
            }
           
        }
	}
	return 0;
}
