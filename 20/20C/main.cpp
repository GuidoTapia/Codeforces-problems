#include <bits/stdc++.h>

using namespace std;
#define pii pair<int ,int>
priority_queue<pii > q;
int nodes,edges;
vector<pii > adj[100009];
vector<int> dist,modi,vis(100009);

void print_it(int sank)
{
    if(sank!=1)print_it(modi[sank]);
    cout<<sank<<" ";
}

int main()
{
    if(7==4)
    {
        en:
            cout<<"-1\n";
            return 0;
    }
    cin>>nodes>>edges;
    modi.resize(nodes+1);
    dist.resize(nodes+1);
    for(int i=0;i<=nodes;i++){dist[i]=INFINITY;modi[i]=-1;}

    dist[1]=0;

    for(int i=0;i<edges;i++)
    {
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        adj[t1].push_back(make_pair(t2,t3));
        adj[t2].push_back(make_pair(t1,t3));
    }
    q.push({0,1});
    while(q.size()>0)
    {
        int s=q.top().second;q.pop();
        if(vis[s])continue;
        vis[s]=1;

        for(auto u: adj[s])
        {
             int u1=u.first,u2=u.second;

            if(dist[u1]>dist[s]+u2 && !vis[u1])
            {
                dist[u1]=dist[s]+u2;

                modi[u1]=s;

                q.push({-dist[u1],u1});
            }

        }

    }
    if(modi[nodes]==-1)goto en;

    print_it(nodes);

     return 0;
}