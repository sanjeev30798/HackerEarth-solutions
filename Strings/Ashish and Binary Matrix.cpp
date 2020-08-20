#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
#define mod 1000000007
int main()
{
 long long t;
 cin>>t;
 while(t--)
 {
   set<string> s;
  int n,m;
		scanf("%d %d",&n,&m);
		string str;
		for(int i=0;i<n;++i)
		{
			cin>>str;
			s.insert(str);
		}
		if(s.size()==n)
			printf("Yes\n");
		else
			printf("No\n");
		s.clear();
 }
}
