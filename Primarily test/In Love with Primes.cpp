#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    int d=100001;
    bool b[d];
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int i,j;
    for(i=2;i*i<=d;++i)
    {
        if(b[i]==false)
        {
            for(j=i*i;j<=d;j+=i)
            b[j]=true;
        }
    }
    while(t--)
    {
        ll n;
        cin>>n;
        bool f=false;
        for(i=2;i<=n;i++)
        {
            if(b[i]==false && b[n-i]==false)
            {
                f=true;
                break;
            }
        }
        if(f==true)
        cout<<"Deepa\n";
        else
        cout<<"Arjit\n";
    }
}