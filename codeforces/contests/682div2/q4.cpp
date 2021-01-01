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
		
		int n;
		cin>>n;
		vector<vector<pair<int,int>>> g(n+1);
		unordered_map<string,int> m;
		for (int i = 0; i < n; ++i)
		{
			string name;
			cin>>name;
			// cout<<name<<" ";
			m[name]=i+1;
			int p;
			cin>>p;
			// cout<<p<<" ";
			for (int j = 0; j < p; ++j)
			{
				int a,b;
				cin>>a>>b;
				g[i+1].pb({a,b});
			}		
			// cout<<g[i][0].first<<" "<<endl;;
		}
		// for(auto i:g){
		// 	for(auto j:i){
		// 		cout<<j.first<<" ";
		// 	}
		// 	cout<<endl;
		// }
		int q;
		cin>>q;
		while(q--){
			string u,v;
			cin>>u>>v;
			int x,y;
			x=m[u];
			y=m[v];
			set<pair<int,int>> s;
			int dist[n+1];
			for (int i = 0; i < n+1; ++i)
			{
				dist[i]=INT_MAX;
			}
			dist[x]=0;
			s.insert({dist[x],x});
			// for(auto i:g[1])

			while(!s.empty()){
				int a=s.begin()->second;
				// cout<<a<<" ";;
				s.erase(s.begin());
				for(auto i:g[a]){
					// cout<<i.first<<" ";
					if(dist[i.first]>dist[a]+i.second){
						if(s.find({dist[i.first],i.first})!=s.end()){
							s.erase(s.find({dist[i.first],i.first}));
						}
						dist[i.first]=dist[a]+i.second;
						s.insert({dist[i.first],i.first});
					}
				}
				// cout<<endl;
			}
			cout<<dist[y]<<endl;
			// cout<<"pop"<<endl;;
		}
		
	}
	return 0;
}