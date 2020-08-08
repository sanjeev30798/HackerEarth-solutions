#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
    long long int d=2*1000003;
    bool b[d];
    memset(b,true,sizeof b);
    b[0]=b[1]=false;
    int min1=d,max1=1,i,j;
    for(i=2;i*i<d;++i)
    {
        if(b[i]==true)
        {
            for(j=i*i;j<d;j+=i)
            {
                b[j]=false;
            }
        }
    }
    int n;
    cin>>n;
    ll sum1=0,sum4=0;
    ll sum5=accumulate(b,b+n,sum4);
 
    for(i=0;i<n;i++)
    {
        sum1+=sum5%M;
        sum1%=M;
        if(b[i]==true)
        sum5--;
        if(b[n+i]==true)
        sum5++;
    }
    cout<<sum1;
 
    
    return 0;
}