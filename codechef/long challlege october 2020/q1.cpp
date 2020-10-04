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
		ll n;
		cin>>n;
		ll k;
		cin>>k;
		ll arr[n+1];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		arr[n]=0;
		ll ans=INF,prev=0;
		for (ll i = 0; i < n; ++i)
		{
			if(arr[i]<k){
				ans=min(ans,i+1);
			}
			arr[i]-=min(k,arr[i]);
			arr[i+1]+=arr[i];
		}

		if(arr[n]>0){
			ans=min(ans,(arr[n])/k+n+1);
		}
		else{
			ans=min(ans,n+1);
		}

		cout<<ans<<endl;
	}
	return 0;
}