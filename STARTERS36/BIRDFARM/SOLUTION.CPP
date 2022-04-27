#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int x,y,z;
        cin>>x>>y>>z;
        
        if(z%y==0 && z%x==0)
        {
            cout<<"ANY\n";
        }
        else if(z%x==0)
        {
            cout<<"CHICKEN\n";
        }
        else if(z%y==0)
        {
            cout<<"DUCK\n";
        }
        else{
            cout<<"NONE\n";
        }
	}
	return 0;
}
