#include <iostream>
using namespace std;
int main() 
{
   // your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long a=n & ~(n-1);
        if(n&1 || n==a) 
        { cout<<-1<<endl; }
        else
        { cout<< a/2 <<" "<<n/2<<" "<<(n-a)/2<<endl; }
    }
    return 0;
}