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
	for (ll l = 1; l <=t; ++l)
	{
		ll k, n;
		cin>>n>>k;
		ll arr[n],cost=0;
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}		
		sort(arr,arr+n);
		ll d = arr[n / 2]; 
	    for (ll i = 0; i < n; ++i) 
	        cost += min(abs(arr[i] - d),abs(k-arr[i])+d); 
	    if (n % 2 == 0) { 
	        ll tempCost = 0; 
	        d = arr[(n / 2) - 1]; 
	        for (ll i = 0; i < n; ++i) 
	            tempCost += min(abs(arr[i] - d),abs(k-arr[i])+d); 
	        cost = min(cost, tempCost); 
	    } 
		cout<<"Case #"<<l<<": "<<cost<<endl;
	}
	return 0;
}