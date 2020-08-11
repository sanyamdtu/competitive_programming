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
		int n,q;
		cin>>n>>q;
		ll arr[n];
		vector<vector<int>> g(n+1);
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			int u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		for (int i = 0; i < q; ++i)
		{
			int a,b;
			cin>>a>>b;

		}
	}
	return 0;
}

1-2-4
| |
3 5