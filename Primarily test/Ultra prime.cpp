#include <bits/stdc++.h>
using namespace std;
int sumdig(int a)
{
    int sum1=0;
    while(a!=0)
    {
        sum1+=a%10;
        a/=10;
    }
    return sum1;
}
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
    int d=1000100;
    bool b[d];
    long long int i,j;
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int a[d]={0};
    for(i=2;i<d;i++)
    {
        if(b[i]==false)
        {
            if(b[sumdig(i)]==false)
            a[i]=1;
            for(j=i*i;j<d;j+=i)
            {
                b[j]=true;
            }
        }
    }
    for(i=1;i<d;i++)
    {
        a[i]+=a[i-1];
    }
 
	while(t--)
	{
		int l,r,c=0;
        cin>>l>>r;
        
        cout<<a[r]-a[l-1]<<"\n";
	}
	
	
	return 0;
}