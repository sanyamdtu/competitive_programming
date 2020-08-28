#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll dp[100006][10];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<vector<int>> g(10);
	g[0].pb(7);
	g[1].pb(2);
	g[1].pb(4);
	g[2].pb(1);
	g[2].pb(3);
	g[2].pb(5);
	g[3].pb(6);
	g[3].pb(2);
	g[4].pb(1);
	g[4].pb(5);
	g[4].pb(7);
	g[5].pb(2);
	g[5].pb(4);
	g[5].pb(6);
	g[5].pb(8);
	g[6].pb(5);
	g[6].pb(3);
	g[6].pb(9);
	g[7].pb(4);
	g[7].pb(8);
	g[7].pb(0);
	g[8].pb(7);
	g[8].pb(9);
	g[8].pb(5);
	g[9].pb(8);
	g[9].pb(6);
	
	for (int i = 0; i < 10; ++i)
	{
		dp[1][i]=1;
	}
	for (int i = 2; i < 100006; ++i)
	{
		for (int j = 0; j <10 ; ++j)
		{
			ll ans=0;
			for (auto k:g[j])
			{
				ans=(ans+dp[i-1][k])%mod;
			}
			dp[i][j]=ans;
		}
	}
	// cout<<endl;
	for (int i = 1; i <100006 ; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			dp[i][j]=(dp[i][j-1]+dp[i][j])%mod;
		}
	}
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		cout<<dp[n][9]<<endl;
	}
	return 0;
}