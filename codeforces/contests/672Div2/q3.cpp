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
		ll n,q;
		cin>>n>>q;
		ll arr[n];
		ll ans=0,sum=0;
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
			// cout<<arr[i];
			ans=max(ans,arr[i]);
		}
		vector<ll> v;
		ll f=0;
		for (ll i = 0; i < n; ++i)
		{
			if(f==0)
			{
				if(i==n-1)
					v.pb(arr[i]);
				else if(arr[i]>arr[i+1]){
					v.pb(arr[i]);
					f=1;
				}

			}
			else{
				if(i==n-1)
					v.pb(arr[i]);
				else if(arr[i]<arr[i+1]){
				 	v.pb(arr[i]);
				 	f=0;
				}
			}
		}
		for (ll i = 0; i < v.size(); ++i)
		{
			
			if(i%2==0)
				sum+=v[i];
			else if(i!=v.size()-1)
				sum-=v[i];
		}
		cout<<max(ans,sum)<<endl;
	}
	return 0;
}