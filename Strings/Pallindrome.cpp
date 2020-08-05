#include <iostream>
using namespace std;
 
int main() {
	int n;
    cin>>n;
    while(n--)
    {
        string s,s1="";
        cin>>s;
        int i,l=s.length();
        for(i=0;i<l;i++)
        s1=s.at(i)+s1;
        if(s1==s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
 
	return 0;
}