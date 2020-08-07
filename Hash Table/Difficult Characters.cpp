#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string s;
        cin>>s;
        int n=26;
        int a[26]={0},i;
        char ch[26],ch1='z';
        for(i=0;i<26;i++)
            ch[i]=ch1--;
        for(i=0;i<s.length();i++)
        {
            a[122-s.at(i)]++;
        }
        int j;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(ch[j],ch[j+1]);
                }
            }
        }
        for(i=0;i<26;i++)
        {
            cout<<ch[i]<<" ";
        }
        cout<<"\n";
    }
}