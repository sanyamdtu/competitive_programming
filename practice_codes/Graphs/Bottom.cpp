#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void dfs(int src,vector<vector<int>> g,int vis[],stack<int> &s){
	vis[src]=1;
	for (int i = 0; i < g[src].size(); ++i)
	{
		if(vis[g[src][i]]==0){
			dfs(g[src][i],g,vis,s);
		}
	}
	s.push(src);
}
void dfs2(int src,vector<vector<int>> g,int vis[],vector<int> &a){
	vis[src]=1;
	for (int i = 0; i < g[src].size(); ++i)
	{
		if(vis[g[src][i]]==0){
			dfs2(g[src][i],g,vis,a);
		}
	}
	a.pb(src);
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (1)
	{
		int n,e;
		cin>>n;
		if(n==0)
			break;
		cin>>e;
		vector<vector<int>>g(n+1);
		vector<vector<int>>gT(n+1);
		for (int i = 0; i < e; ++i)
		{
			int w,v;
			cin>>v>>w;
			g[v].pb(w);
			gT[w].pb(v);
		}
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		stack<int> s;
		for (int i = 1; i < g.size(); ++i)
		{
			if(vis[i]==0){
				dfs(i,g,vis,s);
			}
		}
		memset(vis,0,sizeof(vis));
		vector<vector<int>> con;
		while(!s.empty()){
			int i=s.top();
			if(vis[i]==0){
				vector<int> a;
				 dfs2(i,gT,vis,a);
				con.pb(a);
			}
			s.pop();
		}
		int freq[n+1];
		for (int i = 0; i < con.size(); ++i)
		{
			for (int j = 0; j < con[i].size(); ++j)
			{
				freq[con[i][j]]=i;
			}
		}	
		int ans[con.size()];
		memset(ans,1,sizeof(ans));
		for (int i = 1; i < g.size(); ++i)
		{
			int f=0;
			for (int j = 0; j <g[i].size() ; ++j)
			{
				if(freq[g[i][j]]!=freq[i]){
					ans[freq[i]]=0;
				}
			}
		}
		for (int i = 0; i < ; ++i)
		{
			/* code */
		}
	}
	return 0;
}