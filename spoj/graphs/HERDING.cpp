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
		int n,m;
		cin>>n>>m;
		char arr[n][m];
		vector<pair<int,int>> g[n][m];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <m ; ++j)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='S'){
					g[i][j].pb({i-1,j});
					g[i][j]
				}
				if(arr[i][j]=='N'){
					g[i][j].pb({i+1,j});
				}
				if(arr[i][j]=='W'){
					g[i][j].pb({i,j-1});
				}
				if(arr[i][j]=='E'){
					g[i][j].pb({i,j+1});
				}
			}
		}
		int vis[n][m];
		memset(vis,0,sizeof(vis));
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < ; ++j)
			{
				if(vis[i][j]==0)
			}
		}
	}
	return 0;
}