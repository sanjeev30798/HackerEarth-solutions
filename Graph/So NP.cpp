#include <bits/stdc++.h>
using namespace std;
int c2=0,c3=0;
void DFS(vector<int> adj[],bool b[],int s)
{
	b[s]=true;
	c2+=adj[s].size();
	c3++;
	for(int i=0;i<adj[s].size();++i)
	{
		if(b[adj[s][i]]==false)
		DFS(adj,b,adj[s][i]);
	}
}
int main() 
{
	int n,m,k,i;
	cin>>n>>m>>k;
	vector<int> adj[n+1]{};
	bool b[n+1];
	memset(b,false,sizeof b);
	for(i=0;i<m;++i)
	{
		int e1,e2;
		cin>>e1>>e2;
		adj[e1].push_back(e2);
		adj[e2].push_back(e1);
	}
	int c1=0,min1=0;
	for(i=1;i<=n;++i)
	{
		if(b[i]==false)
		{
			++c1;
			DFS(adj,b,i);
			if(c2>0)
			min1+=(c2/2-(c3-1));
			c2=0;
			c3=0;
		}
	}
	if(c1>k)
	cout<<-1;
	else if(k==c1)
	{
		cout<<min1;
	}
	else
	{
		cout<<k-c1+min1;
	}	
	return 0;
}