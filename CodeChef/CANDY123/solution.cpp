#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,L,B,n=1;
	    cin>>a>>b;
	    L=1;
	    B=2;
	    int m=1,c=2;
	    while(n!=0){
	        if(L>a){
	            cout<<"Bob"<<"\n";
	            n = 0;
	        }
	        else if(B>b){
	            cout<<"Limak"<<"\n";
	            n = 0;
	        }
	        else{
	            m+=2;
	            c+=2;
	            L+=m;
	            B+=c;
	        }
	    }
	    
	}
	return 0;
}
