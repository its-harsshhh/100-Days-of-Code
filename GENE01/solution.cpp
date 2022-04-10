#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a,b;
	cin>>a>>b;
	
	if( (a=='R' && b=='B')||(a=='B' && b=='R')||(a=='R' && b=='G')||(a=='G' && b=='R')||(a=='R' && b=='R') )
	{ cout<<"R\n"; }
	
	if( (a=='B' && b=='G')||(a=='G' && b=='B')||(a=='B' && b=='B') )
	{ cout<<"B\n"; }
	
	if(a=='G' && b=='G')
	{ cout<<"G\n"; }
	return 0;
}
