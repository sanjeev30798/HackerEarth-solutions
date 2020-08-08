#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int g;
    long long int f=1,q=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        g=(__gcd(g,a[i]))%(1000000007);
        f=(f*a[i])%(1000000007);
    }
    for(i=1;i<=g;i++)
    {
        q=(q*f)%(1000000007);
    }
    cout<<q;
}