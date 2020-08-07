#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j,l=s.length(),ub,max1=0;
        int a[123]={0};
        for(i=0;i<l;i++)
        a[s.at(i)]++;
        for(i=97;i<=122;i++)
        {
            if(a[i]>1)
            {
                max1++;
            }
        }
    if(max1==0)
    cout<<"No\n";
    else
    cout<<"Yes\n";
    }
}