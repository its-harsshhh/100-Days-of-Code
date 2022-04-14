#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){ 
    int n,x; 
    cin>>n>>x; 
    int a[n]; 
    int i = 1; 
    int j = 0; 
    if(n%2 != 0) { 
        a[0] = x; 
        ++j; 
    } 
    while(j < n) { 
        a[j++] = (x+i); 
        a[j++] = (x-i); 
        ++i; 
    } 
    for(int i =0 ; i < n ;++i) { 
        cout<<a[i]<<" "; 
    } 
    cout<<"\n"; 
}

int main(){
    ll tu;
    cin>>tu;
    for(int i=0;i<tu;i++)
    {
        solve();
    }
    return 0;
}


