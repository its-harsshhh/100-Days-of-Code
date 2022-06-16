#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >>T;
while(T--)
{
    int N=0;
    string DNA;
    cin>>N>>DNA;
    string qwerty;
    for(int i=0;i<DNA.length(); i+=2)
    {
        if(DNA[i]=='0' && DNA[i+1]=='0')
        {
            qwerty+='A';
        }
        else if(DNA[i]=='0' && DNA[i+1]=='1')
        {
            qwerty+='T';
        }
        else if(DNA[i]=='1' && DNA[i+1]=='0')
        {
         qwerty+='C';
        }
        else
        {
            qwerty+='G';
        }
    }
        cout << qwerty<<endl;
	
	}
	return 0;
}
