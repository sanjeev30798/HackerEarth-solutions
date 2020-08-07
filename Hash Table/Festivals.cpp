#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int q;
		cin>>q;
		map<string,long long int> m;
		long long int a[q][3]={0};
		int i,c=0;
		for(i=0;i<q;i++)
		{
			cin>>ws;
			string s1;
			cin>>s1;
			long long int x;
			cin>>x;
			if(m.find(s1)==m.end())
			{
				m[s1]=c;
				if(a[c][0]==0)
				a[c][0]=x;
				else if(a[c][1]==0)
				a[c][1]=x;
				else if(a[c][2]==0)
				a[c][2]=x;
				else
				{
					if(x>a[c][0])
					swap(a[c][0],x);
				}
				sort(a[c],a[c]+3);
				++c;
			}
			else
			{
				int c1=c;
				c=m[s1];
				if(a[c][0]==0)
				a[c][0]=x;
				else if(a[c][1]==0)
				a[c][1]=x;
				else if(a[c][2]==0)
				a[c][2]=x;
				else
				{
					if(x>a[c][0])
					swap(a[c][0],x);
				}
				sort(a[c],a[c]+3);
				c=c1;
			}
		}
		long long int max1=0;
		string s3="";
		map<string,long long int>::iterator itr;
		for(itr=m.begin();itr!=m.end();++itr)
		{
			i=itr->second;
			if(a[i][0]+a[i][1]+a[i][2]>max1)
			{
				s3=itr->first;
			max1=a[i][0]+a[i][1]+a[i][2];
			}
			else if(a[i][0]+a[i][1]+a[i][2]==max1)
			{
				if(s3>itr->first)
				s3=itr->first;
			}
		}
		cout<<s3<<" "<<max1<<"\n";
	}
}