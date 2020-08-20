#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int  main()
{
	int t;
  cin>> t;
  while(t--)
  {
		string str;
        cin>>str;
        int siz=str.size();
        long long s=0,c=0;
        for(int i=0;i<siz;i++)
        {
            if(str[i]=='$'||str[i]=='&')
            {
                 s+=(siz-i)*(c+1);
                    c=0;
            }
            else
                c++;
        }
        cout<<s<<endl;
	}
}
