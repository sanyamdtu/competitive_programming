#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;



ll mergesort(ll arr[],ll n,ll s,ll e){
	if(s>=e)
		return 0;
	ll mid=(s+e)/2;
	ll a=mergesort(arr,n,s,mid);
	 a+=mergesort(arr,n,mid+1,e);
	ll i=s,j=mid+1;
	
	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
			a+=arr[i]*(e-j+1);
			i++;
		}
		else
			j++;
	}
	sort(arr+s,arr+e+1);
	return a;
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
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout<<mergesort(arr,n,0,n-1)<<endl;
	}
	return 0;
}