// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,largest;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int rate[n],length[n];
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>length[i];
// 	    }
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>rate[i];
// 	    }
	    
	    
// 	   // for(int i=0;i<n;i++)
// 	   // {
// 	   //     largest=rate[0];
// 	   //     if(rate[i]>=largest)
// 	   //     {
// 	   //         largest=rate[i];
// 	   //     }
// 	   // }
	   
// 	   //for(int i=0;i<n;i++)
// 	   // {
// 	   //   if( rate[i]==largest )  
// 	   //   {
// 	   //       cout<<i+1<<endl;
// 	   //       break;
// 	   //   }
// 	   // }
	   
	   
// 	}
// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int index=0;
	  int l[n],r[n];
	  int max = 0;
	  
	  for(int i=0;i<n;i++)
	  cin>>l[i];
	  for(int i=0;i<n;i++)
	  cin>>r[i];
	  for(int i=0;i<n;i++)
	  {
	      int y = l[i]*r[i];
	      if(y>max)
	      {
	          max=y;
	          index=i;
	      }
	      else if (y == max)
	      {
	          if(r[i] > r[index])
	          {
	              index=i;
	          }
	      }
	  }
	  cout<<index+1<<endl;
	}
	return 0;
}
