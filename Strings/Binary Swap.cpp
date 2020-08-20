#include <bits/stdc++.h>
#define endl "\n"
#define mod 1000000007
using namespace std;
 
 int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n1=s1.size(),n2=s2.size();
	bool flag;
	unordered_map<char,int>f1,f2;
	unordered_map<int,int>f;
	if(n1!=n2)
	{
		flag=0;
	}
	else
	{
		
		for(int i=0;i<n1;i++)
		{
			f1[s1[i]]++;
			f2[s2[i]]++;
		}
		if(f1[48]!=f2[48] || f1[49]!=f2[49])
			flag=0;
		else
		{
			
			for(int i=0;i<n1;i++)
			{
				f[int(s1[i])-int(s2[i])]++;
			}
			if(f[-1]==f[1])
				flag=1;
		}
 
	}
	if(flag)
		cout<<f[1];
	else
		cout<<"-1";
}
