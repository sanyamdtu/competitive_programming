#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int dijkstra(int src,int dest,vector<vector<pair<int,int>>> g){
	set<pair<int,int>> s;
	s.insert({0,src});
	int dist
	while(!s.empty()){
		auto p=*(s.begin());
		int node=p.first;
		int ndist=p.second;
		for(auto i:)

	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	vector<vector<pair<int,int>>> g(n+1);
	for (int i = 0; i < m; ++i)
	{
		int u,v,gw;
		cin>>u>>v>>gw;
		g[u].pb({v,gw});
	}
	int cost=0;
	for(auto i:g[1]){
		s
	}
	return 0;
}