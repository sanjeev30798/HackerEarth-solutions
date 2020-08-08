#include <iostream>
using namespace std;
 
int main() {

    int n,n1,i,j;
    cin>>n>>n1;
    cin>>ws;
    int a[n];
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        cin>>a[i];
        cin>>ws;
 
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(s[j],s[j+1]);
            }
            else if(a[j]==a[j+1])
            {
                if(s[j]>s[j+1])
                swap(s[j+1],s[j]);
 
            }
        }
    }
    for(i=0;i<n1;i++)
    cout<<s[i]<<endl;
    
	return 0;
}