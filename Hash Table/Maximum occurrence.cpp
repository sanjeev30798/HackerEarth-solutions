#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l=s.length();
    int a[257]={0},i;
    char ch[l];
    for(i=0;i<l;i++)
    {
        a[s.at(i)]++;
        ch[(int)(s.at(i))%l]=s.at(i);
    
    }
    int max=a[s.at(0)];
    char x=ch[(int)s.at(0)%l];
    for(i=0;i<l;i++)
    {
        char g=s.at(i);
        if(a[g]>max)
        {
            max=a[g];
            x=ch[(int)g%l];
        }
        else if(a[g]==max && x>ch[(int)g%l])
        {
            x=ch[(int)g%l];
        }
    }
    cout<<x<<" "<<max;
 
 
}