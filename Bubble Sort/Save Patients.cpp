#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	
    int n;
    cin>>n;
    int a[n],i,a1[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>a1[i];
    sort(a,a+n);
    sort(a1,a1+n);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=a1[i])
        count++;
    }
    if(count==n)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

	return 0;
}