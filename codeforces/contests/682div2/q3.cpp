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
		ll n,m;
		cin>>n>>m;
		vector<vector<pair<ll,ll>>> g(n+1);
		for (ll i = 0; i < m; ++i)
		{
			ll a,b,c;
			cin>>a>>b>>c;
			g[a].pb({b,c});
			// g[b].pb({a,c});
		}
		ll x,y;
		cin>>x>>y;
		set<pair<ll,ll>> s;
		ll dist[n+1];
		for (ll i = 0; i < n+1; ++i)
		{
			dist[i]=INT_MAX;
		}
		dist[x]=0;
		s.insert({dist[x],x});
		while(!s.empty()){
			auto a=*(s.begin());
			s.erase(s.begin());
			for(auto i:g[a.second]){
				if(dist[i.first]>dist[a.second]+i.second){
					if(s.find({dist[i.first],i.first})!=s.end())
						s.erase(s.find({dist[i.first],i.first}));
					dist[i.first]=dist[a.second]+i.second;
					s.insert({dist[i.first],i.first});
				}
			}
		}
		if(dist[y]!=INT_MAX)
			cout<<dist[y]<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}