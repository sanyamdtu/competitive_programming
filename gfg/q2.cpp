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
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll ans=INT_MAX;
		if(k>=2){
			for (ll i = 0; i < n; ++i)
			{
				if(i+k-1<n){
					ans=min(ans,arr[i+k-1]-arr[i]);
				}
			}
		}
		if(k<=1)
			ans=0;
		cout<<ans<<endl;
	}
	return 0;
}