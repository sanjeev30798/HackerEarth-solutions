#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,s=1,x=2;
        cin>>a;
        int i;
        while(a>0)
        {
            if(a%2==1)
            s=(s*x)%(1000000007);
            x=(x*x)%(1000000007);
            a=a/2;
        }
 
        cout<<s-1<<"\n";
    }
}