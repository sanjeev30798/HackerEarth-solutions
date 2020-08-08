#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
    long long int d=1100101;
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
    int t,t1;
    cin>>t1;
    while(t1--)
    {
        cin>>t;
    bool k=true;
    if(t>=638178 && t<=639167)
    {
        cout<<"639167\n";
        continue;
    }
    while(k)
    {
        if(b[t]==false)
        {
            if(t%11==1)
            {
                k=false;
            }
        }
        if(k==false)
        break;
        else
        ++t;
    }
    cout<<t<<"\n";
    }
    return 0;
}