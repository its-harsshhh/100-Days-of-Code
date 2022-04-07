#include <iostream>
using namespace std;

int main(){
int t;
cin>>t;
    while(t--){
    
    int X,Y,Z;
    cin>>X>>Y>>Z;
    //int total= X + 2*Z;

    if (Y-X<=2*Z)
    { cout<<"YES"<<endl; }
    else
    { cout<<"NO"<<endl; }
    
    }
	return 0;
}
