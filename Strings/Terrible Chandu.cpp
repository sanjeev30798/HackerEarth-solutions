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
        getline(cin,s);
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
 
	return 0;
}