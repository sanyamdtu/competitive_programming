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
		ll maxi=INT_MIN;
		for (ll i = 0; i < n; ++i)
		{
			maxi=max(maxi,arr[i]);
		}
		vector<ll> v;
		for (ll i = 0; i < n; ++i)
		{
			if(maxi==arr[i])
				v.pb(i);
		}
		ll ans=-1;
		// cout<<maxi;
		for(auto i:v){
			ll x=INT_MAX;
			ll y=INT_MAX;
			if(x!=0)
				x=arr[i-1];
			if(y!=n-1)
				y=arr[i+1];
			if(x<arr[i]||y<arr[i])
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
			ans++;
		cout<<ans<<endl;
	}
	return 0;
}