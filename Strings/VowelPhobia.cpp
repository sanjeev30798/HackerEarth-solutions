#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    cin>>ws;
    while(n--)
    {
        string s;
        cin>>s;
        int i,l=s.length(),count=0;
        for(i=0;i<l;i++)
        {
            if((s.at(i)=='a')||(s.at(i)=='e')||(s.at(i)=='i')||(s.at(i)=='o')||(s.at(i)=='u'))
            count+=1;
        }
        cout<<count<<endl;
    }
 
	return 0;
}