#include <iostream>
using namespace std;
 
int main() {
	int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int t=0,i;
        for(i=0;i<s.length()-1;i++)
        {
            if(abs(s.at(i)-s.at(i+1))==1  ||abs(s.at(i)-s.at(i+1))==25 )
            t++;
        }
        if((t==s.length()-1)||(s.length()==1))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
 
 
	return 0;
}