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
		int n,m;
		cin>>n>>m;
		ll arr[n+1];
		vector<vector<ll>> g(n+1);
		for (int i = 0; i < m; ++i)
		{
			int x,y;
			cin>>x>>y;  
			g[x].pb(y);
			g[y].pb(x);
		}
		for (int i = 1; i < n+1; ++i)
		{
			cin>>arr[i];
		}
		vector<vector<int>> con;
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		for (int i = 1; i < g.size(); ++i)
		{
			if(vis[i]==0){
				vector<int> p;
				queue<int> q;
				q.push(i);
				p.pb(i);
				vis[i]=1;
				while(!q.empty()){
					int a=q.front();
					q.pop();
					for (int j = 0; j < g[a].size(); ++j)
					{
						if(vis[g[a][j]]==0){
							vis[g[a][j]]=1;
							q.push(g[a][j]);
							p.pb(g[a][j]);
						}
					}	
				}
				con.pb(p);
			}
		}
		ll maxi=0;
		for (int i = 0; i < con.size(); ++i)
		{
			ll sum=0;
			for (int j = 0; j < con[i].size(); ++j)
			{
				sum+=arr[con[i][j]];
			}
			maxi=max(maxi,sum);
		}
		cout<<maxi<<endl;
	}
	return 0;
}	