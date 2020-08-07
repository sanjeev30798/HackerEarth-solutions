#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin>>ws;
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0,c4=0,c5=0,i;
    for(i=0;i<t;i++)
    {
        if(s.at(i)=='a')
        c1++;
        else if(s.at(i)=='e')
        c2++;
        else if(s.at(i)=='i')
        c3++;
        else if(s.at(i)=='o')
        c4++;
        else if(s.at(i)=='u')
        c5++;
        
    }
        if(c1>0 && c2>0 && c3>0 && c4>0 && c5>0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO";
}