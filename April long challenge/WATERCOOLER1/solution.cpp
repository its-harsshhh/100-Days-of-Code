#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int x,y,m;
     cin>>x>>y>>m;
     if((x*m)<y)            //if(y>(x*m))
     {cout<<"Yes\n"; }
     else
     {cout<<"No\n"; }
   }
   return 0;
}
