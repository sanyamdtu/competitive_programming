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
		ll n;
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll dp[n];
		dp[0]=arr[0];
		dp[1]=arr[1];
		for (ll i = 2; i < n; ++i)
		{
			dp[i]=dp[i-2]+arr[i];
		}
		ll ans=0;
		for (ll i = 0; i < n; ++i)
		{
			ans=max(dp[i],ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}