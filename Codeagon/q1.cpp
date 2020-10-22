#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
	ll i, val;
};
bool comp(node a,node b){
	if(a.val==b.val)
		return a.i<b.i;
	return a.val<b.val;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		node p[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
			p[i].val=(arr[i]+x-1)/x;
			p[i].i=i;
		}
		sort(p,p+n,comp);
		cout<<"Case #"<<l+1<<": ";
		for (ll i = 0; i < n; ++i)
		{
			cout<< p[i].i+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}