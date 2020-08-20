#include <bits/stdc++.h>
#define endl "\n"
#define mod 1000000007
using namespace std;
 
 int main()
{
  long long int t;
  cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		unordered_map<char,int>f;
		for(int i=0;i<s.size();i++)
			f[s[i]]++;
		long long int sum;
		sum=min(f['('],f[')'])+min(f['{'],f['}'])+min(f['['],f[']']);
		cout<<sum*2<<endl;
 
 
	}
	return 0;
}
