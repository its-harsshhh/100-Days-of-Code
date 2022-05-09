#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
 int n,nocounter=0,foreigncounter=0,indiancounter=0;
 cin>>n;
 char a[n];
 for(int i=0;i<n;i++){
 cin>>a[i];
 }
 for(int i=0;i<n;i++){
 if(a[i]=='N'&&a[i]!='Y'&&a[i]!='I'){
 nocounter++;
 }
 }
 for(int i=0;i<n;i++){
 if(a[i]=='Y'||a[i]=='N'&&a[i]!='I'){
 foreigncounter++;
 }
 }
 for(int i=0;i<n;i++){
 if(a[i]=='I'||a[i]=='N'&&a[i]!='Y'){
 indiancounter++;
 }
 }
 if(nocounter==n){
 cout<<"NOT SURE"<<endl;
 }else if(foreigncounter==n){
 cout<<"NOT INDIAN"<<endl;
 }else if(indiancounter==n){
 cout<<"INDIAN"<<endl;
 }
	}
	return 0;
}
