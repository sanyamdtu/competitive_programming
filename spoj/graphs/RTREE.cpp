#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll ans[1000010],vis[1000010];
struct node{
	ll inc,exc;
};
bool comp(ll a,ll b)
{
	return a>b;
}
node dfs(ll src,ll ans[],vector<vector<ll>> g,ll vis[]){
	vis[src]=1;
	ll a=0,b=0;	
	vector<ll> v;
	for(auto i: g[src]){
		if(vis[i]==0){
			node temp=dfs(i,ans,g,vis);
			v.pb(temp.inc);
			b=max(temp.exc,b);				
		}
	}
	sort(v.begin(), v.end(),comp);
	ll temp=0;
	if(!v.empty())
		temp=v[0];
	a=1;
	if(v.size()>=1){
		a=v[0]+1;
	}
	if(v.size()>=2){
		b=max(v[0]+v[1],b);		 
	}

	ans[src]=max(temp,b);
	return {a,b};
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n,r,q;
	cin>>n;
	vector<vector<ll>> g(n+1);
	for (ll i = 0; i < n-1; ++i)
	{
		ll u,v;
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	cin>>r;
	memset(vis,0,sizeof(vis));
	node a=dfs(r,ans,g,vis);
	cin>>q;
	for (ll i = 0; i < q; ++i)
	{
		ll s;
		cin>>s;
		cout<<ans[s]<<endl;
	}
	return 0;
}