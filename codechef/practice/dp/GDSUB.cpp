#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll dp[9000][9000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		ll n,k;
		cin>>n>>k;
		ll arr[9000];
		memset(arr,0,sizeof(arr));
		for (ll i = 0; i < n; ++i){
			ll t;
			cin>>t;
			arr[t]++;
		}
		ll maxi=9000;
		vector<ll> v;
		for (ll i = 2; i < maxi; ++i){
			if(arr[i]>0)
				v.pb(arr[i]);
		}
		ll d=v.size();
		k=min(d,k);
		memset(dp,0,sizeof(dp));
		for (ll i = 1; i <= d; ++i)
			dp[i][1]=(v[i-1]+dp[i-1][1])%mod;
		for (ll i = 1; i <= d; ++i)
		{
			for(ll j=2;j<=k;j++){
				ll a=((dp[i-1][j-1]%mod)*(v[i-1]%mod))%mod;
				dp[i][j]=(a+dp[i-1][j])%mod;
			}
		}
		ll ans=0;
		for (ll i = 1; i <= k; ++i)
			ans=(dp[d][i]+ans)%mod;
		cout<<(ans+1)%mod;
	return 0;
}