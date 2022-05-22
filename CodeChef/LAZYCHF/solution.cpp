#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d,e;
       cin>>a>>b>>c;
       
       d=a*b;
       e=a+c;
       if(d>e)
       {cout<<e<<endl;}
       else
       {cout<<d<<endl;}
   }
   return 0;
}
