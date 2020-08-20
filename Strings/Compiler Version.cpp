#include <bits/stdc++.h> 
#define endl "\n"
using namespace std; 
#define mod 1000000007
int main()
{
 string s,c;
 while(getline(cin,s))
 {
  c="";
  bool f=0;
  int n=s.length();
  for(int i=0;i<n;i++)
  {
    if(f)
    {
      c=c+s[i];
      continue;
    }
 
    if(i<n && s[i]=='/' && s[i+1]=='/')
    {
      f=1;
      c=c+"//";
      i++;
    }
    else if(i<n && s[i]=='-' && s[i+1]=='>')
    {
      c=c+".";
      i++;
    }
	else
	{
		c=c+s[i];
	}
    
  }
 
  cout<<c<<endl;
 
 }
}
