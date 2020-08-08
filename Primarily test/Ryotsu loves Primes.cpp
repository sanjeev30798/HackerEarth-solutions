#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	]
    int a=1000001;
	bool b[a+1];
	memset(b,false,sizeof b);
	int i,j;
    b[0]=b[1]=true;
	for(i=2;i*i<=a;i++)
	{
		if(b[i]==false)
		{
			for(j=i*i;j<=a;j+=i)
			b[j]=true;
		}
	}
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c=0,sum1=0;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;i<n;i++)
        {
            if(b[arr[i]]==false)
            {
                c++;
            }
            if(c>=1 && c%k==0)
            {
            sum1+=arr[i];
            c=0;
            }
        }
        cout<<sum1<<"\n";
    }
	
	
}