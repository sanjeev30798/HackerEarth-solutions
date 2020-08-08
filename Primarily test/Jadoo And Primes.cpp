#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
    long long int d=100000000;
    bool b[d+1];
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int min1=d,max1=1,i,j;
    
    for(i=2;i*i<=d;++i)
    {
        if(b[i]==false)
        {
    
            for(j=i*i;j<=d;j+=i)
            {
                b[j]=true;
            }
        }
    }
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        i=2;
        ll sum1=0;
        while(count<n)
        {
            if(b[i]==false)
            {
                count++;
                sum1+=i;
            
            }
            i++;
        }
        cout<<sum1<<"\n";
    }
    return 0;
}