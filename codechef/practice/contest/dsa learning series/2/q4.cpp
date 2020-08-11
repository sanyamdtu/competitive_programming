#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll func(ll a,ll b){
	if(a==0||b%a==0)
		return a;
	return func(b%a,a);
}
ll funcy(ll i,ll n,ll gcd,ll arr[],ll dp[][10001]){
	if(i==n){
		if(gcd==1)
			return 1;
		return 0;
	}
	if(dp[i][gcd]>-1)
		return dp[i][gcd];
	ll toop=0;
	if(gcd!=0)
	 toop=func(gcd,arr[i]);
	else
		toop=arr[i];
	return dp[i][gcd]=funcy(i+1,n,toop,arr,dp)+funcy(i+1,n,gcd,arr,dp);
}

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
		ll dp[n][10001];
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < 10001; ++j)
			{
				dp[i][j]=-1;
			}
		}
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout<<funcy(0,n,0,arr,dp)<<endl;
	}
	return 0;
}