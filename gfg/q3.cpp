#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		vector<vector<ll>> g(n+1);		
		for (ll i = 0; i < m; ++i)
		{
			ll u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		ll dist[n+1];
		queue<ll> q;
		for (ll i = 0; i < n+1; ++i)
		{
			dist[i]=-1;
		}
		for (ll i = 0; i < k; ++i)
		{
			ll s;
			cin>>s;
			q.push(s);
			dist[s]=0;
		}
		while(!q.empty()){
			ll a=q.front();
			q.pop();
			for(auto i:g[a]){
				if(dist[i]==-1){
					dist[i]=dist[a]+1;
					q.push(i);
				}
			}
		}
		ll o;
		cin>>o;
		while(o--){
			ll u;
			cin>>u;	
			cout<<dist[u]<<endl;
		}
	}
	return 0;
}