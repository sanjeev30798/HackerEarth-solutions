#include <bits/stdc++.h>
#define m 10000001
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
    bool b[m];
    long long int a[m]={0};
    int i,j;
    memset(b,false,sizeof b);
    b[1]=true;
    b[0]=true;
    for(i=2;i*i<m;i++)
    {
        if(b[i]==false)
        {
            
            for(j=i*i;j<m;j+=i)
            {
                b[j]=true;
            }
        }
        
    }
    for(i=2;i<m;i++)
    {
        if(b[i]==false)
        a[i]+=a[i-1]+i;
        else
        a[i]+=a[i-1];
    }
	while(t--)
	{
		int l,r;
        cin>>l>>r;
        long long int sum=a[r]-a[l];
        if(b[l]==false)
        sum+=l;
        cout<<sum<<"\n";
	}
	
	
	return 0;
}