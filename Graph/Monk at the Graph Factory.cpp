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
    int s1=0,t1=t;
	while(t--)
	{
        int r;
		cin>>r;
        s1+=r;
	}
	if(2*(t1-1)==s1)
    cout<<"Yes\n";
    else
    cout<<"No\n";
	
	return 0;
}