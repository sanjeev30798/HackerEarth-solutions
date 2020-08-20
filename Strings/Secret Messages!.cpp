#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
#define mod 1000000007
string encode(string s,int m)
{
  string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string s2="abcdefghijklmnopqrstuvwxyz";
  string s3="0123456789";
 
  for(int i=0;i<s.length();i++)
  {
    if(islower(s[i]))
      s[i]=s2[((s[i]-97)+m)%26];
    else if(isupper(s[i]))
      s[i]=s1[((s[i]-65)+m)%26];
    else if(isdigit(s[i]))
      s[i]=s3[((s[i]-48)+m)%10];
  }
  return s;
}
 
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   cout<<encode(s,m)<<endl;
   
  }
  return 0;
}
