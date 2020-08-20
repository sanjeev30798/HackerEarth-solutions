#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
set<string>se;
int main() 
{ 
	string s;
	getline(cin,s);
	int a,b;
	cin>>a>>b;
	
		if(islower(s[a-1]))
			s[a-1]=toupper(s[a-1]);
		else if(isupper(s[a-1]))
			s[a-1]=tolower(s[a-1]);
		if(islower(s[b-1]))
			s[b-1]=toupper(s[b-1]);
		else if(isupper(s[b-1]))
			s[b-1]=tolower(s[b-1]);
	
	
	cout<<s;
 
 
}
