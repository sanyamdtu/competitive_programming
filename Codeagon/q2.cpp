#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node {
	ll s,e;
};
bool comp(node a,node b){
	if(a.s==b.s)
		return a.e<b.e;
	return a.s<b.s;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;

	for (ll l = 0; l < t; ++l)
	{
		ll n,k;
		cin>>n>>k;
		node arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i].s>>arr[i].e;
		}
		sort(arr,arr+n,comp);
		ll ans=0;
		ll prev=0;
		ll maxi=0;
		for (ll i = 0; i < n; ++i)
		{
			if(arr[i].s>prev)
				prev=arr[i].s;
			while(arr[i].e>prev){
				ans++;
				prev+=k;
			}
		}
		cout<<"Case #"<<l+1<<": ";
		cout<<ans<<endl;
	}
	return 0;
}