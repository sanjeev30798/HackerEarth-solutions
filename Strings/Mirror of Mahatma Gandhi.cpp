#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string k=s;
	    reverse(k.begin(),k.end());
	    int c1=0,c2=0,l=s.length();
	    for(int i=0;i<l;i++)
	    {
	        char ch=s.at(i);
	        if(ch=='0' || ch=='1'||ch=='8')
	        c1++;
	        
	    }
	   if(k.compare(s)==0 &&(c1==l))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}