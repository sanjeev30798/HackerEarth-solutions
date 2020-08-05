#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t,i;
	cin>>t;
	cin>>ws;
	string s;
	cin>>s;
	vector<char> ch;
	ch.push_back(s.at(0));
	for(i=1;i<t;i++)
	{
	    char c=s.at(i);
	    if(ch.back()==c)
	    ch.pop_back();
	    else
	    ch.push_back(c);
	}
	cout<<ch.size()<<"\n";
	for(i=0;i<ch.size();i++)
	cout<<ch[i];
}