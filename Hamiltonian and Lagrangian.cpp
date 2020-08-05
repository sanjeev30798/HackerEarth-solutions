#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    vector<int> b;
    int i,j;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int max=a[t-1];
    //b.push_back(max);
    for(j=t-1;j>=0;j--)
    {
        if(a[j]>=max)
        {
            b.push_back(a[j]);
            max=a[j];
        }
    }
    for(j=b.size()-1;j>=0;j--)
    cout<<b[j]<<" ";
}