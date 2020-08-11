#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

bool bipartite(vector<vector<int>> g){
	vector<int> a;
	a.pb(0);
	unordered_multiset<int> s1,s2;
	s1.insert(0);
	while(!a.empty()){
		int p=a.back();
		a.pop_back();
		int f=2;
		if(s1.find(p)!=s1.end())
			f=1;
		for (int i = 0; i < g[p].size(); ++i)
		{
			if(s1.find(g[p][i])!=s1.end()&&f==1||s2.find(g[p][i])!=s2.end()&&f==2){
				return false;
			}
			else if(s1.find(g[p][i])==s1.end()&&s2.find(g[p][i])==s2.end()){
				if(f==1)
					s2.insert(g[p][i]);
				else
					s1.insert(g[p][i]);
				a.pb(g[p][i]);
			}

		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,e;
		cin>>n>>e;
		vector<vector<int>> g(n+1);
		for (int i = 0; i <e ; ++i)
		{
			int u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		if(bipartite(g))
			cout<<"Yes";
		else
			cout<<"No";
		cout<<endl;
	return 0;
}