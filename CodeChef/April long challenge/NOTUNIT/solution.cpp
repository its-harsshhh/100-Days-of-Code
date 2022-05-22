#include <bits/stdc++.h> 
#define ll long long 
using namespace std; 
int main() 
{ 
    ll sh; 
    cin >> sh; 
    while (sh--) 
    { 
        ll a, b; 
        ll i = -1; 
        cin >> a >> b; 
        if (a % 2 == 0) 
        { 
            if ((a + 2) <= b) 
                cout << a << " " << a + 2; 
            else 
                cout << i; 
        } 
        else if (a % 3 == 0) 
        { 
            if ((a + 3) <= b) 
                cout << a << " " << a + 3; 
            else 
                cout << i; 
        } 
        else 
        { 
            if ((a + 3) <= b) 
                cout << a + 1 << " " << a + 3; 
            else 
                cout << i; 
        } 
        cout << endl; 
    } 
}