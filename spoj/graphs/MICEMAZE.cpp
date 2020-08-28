#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,e,t,m;
	cin>>n>>e>>t>>m;
	vector<vector<int>> g(n+1);
	int arr[n+1][n+1];
	for (int i = 0; i < m; ++i)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g[b].pb(a);
		arr[b][a]=c;
	}
	int dist[n+1];
	for (int i = 0; i < n+1; ++i)
	{
		dist[i]=INT_MAX;
	}
	dist[e]=0;

	set<pair<int,int>> s;
	s.insert({0,e});
	while(!s.empty()){
		auto a=*(s.begin());
		s.erase(s.begin());
		int node=a.second;
		// cout<<node<<" ";
		for (auto i:g[node])
		{
			if(dist[node]+arr[node][i]<dist [i]){
				if(s.find({dist[node],i})!=s.end())
					s.erase(s.find({dist[i],i}));
				dist[i]=dist[node]+arr[node][i];
				s.insert({dist[i],i});
			}
		}
	}
	int c=0;
	for (int i = 1; i <=n ; ++i)
	{
		if(dist[i]<=t)
			c++;
	}
	cout<<c<<endl;
	return 0;
}