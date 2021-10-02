#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
stack<int> s;
int c;
int par[200000];
int r=-1,q=-1;
void dfs(int src, int vis[], vector<int> g[], stack<int> &s)
{
    vis[src] = 1;
    for (auto i : g[src])
    {
        if (vis[i] == 0)
        {
            dfs(i, vis, g, s);
        }
    }
    s.push(src);
}
vector<vector<int>> kosaraju(int n, vector<int> g[])
{
    int vis[n+1];
    stack<int> s;
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i < n+1; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, vis, g, s);
        }
    }
    memset(vis, 0, sizeof(vis));
    c = 0;
    vector<int> p[n+1];
    for (int i = 1; i < n+1; i++)
    {
        for (auto j : g[i])
        {
            p[j].push_back(i);
        }
    }

    while (!s.empty())
    {

        int a = s.top();
        s.pop();
        if (vis[a] == 0)
        {
            
            dfs(a, vis, p, s);
            c++;
        }
    }

    return c;
}
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<int> g[n+1];
    for (int i = 0; i < m; ++i)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    int res=kosaraju(n,g);
}