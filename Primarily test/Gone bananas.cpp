#include<bits/stdc++.h>
using namespace std;
 
string solve (int N,bool b[]) {
   
   if(b[N]==true)
   return "Yes";
   else
   return "No";
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool b[1000001];
   int i,j;
   memset(b,false,sizeof b);
   b[0]=b[1]=false;
   for(i=2;i<=sqrt(1000000);i++)
   {
       if(b[i]==false)
       {
           for(j=i*i;j<=1000000;j+=i)
           b[j]=true;
       }
   }
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N,b);
        cout << out_;
        cout << "\n";
    }
}