#include <iostream>
using namespace std;
 
int main() {
	
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int p,i,sum=0,count=0;
        cin>>p;
        for(i=0;i<n;i++)
        {
            if(p>=a[i])
            {
                count++;
                sum+=a[i];
            }
        }
        cout<<count<<" "<<sum<<endl;
    }
	return 0;
}
