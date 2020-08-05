#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n+1];
        deque<int> q;
        int i;
        int level[n+1]={0};
        q.push_back(1); // starting node 1
        for(i=0;i<m;++i)
        {
            int e1,e2;
            cin>>e1>>e2;
            adj[e1].push_back(e2);
            adj[e2].push_back(e1);
        }
        bool b[n+1];
        memset(b,false,sizeof b);
        b[1]=true;
       while(q.size()!=0)
        {
            int y=q.front();
            q.pop_front();
            for(i=0;i<adj[y].size();i++)
            {
                if(b[adj[y][i]]==false)
                {
                    b[adj[y][i]]=true;
                    q.push_back(adj[y][i]);
                    level[adj[y][i]]=level[y]+1;
                }
            }
            if(level[n]!=0)
            break;
        }
        cout<<level[n]<<"\n";
    }
}