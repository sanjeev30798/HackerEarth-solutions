#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main() {
	 int n;
    cin>>n;
    while(n--)
    {
    string s;
    cin>>s;
    int i,j,l=s.length(),a[123]={0};
    for(i=0;i<l;i++)
    {
        if(a[s.at(i)]==0)
        a[s.at(i)]=i+1;
    }
    
    int t=*max_element(a+97,a+123);
    for(i=1;i<=t;i++)
    {
        for(j=97;j<123;j++)
        if(a[j]==i)
        {
        cout<<(char)(j);
        break;
        }
    }
    cout<<endl;
    }
	return 0;
}