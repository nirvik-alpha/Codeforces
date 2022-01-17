#include<bits/stdc++.h>
using namespace std;


const int mx = 53;
vector<int>adj[mx];
bool vis[mx];


void dfs(int u)
{
    vis[u]= 1;
    for(auto v :adj[u])
    {
        if(vis[v]==0)
            dfs(v);
    }
}


int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

   int cnt=0;

    for(int i=1;i<=n;i++)
    {

        if(vis[i]==0)
        {

            dfs(i);
           cnt++;
        }
    }
   cout << ( 1LL << ( n - cnt ) ) << endl;
}

