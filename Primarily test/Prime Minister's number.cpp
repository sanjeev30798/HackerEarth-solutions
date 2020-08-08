#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
		int a=1000001;
	bool b[a+1];
	memset(b,false,sizeof b);
	 int i,j;
    b[0]=b[1]=true;
	for(i=2;i*i<=a;i++)
	{
		if(b[i]==false)
		{
			for(j=i*i;j<=a;j+=i)
			b[j]=true;
		}
	}
	int lb,ub;
	cin>>lb>>ub;
	if(lb<=2)
	{
		lb=3;
		cout<<2<<" ";
	}
	if(lb%2==0)
	lb+=1;
	for(i=lb;i<=ub;i+=2)
	{
        if(b[i]==false)
		{
			int sum1=0,d=i;
			while(d!=0)
			{
				sum1+=d%10;
				d/=10;
			}
			if(b[sum1]==false)
			cout<<i<<" ";
        }
	}
	
}