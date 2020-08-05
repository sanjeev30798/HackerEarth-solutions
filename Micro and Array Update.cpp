#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n],min1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        min1=*min_element(a,a+n);
        if(min1>=k)
        cout<<0<<"\n";
        else
        {
            cout<<k-min1<<"\n";
        }
    }
}