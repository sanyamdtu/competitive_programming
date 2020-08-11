#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void dfs(vector<vector<int>> g,int a,int vis[],stack<int> & s){
	vis[a]=1;
	for (int j = 0; j < g[a].size(); ++j)
	{
		if(vis[g[a][j]]==0){
			 dfs(g,g[a][j],vis,s);
		}
	}
	s.push(a);
}	
void dfs2(vector<vector<int>> g,int a,int vis[],vector<int> &v){
	vis[a]=1;
	v.pb(a);
	for (int j = 0; j < g[a].size(); ++j)
	{
		if(vis[g[a][j]]==0){
			dfs2(g,g[a][j],vis,v);
		}
	}

}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n,m;
	cin>>n>>m;
	vector<vector<int>> g(n+1);
	vector<vector<int>> gT(n+1);
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;
		g[x].pb(y);
		// g[y].pb(x);
		gT[y].pb(x);
		// gT[x].pb(y);
	} 
	int vis[n+1];
	memset(vis,0,sizeof(vis));
	// for (int i = 1; i < g.size(); ++i)
	// {
	// 	for (int j = 0; j < g[i].size(); ++j)
	// 	{
	// 		cout<<g[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	stack<int> s;
	for (int i = 1; i < g.size(); ++i)
	{
		if(vis[i]==0){
			 dfs(g,i,vis,s);
		}
	}
	memset(vis,0,sizeof(vis));
	vector<vector<int>> v;
	while(!s.empty()){
		if(vis[s.top()]==0){
			vector<int> a;
			dfs2(gT,s.top(),vis,a);
			v.pb(a);
		}
		s.pop();
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}