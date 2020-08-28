#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int vis[50009];
int c=0;
pair<int,int> func(int src,vector<vector<pair<int,int>>> g,int vis[]){
	vis[src]=1;
	c++;
	pair<int,int> ans={src,0};
	for (int i = 0; i < g[src].size(); ++i)
	{
		auto p=g[src][i];
		int node=p.first;
		int edgedist=p.second;
		if(vis[node]==0){
			auto pemp=func(node,g,vis);
			if(ans.second<pemp.second+edgedist){
				ans={pemp.first,pemp.second+edgedist};
			}
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		vector<vector<pair<int,int>>> g(n+1);
		for (int i = 0; i < n-1; ++i)
		{
			int a,b,l;
			cin>>a>>b>>l;
			g[a].pb({b,l});
			g[b].pb({a,l});
		}
		memset(vis,0,sizeof(vis));
		auto i=func(1,g,vis);
		memset(vis,0,sizeof(vis));
		cout<<vis[0];
		auto ans=func(i.first,g,vis);
		cout<<ans.second<<endl;
	}
	return 0;
}