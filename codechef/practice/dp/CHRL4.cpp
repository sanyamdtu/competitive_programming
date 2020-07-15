#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	ll j=0;
	multiset<> s;
	ll dp[n+1];
	double temp[n+1];
	temp[0]=log(dp[n+1]);
	dp[0]=(arr[0])%mod;
	s.insert(temp[0]);
	for (ll i = 1; i < n; ++i)
	{
		if(i-j>k){
			s.erase(s.find(temp[j]));
			j++;
		}
		auto a=s.begin();
		double v=(*a)%mod;
		dp[i]=(v*arr[i])%mod;
		temp[i]
		s.insert(dp[i]);
	}
	cout<<(dp[n-1])%mod;
	return 0;
}