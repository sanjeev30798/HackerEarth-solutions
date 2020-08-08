#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    bool b[r+1];
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int i,j;
    for(i=2;i*i<=r;i++)
    {
        if(b[i]==false)
        {
            for(j=i*i;j<=r;j+=i)
            b[j]=true;
        }
    }
    for(i=l;i<=r;i++)
    if(b[i]==false)
    cout<<i<<" ";
}