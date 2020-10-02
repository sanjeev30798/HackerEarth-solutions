#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);
#define for_t long long long long int T;cin>>T;while(T--)
#define endl "\n"
using namespace std;
int  main()
{
  FIO;
  long long int n,pt;
  string ans;
  cin>>n;
  for(long long int i=0;i<n;i++)
  {
    long long int p;
    string s;
    cin>>s>>p;
    if(p>pt)
    {
      pt=p;
      ans=s;
    }
    else if(p==pt)
    {
      ans=min(s,ans);
    }
  }
  cout<<ans;
  
}
