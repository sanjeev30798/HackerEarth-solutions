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
        int l=s.length(),i;
        int a[123];
        memset(a,0,sizeof a);
        for(i=0;i<l;i++)
        {
            a[s.at(i)]++;
        }
        int diff=0;
        for(i=97;i<=122;i++)
        {
            diff+=a[i]%2;
        }
        if(diff>=1)
        cout<<diff-1<<"\n";
        else
        cout<<0<<"\n";
 
    }
}