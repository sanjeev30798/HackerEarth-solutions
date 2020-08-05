#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a%b!=0)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    return b;
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    int i,j,k,g;
    for(i=n-2;i>=1;i--)
    {
        g=gcd(n,i);
        if(g==1)
        {
            break;
        }
    }
    cout<<i<<" ";
	return 0;
}