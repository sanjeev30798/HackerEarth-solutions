#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string s;
        cin>>s;
        int a[123]={0};
        for(i=0;i<s.length();i++)
        {
            a[s.at(i)]++;
        }
        int b[4]={0};
        b[0]=a['r'];b[1]=a['u'];b[2]=a['b'];b[3]=a['y'];
        sort(b,b+4);
        cout<<b[0]<<"\n";
        
    }
}