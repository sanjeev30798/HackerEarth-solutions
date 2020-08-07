#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i,l=s.length();
		map<char,long long int> a;
		vector<long long int> a1;
		long long int sum1=0;
		for(i=0;i<l;++i)
		{
			char ch=s.at(i);
			if(a.find(ch)==a.end())
			{
				a[ch]=1;
			}
			else
			{
				sum1+=a[ch];
				a[ch]+=1;
			}
		}
		cout<<sum1<<"\n";
	}
}