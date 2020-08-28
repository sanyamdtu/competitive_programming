#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n;
	vector<vector<int>> g(n+1);
	for (int i = 0; i < n-1; ++i)
	{
		int u,v;
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	int vis[n+1];
	int level[n+1];
	memset(vis,0,sizeof(vis));
	queue<int> q;
	q.push(1);
	vis[1]=1;
	level[1]=0;
	// for (int i = 1; i < g.size(); ++i)
	// {
	// 	for (int j = 0; j < g[i].size(); ++j)
	// 	{
	// 		cout<<g[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	memset(level,0,sizeof(level));
	while(!q.empty()){
		int a=q.front();
		// cout<<a<<endl;
		q.pop();
		for (int i = 0; i < g[a].size(); ++i)
		{
			if(vis[g[a][i]]==0){
				vis[g[a][i]]=1;
				q.push(g[a][i]);
				level[g[a][i]]=level[a]+1;
			}
		}
	}
	int src=1;
	for (int i = 2; i <=n ; ++i)
	{
		if(level[src]<level[i])
			src=i;
		// cout<<level[i]<<" ";
	}
	memset(vis,0,sizeof(vis));
	q.push(src);
	vis[src]=1;
	level[src]=0;
	while(!q.empty()){
		int a=q.front();
		q.pop();
		for (int i = 0; i < g[a].size(); ++i)
		{
			if(vis[g[a][i]]==0){
				vis[g[a][i]]=1;
				q.push(g[a][i]);
				level[g[a][i]]=level[a]+1;
			}
		}
	}
	int ans=0;
	// cout<<src<<endl;
	for (int i = 1; i <=n ; ++i)
	{
		ans=max(ans,level[i]);
		// cout<<level[i]<<" ";
	}
	cout<<ans;
	return 0;
}