#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main() {
	
    int t;
	cin>>t;
    cin>>ws;
	while(t--)
	{
	    string s;
        cin>>s;
        int i,l=s.length();
        string s1="";
        for(i=0;i<l;++i)
        {
            char ch=s[i];
            if(ch>=65 && ch<=90)
            {
                ch+=32;
            }
            if(ch!='a' && ch!='e' && ch!='i'&& ch!='o' && ch!='u'&&ch!='y')
            s1=s1+"."+ch;
        
        }
        cout<<s1<<"\n";
	}
	return 0;
}