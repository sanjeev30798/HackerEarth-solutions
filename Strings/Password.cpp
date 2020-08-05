#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
    int n,i,j;
    cin>>n;
    cin>>ws;
    string s[n],k="";
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    {
        k=s[i];
        reverse(k.begin(),k.end());
        for(j=0;j<n;j++)
        {
            if(s[j]==k)
            {
                int y=k.length();
                cout<<y<<" "<<k.at((y-1)/2)<<endl;
                return 0;
            }
        }
    }
	return 0;
}