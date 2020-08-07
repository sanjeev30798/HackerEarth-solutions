#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int i,n,a,j,p;
scanf("%d",&t);
for(i=0;i<=t-1;i++)
{
	map<int,int>m;
	scanf("%d",&n);
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a);
			m[a]=1;
		}
	scanf("%d",&p);
		for(j=0;j<=p-1;j++)
		{
			scanf("%d",&a);
			if(m[a]==1)
			{
				printf("Yes\n");
			}
			else
			{
			printf("No\n");
			}
		}
	}
return 0;
}