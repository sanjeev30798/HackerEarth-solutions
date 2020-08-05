#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    cin>>ws;
    string s1="",s2="";
    cin>>s1;
    cin>>s2;
    int t1=-1;
    for(i=0;i<t;i++)
    {
        string k=s1.substr(i,t-i);
        string k1=s2.substr(0,t-i);
        if(k==k1)
        {
            t1=1;
            cout<<i<<endl;
            break;
        }
    }
    if(t1==-1)
    cout<<t1<<endl;
}