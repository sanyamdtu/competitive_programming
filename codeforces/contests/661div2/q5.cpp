#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll ks;
void dfs(multiset<int,greater<int>> &s,pair<int,int> a,vector<vector<pair<int,int>>> g,int vis[],ll &c){
	vis[a.first]=1;
	s.insert(a.second);
	int f=0;
	for (int i = 0; i < g[a.first].size(); ++i)
	{
		 if(vis[g[a.first][i].first]==0){
		 	f=1;
		 	dfs(s,g[a.first][i],g,vis,c);
		 }
	}
	if(f==0){
		for (auto j:s)
		{
				sum+=j;
		}
		if(sum>ks){
			int a=*(s.begin());
			s.erase(s.find(a));
			sum-=(a-(a/2));
			int x=(a/2);
			s.insert()
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		
		cin>>n>>ks;
		vector<vector<pair<int,int>>> g(n+1);
		for (int i = 0; i < n-1; ++i)
		{
			int u,v,w;
			cin>>u>>v>>w;
			g[u].pb({v,w});
			g[v].pb({u,w});
		}
		
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		multiset<int,greater<int>> s;
		ll moves=0;
		dfs(s,{1,0},g,vis,v,moves);
		
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	ll sum=0;
		// 	for (auto j:v[i])
		// 	{
		// 		sum+=j;
		// 	}
		// 	if(sum>ks){
		// 		while(sum>ks){
		// 			moves++;
		// 			int a=*(v[i].begin());					
		// 			v[i].erase(v[i].find(a));
		// 			for(auto j:v[i])
		// 				cout<<j<<" ";
		// 			cout<<endl;
					// sum-=(a-(a/2));
					// int x=(a/2);
		// 			cout<<x;
		// 			v[i].insert(x);
		// 		}
		// 	}
		// }
		cout<<moves<<endl;
	}
	return 0;
}