#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
pair<ll,ll> func(ll s,vector<vector<ll>>g,ll n){
	ll vis[n+1],dist[n+1];
	memset(vis,0,sizeof(vis));
	memset(dist,0,sizeof(dist));
	queue<ll> q;
	vis[s]=1;
	q.push(s);
	while(!q.empty()){
		ll a=q.front();
		q.pop();
		for (auto i:g[a])
		{
			if(vis[i]==0){
				vis[i]=1;
				dist[i]=dist[a]+1;
				q.push(i);
			}
		}
	}
	ll maxi=1;
	for (ll i = 2; i <= n; ++i)
	{
		if(dist[maxi]<dist[i])
			maxi=i;
	}
	return {maxi,dist[maxi]};
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		vector<vector<ll>> g(n+1);
		for (ll i = 0; i < n-1; ++i)
		{
			ll u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		auto a=func(1,g,n);
		auto b=func(a.first,g,n);
		cout<<(b.second+1)/2<<endl;
	}
	return 0;
}