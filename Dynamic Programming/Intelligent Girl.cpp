#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,l=s.length();
    int a[l]={0};
    if(int(s.at(l-1))%2==0)
    a[l-1]=1;
    for(i=l-2;i>=0;i--)
    {
        if(int(s.at(i))%2==0)
        a[i]=a[i+1]+1;
        else
        a[i]=a[i+1];
    }
    for(i=0;i<l;i++)
    cout<<a[i]<<" ";
    
}