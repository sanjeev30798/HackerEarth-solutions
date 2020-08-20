#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
set<string>se;
int main() 
{ 
	string s;
	getline(cin,s);
	int index,n=s.size();
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			index=i;
			break;
		}
	}
	for(int i=0;i<index;i++)
	{
		if(i==index+1)
		{
			break;
		}
		if(i==0)
			cout<<s[i]<<".";
		if(s[i]==' ')
		{
			cout<<s[i]<<s[i+1]<<".";
		}
 
	}
	cout<<" ";
	for(int i=index+1;i<n;i++)
		cout<<s[i];
	
 
 
}
