#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,e;
		cin>>n>>e;
		vector<vector<int>> g(n);
		for (int i = 0; i < e; ++i)
		{
			int u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		int vis[n];
		int c=0;
		memset(vis,0,sizeof(vis));
		for (int i = 0; i < n; ++i)
		{
			if(vis[i]==0){
				c++;
				queue<int> q;
				q.push(i);
				vis[i]=1;
				while(!q.empty()){
					int a=q.front();
					q.pop();
					for (int i = 0; i < g[a].size(); ++i)
					{
						if(vis[g[a][i]]==0){
							vis[g[a][i]]=1;
							q.push(g[a][i]);
						}
					}					
				}
			}
		}	
		cout<<c<<endl;
	}
	return 0;
}