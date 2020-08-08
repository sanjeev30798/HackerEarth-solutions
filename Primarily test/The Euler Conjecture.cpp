#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
    int d=1000001;;
    bool b[d];
    memset(b,false,sizeof b);
    b[0]=b[1]=true;
    int min1=d,max1=1,i,j;
    for(i=2;i*i<=d;++i)
    {
        if(b[i]==false)
        {
            for(j=i*i;j<=d;j+=i)
            {
                b[j]=true;
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=5 || n%2==1)
        {
            cout<<"No\n";
        }
        else
        {
            bool flag=false;
            for(i=3;i<=n-3;i++)
            {
                if(b[i]==false && b[n-i]==false)
                {
                    flag=true;
                    cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
                    break;
                }
            }
            if(flag==false)
            cout<<"No\n";   
        }
 
    }
    
    return 0;
}