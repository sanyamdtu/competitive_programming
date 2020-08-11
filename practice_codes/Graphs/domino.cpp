#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int vis[1000001];
vector<vector<int>> g(1000001);
void dfs(int a ,vector<vector<int>> g,int vis[],list<int> &order){
	vis[a]=1;
	for (int j = 0; j < g[a].size(); ++j)
	{
		if(vis[g[a][j]]==0){
			dfs(g[a][j],g,vis,order);
		}
	}
	order.push_front(a);
}
void dfs(int a ,vector<vector<int>> g,int vis[]){
	vis[a]=1;
	for (int j = 0; j < g[a].size(); ++j)
	{
		if(vis[g[a][j]]==0){
			dfs(g[a][j],g,vis);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		for (int i = 0; i < m; ++i)
		{
			int x,y;
			cin>>x>>y;
			g[x].pb(y);
		}
		
		list<int> order;
		memset(vis,0,sizeof(vis));
		for (int i = 1; i <g.size() ; ++i)
		{
			if(vis[i]==0){
				dfs(i,g,vis,order);
			}
		}
		memset(vis,0,sizeof(vis));
		int c=0;
		for(auto i:order){
			if(vis[i]==0){
				c++;
				dfs(i,g,vis);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}