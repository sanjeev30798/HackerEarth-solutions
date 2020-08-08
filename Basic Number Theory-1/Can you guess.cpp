#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int s,c=0,i;
        cin>>s;
        for(i=1;i<s;i++)
        {
            if(s%i==0)
            c+=i;
        }
        cout<<c<<"\n";
    }
}