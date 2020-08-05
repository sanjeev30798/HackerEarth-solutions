#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];
        int count=1,k;
        k=a[0];
        for(i=0;i<n-1;i++)
        if(k<a[i+1])
        {
        count++;
        k=a[i+1];
        }
        cout<<count<<endl;
    }
}