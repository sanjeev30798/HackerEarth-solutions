#include <iostream>
using namespace std;
 
int main() {
	int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string k;
        cin>>k;
        int l=k.length();
        int i,a[l]={0};
        long long int c=1;
        int a1=0,a2=0,a3=0,a4=0,a5=0,ls=-1;
        for(i=0;i<l;i++)
        {
            char ch=k.at(i);
            if(ch=='a')
            a1=1;
            else if(ch=='e')
            a2=1;
            else if(ch=='i')
            a3=1;
            else if(ch=='o')
            a4=1;
            else if(ch=='u')
            a5=1;
            if(ch=='_')
            {
                c=c*(a1+a2+a3+a4+a5);
            }
        }
        cout<<c<<endl;
    }
	return 0;
}