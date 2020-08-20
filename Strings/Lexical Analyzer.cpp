#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
set<string>se;
int main() 
{ 
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		bool f=0;
		string s,ss="";
		getline(cin,s);
		
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='=')
			{
				f=1;
				break;
			}
			ss=ss+s[i];
		}
		if(f)
			se.insert(ss);
	}
	cout<<se.size();
 
 
}
