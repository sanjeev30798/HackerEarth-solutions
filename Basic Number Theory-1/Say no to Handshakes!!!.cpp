#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll a,s=0;
		cin>>a;
		s=a*(a-1)/2;
		cout<<s<<"\n";
	}
	
	
	return 0;
}