#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    int i;
    for(i=0;i<m;i++)
    {
        int e1,e2;
        cin>>e1>>e2;
        adj[e1].push_back(e2);
        adj[e2].push_back(e1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int s,d;
        cin>>s>>d;
        bool b[n+1];
        memset(b,false,sizeof b);
        int level[n+1]={0};
        b[s]=true;
        deque<int> deq{};
        deq.push_back(s);
        while(deq.size()>0)
        {
            int r=deq.front();
            deq.pop_front();
            for(i=0;i<adj[r].size();i++)
            {
                if(b[adj[r][i]]==false)
                {
                    level[adj[r][i]]=level[r]+1;
                    b[adj[r][i]]=true;
                    deq.push_back(adj[r][i]);
                }
            }
        }
        int c2=0;
        for(i=0;i<=n;i++)
        {
            if(level[i]==d)
            c2++;
        }
        cout<<c2<<"\n";
        c2=0;
    }
}