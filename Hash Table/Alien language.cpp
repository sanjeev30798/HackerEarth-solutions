#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        int i;
        int a[123]={0},b[123]={0};
        for(i=0;i<s.length();i++)
        a[s.at(i)]++;
        for(i=0;i<s1.length();i++)
        b[s1.at(i)]++;
        int flag=0;
        for(i=65;i<123;i++)
        {
            if(a[i]!=0 && b[i]!=0)
            flag=1;
        }
        if(flag==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}