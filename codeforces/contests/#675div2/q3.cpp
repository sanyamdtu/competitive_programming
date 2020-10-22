#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	ll n;
	cin>>s;
	n=s.length();
	ll arr[n];
	ll c=1;
	ll ans=0;
	arr[n-1]=0;
	for (ll i = n-2; i >=0; --i)
	{
		arr[i]=(arr[i+1]+c*(n-i-1))%mod;
		c=(c*10)%mod;
	}
	c=1;
	for (ll i = n-1; i >=0; --i)
	{
		ll res=((i*(i+1))/2)%mod;
		ans=(ans+res*c*(s[i]-'0')+arr[i]*(s[i]-'0'))%mod;
		// cout<<ans<<" ";
		c=(c*10)%mod;
	}
	cout<<ans;
	return 0;
}