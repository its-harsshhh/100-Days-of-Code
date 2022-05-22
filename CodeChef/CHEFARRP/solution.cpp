#include<bits/stdc++.h>
using namespace std;

int numOfsubarrays(int arr[] , int n)
{
	int count = 0; 
	for (int i=0; i<n; i++)
	{
		int product = arr[i];
		int sum = arr[i];
		for (int j=i+1; j<n; j++)
		{
			
			if (product==sum)
				count++;
				

			product *= arr[j];
			sum += arr[j];
		}

		if (product==sum)
			count++;
			
	}
	return count;
	
}


int main()
{
    int t;
 	cin>>t;
 	while(t--)
 	{
 	    int n;
 	    cin>>n;
 	    int arr[n],l=n-1;
 	    for(int i=0;i<n;i++)
 	    {
 	        cin>>arr[i];
 	    }
 	   
    	cout << numOfsubarrays(arr , n);
    	cout<<endl;
 	}
	return 0;
}

