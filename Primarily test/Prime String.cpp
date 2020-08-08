#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
    long long int d=1000001;
    bool b[d];
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int min1=d,max1=1,i,j;
    for(i=2;i*i<d;++i)
    {
        if(b[i]==false)
        {
            for(j=i*i;j<d;j+=i)
            {
                b[j]=true;
            }
        }
    }
    int t;
    cin>>t;
    cin>>ws;
    int c=0;
    while(t--)
    {
        string s;
        cin>>s;
        int arr[123]={0};
        int c=0,l=s.length();
        for(i=0;i<l;i++)
        {
            char ch=s.at(i);
            arr[ch]++;
            if(arr[ch]==1)
            c++;
        }
        bool h=false;
        if(b[c]==false)
        {
            for(i=65;i<=122;++i)
            {
                if(arr[i]!=0 && b[arr[i]]==true)
                {
                    h=true;
                    break;
                }
                
            }
        
        if(h==true)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}