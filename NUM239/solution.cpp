#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    int L,R;
   
    int c;
    while(t--){
        c=0;
         cin>>L>>R;
        for(int i=L;i<=R;i++)
        {
            if((i%10==2)||(i%10==3)||(i%10==9))
            {
                c++;
            }
        }
        cout<<c<<endl;
        
    }
	// your code goes here
	return 0;
}
