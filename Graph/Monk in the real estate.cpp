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
		bool b[100001];
		memset(b,false,sizeof b);
		int i;
		for(i=0;i<n;i++)
		{
			int e1,e2;
			cin>>e1>>e2;
			b[e1]=true;
			b[e2]=true;
		}
		int c1=0;
		for(i=1;i<=10000;i++)
		c1+=b[i];
		cout<<c1<<"\n";
	}
}