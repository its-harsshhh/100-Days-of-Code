#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	//N -> total questions
	//P -> Passing marks
	//X -> correct questions
	//t -> total test cases
	//total -> total marks obtained
	int t;
	cin>>t;
	while(t--)
	 {
	     int x,n,p;
	     cin>>n>>x>>p;
	     
	     if(x*3-(n-x)>=p)
	     { cout<<"PASS"<<endl;}
	     else
	      {cout<<"FAIL"<<endl;}
	     
	 }
	return 0;
}