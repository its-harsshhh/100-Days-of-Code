#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int carr[n];
	for(int i=0;i<n;i++){
	    cin>>carr[i];
	}
	int warr[n];
	for(int i=0;i<n;i++){
	    cin>>warr[i];
	}
	int t=1000000;
	int a=1000000;
	int at=1000000;
	
	for(int i=0;i<n;i++)
	{
	    if(warr[i]==1){
	        t=min(carr[i],t);
	    }
	    else if(warr[i]==2){
	        a=min(a,carr[i]);
	    }
	    else if(warr[i]==3){
	        at=min(carr[i],at);
	    }
	}
	
	
	
	
	cout<<min(t+a,at)<<endl;
	return 0;
}
