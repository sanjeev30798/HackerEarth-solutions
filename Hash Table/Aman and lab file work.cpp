#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][2];
    int b[n]={0};
    int c[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        b[i]=a[i][0]+a[i][1];
        c[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                swap(b[j],b[j+1]);
                swap(c[j],c[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<c[i]<<" ";
}