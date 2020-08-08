#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum1=0,sum2=0,i;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-m;i++)
        sum1+=a[i];
        for(i=n-1;i>=m;i--)
        sum2+=a[i];
        cout<<sum2-sum1<<endl;
    }
 
	return 0;
}